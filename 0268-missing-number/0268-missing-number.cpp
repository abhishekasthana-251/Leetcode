class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int j=0;
        
    
        sort(nums.begin(),nums.end());
        for(int i=0 ;i<n;i++){
            if(nums[i]!=j){
            return i;
         }
         j++;
        }
        if(n==2){
            return 2;
        }
        return 1;

        
    }
};