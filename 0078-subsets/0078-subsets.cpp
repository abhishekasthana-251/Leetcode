class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>current;
        backtracking(0,nums,current,result);
        return result;
        
    }
    void backtracking(int i,vector<int>&nums,vector<int>&current,vector<vector<int>>& result ){
        
        if(i>=nums.size()){
            result.push_back(current);
            return;

        }
        backtracking(i+1,nums,current ,result);
        current.push_back(nums[i]);
         backtracking(i+1,nums,current ,result);
        current.pop_back();
       
    }
};