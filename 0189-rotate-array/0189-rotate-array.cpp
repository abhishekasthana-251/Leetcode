class Solution {
public:
    void rotate(vector<int>& nums, int k) {
         int n=nums.size();
        k=k%n;//normalizing k prevents unnecessary extra rotations.Rotate by k=11: same as k=11%5=1 → [5,1,2,3,4]

        vector<int>temp(k);
       

        for(int i=0;i<k;i++){
            temp[i]=nums[n-k+i];
        }
        for(int i=n-1;i>=k;i--){
            nums[i]=nums[i-k];
        }
        
        for(int i=0;i<k;i++){
            nums[i]=temp[i];
            
        }
        
    }
};