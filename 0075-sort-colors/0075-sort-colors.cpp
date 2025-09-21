class Solution {
public:
    void merge(vector<int>&nums,int low ,int mid,int high){
        vector<int> temp;
        int left=low;// [low..->.mid]
        int right=mid+1;//[mid+1..->..high]

        while( left <= mid && right <=high){
            if(nums[left]<= nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }

        while(left <= mid){
            temp.push_back(nums[left]);
            left++;
        }
        while(right <= high){
            temp.push_back(nums[right]);
            right++;
        }
        // is 'for -loop' is for because we have to return the original nums
        for( int i =low ;i<=high;i++){
            nums[i]=temp[i-low];
        } 

    }

    void ms(vector<int>& nums, int low ,int high){
        if(low==high) return;
        int mid=(low+high)/2;
        ms(nums,low,mid);
        ms(nums,mid+1,high);
        merge(nums,low ,mid ,high);
    }
    void sortColors(vector<int>& nums) {
        // using merge sort 
        int n= nums.size();
        ms(nums,0,n-1);
        
    }
};