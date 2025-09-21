class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        n=len(nums)
        max_end_here=0
        max_so_far=0
        for i in range(0,n):
            max_end_here=max(nums[i],max_end_here+nums[i])
            max_so_far=max(max_end_here,max_so_far)

        return max_so_far
        