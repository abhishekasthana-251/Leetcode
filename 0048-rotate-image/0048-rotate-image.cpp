class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        //n*n
        int m=matrix.size();
        int n=m;

        //transpose nikalo
        for(int i=0;i<m;i++){
            for(int j=i;j<n;j++){
                //diagonal element se swap kr do ... upper wale se niche walo ko ... col ko row bna do
                swap(matrix[i][j],matrix[j][i]);

            }
        }
        //reverse kr do transpose matrix ko
        for(int i=0;i<m;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        } 

        
    }
};