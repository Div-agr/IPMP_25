class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cost,profit=0,mini=prices[0],n=prices.size();
        for(int i=1;i<n;i++)
        {
            cost=prices[i]-mini;
            profit=max(profit,cost);
            mini=min(mini,prices[i]);
        }
        return profit;   
    }
};