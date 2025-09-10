class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        def backtracking(start ,target,current ,ans):
            if target ==0:
                ans.append(list(current))
                return 
            
            for i in range(start , len(candidates)):
                #skip duplicates 
                if i> start and candidates[i]==candidates[i-1]:
                    continue
                
                if candidates[i] >target:
                    break
                current.append(candidates[i])
                backtracking(i+1, target-candidates[i],current,ans)
                current.pop()
            
        
        candidates.sort()
        ans=[]
        backtracking(0,target,[],ans)
        return ans        