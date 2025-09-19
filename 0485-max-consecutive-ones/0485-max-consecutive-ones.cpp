class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
         int temp=-1;
        for(int i=0;i<n;i++){
        
            if(nums[i]==1){
                count++;
            temp=max(temp,count);
            }
            else{
            count =0;
            }
        }
        return temp;
    }
};