class Solution:
    def reverse(self, x: int) -> int:
        revnum=0
        sign=-1 if x<0 else 1 #store sign
        x=abs(x)

        while x!=0:
            ld =x%10
            revnum=(revnum*10)+ld
            x=x//10
        revnum=revnum*sign

        if revnum<-2**31 or revnum> 2**31-1:
            return 0

        return revnum

        