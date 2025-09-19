class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        n=len(nums)
        temp=0
        count=0
        for i in range(0,n):
            if(nums[i]==1):
                count=count+1
                temp=max(count,temp)
            else:
                count=0
        
        return temp
        