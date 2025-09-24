class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        if len(matrix) == 0:
            return []
        
        m = len(matrix)
        n = len(matrix[0])
        result = []
        top, down, left, right = 0, m - 1, 0, n - 1
        direction = 0   # 0=left→right, 1=top→down, 2=right→left, 3=down→top

        while top <= down and left <= right:

            # left → right
            if direction == 0:
                for i in range(left, right + 1):
                    result.append(matrix[top][i])
                top += 1

            # top → down
            elif direction == 1:
                for i in range(top, down + 1):
                    result.append(matrix[i][right])
                right -= 1

            # right → left
            elif direction == 2:
                for i in range(right, left - 1, -1):
                    result.append(matrix[down][i])
                down -= 1

            # down → top
            elif direction == 3:
                for i in range(down, top - 1, -1):
                    result.append(matrix[i][left])
                left += 1

            direction = (direction + 1) % 4

        return result
