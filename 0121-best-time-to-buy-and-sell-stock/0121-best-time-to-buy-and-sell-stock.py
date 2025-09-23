class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        buy=10**5
        sell=0
        n=len(prices)

        for i in range(0,n):
            num=prices[i]
            if(num<buy):
                buy=num
            
            if((num-buy)>sell):
                sell=num-buy

        
        return sell