class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        ans=[]
        ds=[]
        n=len(candidates)
        def findcom(i,target):
            if i==n:
                if target==0:
                    ans.append(ds[:])
                return
            
            if candidates[i] <= target:
                ds.append(candidates[i])
                findcom( i, target-candidates[i])
                ds.pop()
            
            findcom(i+1,target)

        findcom(0,target)
        return ans
                
        