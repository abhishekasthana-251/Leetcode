class Solution:
    def combinationSum3(self, k: int, n: int) -> List[List[int]]:
        ans=[]
        def find (ind ,summ,current,k,n):
            if k==0 and summ==n:
                ans.append(current[:])
                return
            if  summ>n:
                return

            for i in range(ind,10):
                if i>n:
                    break
                current.append(i)
                find(i+1,summ+i,current,k-1,n)
                current.pop()

        find(1,0,[],k,n)
        return ans        