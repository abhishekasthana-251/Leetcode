class Solution {
private:
void backtrack(int n, vector<string>&ans, string current,int openN,int closeN)
{
    if (openN==closeN && openN==n)
    {ans.push_back(current);
       return ;
        }

    if (openN<n){
        current.push_back('(');
        backtrack(n,ans,current,openN+1,closeN);
        current.pop_back();
    }

    if(closeN<openN){
        current.push_back(')');
        backtrack(n,ans,current,openN,closeN+1);
        current.pop_back();
    }

}
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string current;
        backtrack(n,ans,current,0,0);
        return ans;   
    }
};