class Solution {
public:
void find(int ind, int sum, vector<vector<int>> & ans ,vector<int>&current ,int k, int n){
    if(k==0 && sum==n){
        ans.push_back(current);
        return;
    }
    if(sum>n){
        return;
    }
    for(int i=ind ;i<=9;i++){
        if(i>n){
            break;
        }
        current.push_back(i);
        find(i+1,sum+i,ans,current,k-1,n);
        current.pop_back();

    }
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>current;
        find(1,0,ans,current,k,n);
        return ans;
        

    }
};