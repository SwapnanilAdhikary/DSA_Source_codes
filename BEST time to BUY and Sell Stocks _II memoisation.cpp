class Solution {
public:
 
    int f(int ind,int buy,vector<int>& prices,int n,vector<vector<long>> &dp){
        if(ind == n) return 0;
        int profit = 0;
        if(buy){
            profit = max(-prices[ind] + f(ind+1,0,prices,n,dp),0+f(ind+1,1,prices,n,dp));
        if (dp[ind][buy] != -1) return dp[ind][buy];
        }else{
            profit = max(prices[ind] + f(ind + 1,1,prices,n,dp),0+f(ind+1,0,prices,n,dp));

        }
        return dp[ind][buy] = profit;
    }
    int maxProfit(vector<int>& prices){
        int n = prices.size();
        vector<vector<long>>dp(n,vector<long>(2,-1));
        return f(0,1,prices,n,dp);
       
    }
};
