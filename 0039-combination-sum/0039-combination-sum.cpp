class Solution {
public:
void findcom(int i, vector<vector<int>>& ans, vector<int> &ds,int n,vector<int>& arr, int target){
    if(i==n){
        if(target==0){
            ans.push_back(ds) ;
        }
        return;
    }
    if(arr[i]<=target){
        ds.push_back(arr[i]);
        findcom(i,ans,ds,n,arr,target-arr[i]);
        ds.pop_back();
    }
    findcom(i+1,ans,ds,n,arr,target);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        int n=candidates.size();
        findcom(0,ans,ds,n,candidates,target);
        return ans;
        
    }
};