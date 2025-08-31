class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int y=x;
        int revnum=0;
        while(y!=0){
            int ld=y%10;
            revnum=(revnum*10)+ld;
            y=y/10;
        }
        if(revnum>INT_MAX || revnum<INT_MIN){
            return false;
        }
        if(revnum==x){
            return true;
        }
        return false;
    }
};