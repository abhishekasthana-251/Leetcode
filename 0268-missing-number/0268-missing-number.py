class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n=len(nums)
        nums_sum= n*(n+1)//2
        real_sum=sum(nums)
        return nums_sum-real_sum