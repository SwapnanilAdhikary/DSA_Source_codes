class Solution {
public:
  int solve(int i, vector<int>&prices,int l,int k,vector<vector<int>>&dp)
    {
        if(i==prices.size()||l==2*k)
           return 0;
        if(dp[i][l]!=-1)
           return dp[i][l];
        int profit=0;
        if(l%2==0)
        {
            int Buy=(-prices[i]+solve(i+1,prices,l+1,k,dp));
            int skip=0+solve(i+1,prices,l,k,dp);
            profit=max(Buy,skip);
        }
        else
        {
            int Sell=(prices[i]+solve(i+1,prices,l+1,k,dp));
            int skip=0+solve(i+1,prices,l,k,dp);
            profit=max(Sell,skip);
        }
        return dp[i][l]=profit;
    }
    int maxProfit(int k, vector<int>& prices) {
        vector<vector<int>>dp(prices.size(),vector<int>(2*k,-1));
        return solve(0,prices,0,k,dp);
    }
};
