class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        #only add open paranthesis if open<n
        #only add a closing paranthesis if closed< open
        #valid if open==close==n

        current=[]
        ans=[]

        def backtrack(openN,closeN):
            if openN == closeN==n:
                ans.append("".join(current))
                return

            
            if openN<n:
                current.append("(")
                backtrack(openN+1,closeN)
                current.pop()

            
            if closeN<openN:
                current.append(")")
                backtrack(openN,closeN+1)
                current.pop()

            
        backtrack(0,0)
        return ans


        