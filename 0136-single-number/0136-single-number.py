class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        n=len(nums)
        x=0
        for i in range(0,n):
            x=x^nums[i]

        return x
        