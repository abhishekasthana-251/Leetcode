class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy=INT_MAX;
        int sell=0;
        for(int i=0;i<n;i++){
           // buy=min(buy,prices[i]);
           // sell=max(sell,prices[i]-buy);

           //trying another way to solve
           int num=prices[i];
           if(num<buy){
            buy=num;
           }
           if((num-buy) > sell){
            sell=num-buy;
           }
        }        

        return sell;
    }
};