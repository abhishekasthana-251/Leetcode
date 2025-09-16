class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        m,n =len(board),len(board[0]) #row and col
        directions=[(1,0),(-1,0),(0,1),(0,-1)] #down,up, right,left

        def dfs(i,j,idx):
            #if it matches the whole  word 
            if idx == len(word):
                return True

            # boundary  check + visited check 
            if  i<0 or j<0 or i>= m or j>= n or board[i][j]!= word[idx]:
                return False

            #make as visted 
            temp = board[i][j]
            board[i][j]="$"

            #explore 4 directions
            for dx,dy  in directions:
                if dfs(i+dx,j+dy,idx +1):
                    return True

            #backtracking 
            board[i][j]=temp
            return False 

        #try starting from each cell
        for i in range(m):
            for j in range(n):
                if board[i][j] ==word[0] and dfs(i ,j,0):
                    return True
        
        return False