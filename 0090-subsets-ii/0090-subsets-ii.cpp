class Solution {
public:
void find(int ind,vector<vector<int>>& ans,vector<int>&current,vector<int>& nums, int n){
    
    ans.push_back(current);
    for(int i=ind;i<n;i++){
        if(i>ind && nums[i]==nums[i-1])continue;
        current.push_back(nums[i]);
        find(i+1,ans,current,nums,n);
        current.pop_back();
    }

}


    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        vector<vector<int>>ans;
        vector<int>current;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        find(0,ans,current,nums,n);
        return ans;
        
    }
};