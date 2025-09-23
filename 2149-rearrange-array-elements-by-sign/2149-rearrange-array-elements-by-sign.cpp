class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>temp_even;
        vector<int>temp_odd;
        int n= nums.size();
    
        for(int i=0;i<n;i++){
            if(nums[i]>=0){
                temp_even.push_back(nums[i]);
                
            }
            else{
                temp_odd.push_back(nums[i]);
                
            }
        }
       int j=0,k=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                nums[i]=temp_even[j];
                j++;
            }
            else{
                nums[i]=temp_odd[k];
                k++;
            }
        }
        return nums;
    }
};