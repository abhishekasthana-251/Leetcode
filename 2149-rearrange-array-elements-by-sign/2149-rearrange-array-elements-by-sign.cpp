class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    //     vector<int>temp_even;
    //     vector<int>temp_odd;
    //     int n= nums.size();
    
    //     for(int i=0;i<n;i++){
    //         if(nums[i]>=0){
    //             temp_even.push_back(nums[i]);
                
    //         }
    //         else{
    //             temp_odd.push_back(nums[i]);
                
    //         }
    //     }
    //    int j=0,k=0;
    //     for(int i=0;i<n;i++){
    //         if(i%2==0){
    //             nums[i]=temp_even[j];
    //             j++;
    //         }
    //         else{
    //             nums[i]=temp_odd[k];
    //             k++;
    //         }
    //     }
    //     return nums;


    //other way to  solve

    int n=nums.size();
    int positive=0;
    int negative =1;
    vector<int>ans(n,0); //here we don't need to push_back , because we can know the size , access by index , and ans =[0,0,0,0] 
    for(int i=0;i<n;i++){
    if(nums[i]<0){
        ans[negative]=nums[i];
        negative+=2;
    }
    else{
        ans[positive]=nums[i];
        positive+=2;
    }
    }
        return ans;
    }
};