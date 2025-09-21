class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int max_end_here=nums[0]; // if it equal to 0 , then it give wrong ans for  nums=[-1] ,
        int max_so_far=nums[0];
        for(int i=1;i<n;i++){
            max_end_here=max(nums[i],max_end_here+nums[i]);
            max_so_far=max(max_so_far,max_end_here);

        }
        return max_so_far;
    }
};