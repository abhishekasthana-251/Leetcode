class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        result=[]
        current=[]
        self.backtracking(0,nums,result,current)
        return result
    def backtracking(self,i:int,nums:List[int],result:List[List[int]],current:List[int]):
        if i>=len(nums):
            result.append(current[:])
            return
        self.backtracking(i+1,nums,result,current)
        current.append(nums[i])
        self.backtracking(i+1,nums,result,current)
        current.pop()
       
        