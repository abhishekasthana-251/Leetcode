class Solution:
    def nextPermutation(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n=len(nums)
        gola_index=-1

        for i in range(n-1,0,-1):
            if nums[i]>nums[i-1]:
                gola_index=i-1
                break
            
        
        if gola_index !=-1:
            swap_index=gola_index

            for i in range(n-1,gola_index,-1):
                if nums[i]>nums[gola_index]:
                    swap_index=i
                    break
                
            nums[gola_index],nums[swap_index]=nums[swap_index],nums[gola_index]
        
        nums[gola_index+1:]=reversed(nums[gola_index+1:])
        


