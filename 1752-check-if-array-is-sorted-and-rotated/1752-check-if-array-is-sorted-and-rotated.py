class Solution:
    def check(self, nums: List[int]) -> bool:
        n=len(nums)
        breaks=0
        for i in range(0,n):
            if nums[i] >nums[(i+1)%n]:
                breaks=breaks+1
        
        if(breaks<=1):
            return True

        return False