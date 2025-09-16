class Solution {
public:
    unordered_set<string> st;
    int n;
    int t[301];//-1 =unvisited ,0=false ,1=true
    

    bool solve(int idx, string &s){
        if(idx == n){
            return true;//reached end of string

        }
        if(t[idx]!= -1)
            return t[idx];//memoization

        
        for(int l=1;l<=n-idx;l++){
            string temp=s.substr(idx,l);
            if(st.find(temp)!=st.end()&& solve(idx +l,s)){
                return t[idx]=true;
            }
        }
        return t[idx]= false;
    }
     
    bool wordBreak(string s, vector<string>& wordDict) {
        n=s.length();
        memset(t,-1,sizeof(t));

        for(string &word: wordDict){
            st.insert(word);
        }
        return solve(0,s);
        
    }
};