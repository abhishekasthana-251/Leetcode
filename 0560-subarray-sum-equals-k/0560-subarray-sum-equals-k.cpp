class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        //find all the subarray 
        //check it is equal to k 
        //but it is a burte force solution 
        // int count=0;
        // for(int s=0;s<n;s++){
        //     for(int e=s;e<n;e++){
        //         int sum=0;
        //         for(int i=s;i<=e;i++){
        //             sum+=nums[i];
        //         }
        //         if(sum==k){
        //             count++;
        //         }
        //     }
        // }
        // return count;


        //now using map to see  cumulative sum 

        unordered_map<int,int>mp;

        int result =0;
        int cumSum=0;
        mp.insert({0,1});

        for(int i=0;i<n;i++){
            cumSum+=nums[i];

            if(mp.find(cumSum-k)!=mp.end()){
                result+=mp[cumSum-k];
            }
            mp[cumSum]++;
        }
        return result;


        
    }
};