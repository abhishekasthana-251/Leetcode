class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        m=len(matrix)
        n=m

        #transpose nikalna hai 
        for i in range(0,m):
            for j in range(i,n):
                #diagonal se swap krna hai 
                matrix[i][j],matrix[j][i]=matrix[j][i],matrix[i][j]

        
        #reverse krna hai 
        for row in matrix:
            row.reverse()