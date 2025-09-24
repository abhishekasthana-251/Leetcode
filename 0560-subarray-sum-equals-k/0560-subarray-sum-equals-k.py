class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:

        mp=defaultdict(int) #stores prefix sum frequencies
        mp[0]=1 # sum=0 appears once before starting 


        result =0
        cumSum=0

        for num in nums:

            cumSum+=num

            if (cumSum -k) in mp:
                result+=mp[cumSum-k]
            
            mp[cumSum]+=1
        
        return result
        