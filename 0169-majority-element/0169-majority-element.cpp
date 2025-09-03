class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int a=n/2;
        if(nums[0]==nums[a]){
            return nums[a];
        } 
        else if(nums[n-1]==nums[a]){
            return nums[a];
        }
        return -1;
    }
};