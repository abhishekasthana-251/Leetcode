class Solution {
public:
void find(int ind ,vector<int>&arr,int target ,vector<int> &current,vector<vector<int>>& ans ,int n,int sum){
    if(sum==target){
        ans.push_back(current);
        return;
    }
    if(sum>target)return ;
    if(ind==n)return;
    //pick
    current.push_back(arr[ind]);
    sum+=arr[ind];
    find(ind+1, arr,target,current,ans ,n,sum);
    current.pop_back();
    sum-=arr[ind];

    while(ind+1 <arr.size() && arr[ind]==arr[ind+1]) ind++;

    find(ind+1,arr,target,current ,ans ,n, sum);
}

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int>current;
        sort(candidates.begin(),candidates.end());
        int n= candidates.size();
        find(0,candidates,target,current,ans,n,0);
        return ans;
        
    }
};