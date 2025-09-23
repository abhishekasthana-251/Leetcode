class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       // next_permutation(nums.begin(),nums.end());
       //next_permutation is done by STL
       //another way to solve it 

       int n=nums.size();

       int gola_index =-1;//wo index jaha pr right se drop hua hua hai ->[4,3,5,2,1,0] here 3

       for(int i=n-1;i>0;i--){
        if(nums[i]>nums[i-1]){
            gola_index=i-1;
            break;
        }

       }
       //mtlb gola_index nhi mila hai ,to ab bs reverse kr do usko
       if(gola_index !=-1){
        int swap_index =gola_index;

        for(int j=n-1;j>=gola_index+1;j--){
            if(nums[j]>nums[gola_index]){
                swap_index=j;
                break;
            }
        }
        swap(nums[gola_index],nums[swap_index]);
        
       }

       reverse(nums.begin()+gola_index+1,nums.end());


        
    }
};