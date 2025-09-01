class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
        int r =s.size()-1;
        while(l<r){
        //  skiping the non-alphanumeric from left
        while(l<r && !isalnum(s[l])) l++;
        // skiping the non-alphanumric from right
        while(l<r && !isalnum(s[r]))r--;
        // checking for the alphanumeric is same(palindrome)
        if(tolower(s[l])!= tolower(s[r]))return false;
        
        l++;
        r--;
        }
        return true;

    }
};