class Solution {
public:
    bool isPalindrome(int x) {
        
        int y=x;
        long long revnum=0;
        while(y>0){
            int ld=y%10;
            revnum=(revnum*10)+ld;
            y=y/10;
        }
        
        if(revnum==x){
            return true;
        }
        return false;
    }
};