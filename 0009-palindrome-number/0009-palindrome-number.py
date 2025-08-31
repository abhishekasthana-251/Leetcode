class Solution:
    def isPalindrome(self, x: int) -> bool:
        y=x
        revnum=0
        while(y>0):
            ld=y%10
            revnum=(revnum*10)+ld
            y=y//10
        if revnum==x:
            return True
        else:
            return False

        