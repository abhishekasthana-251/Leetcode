class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        n=len(numbers)
        s=0
        e=n-1
        while(s<=e):
            summ = numbers[s]+numbers[e]
            if(summ == target):
                return [s+1,e+1]
            elif(summ > target):
                e=e-1
            else:
                s=s+1
            
        



        