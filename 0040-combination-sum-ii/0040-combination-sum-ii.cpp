class Solution {
public:
void find(int ind ,vector<int>&arr,int target ,vector<int> &current,vector<vector<int>>& ans ,int n){
    if(target==0){
        ans.push_back(current);
        return;
    }

    for(int i=ind; i< n;i++){
        if(i>ind && arr[i]==arr[i-1])continue;
        if(arr[i]>target)break;
        current.push_back(arr[i]);
        find(i+1,arr,target-arr[i],current,ans,n);
        current.pop_back();
    }
    
}

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>current;
        sort(candidates.begin(),candidates.end());
        int n= candidates.size();
        find(0,candidates,target,current,ans,n);
        return ans;
        
    }
};