class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        arr=[0]*len(nums)
        for i in range(0,len(nums)):
            arr[i]=nums[nums[i]]
        
        return arr