class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        #first reverse the n element (7,6,5,4,3,2,1)
        #second reverse the fisrt k element(5,6,7,4,3,2,1)
        #third reverse the n-k element (5,6,7,1,2,3,4)

        n=len(nums)
        k=k%n
        def reverse(start: int, end:int) -> None:
            while(start<end):
                nums[start],nums[end]=nums[end],nums[start]
                start+=1
                end-=1
            
        reverse(0,n-1)
        reverse(0,k-1)
        reverse(k,n-1)