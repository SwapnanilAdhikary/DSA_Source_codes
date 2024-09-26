class Solution {
public:
    int f(int ind,int buy,vector<int> &prices,vector<vector<int>>&dp){
        
        if(ind >= prices.size()) return 0;
        if(dp[ind][buy] != -1) return dp[ind][buy];
        if(buy == 1){
            return dp[ind][buy]=max(-prices[ind]+f(ind+1,0,prices,dp),
            0+f(ind+1,1,prices,dp));
        }
        return dp[ind][buy]=max(prices[ind]+f(ind+2,1,prices,dp),
        0+f(ind+1,0,prices,dp));
    }


    int maxProfit(vector<int>& prices){
        int n = prices.size();
        //vector<vector<int>> dp(n,vector<int>(2,-1));
        vector<vector<int>> dp(n+2,vector<int>(2,0));
        for(int ind = n-1;ind>=0;ind--){
            for(int buy=0;buy<=1;buy++){
                if(buy == 1){
                dp[ind][buy]=max(-prices[ind]+dp[ind+1][0],
            0+dp[ind+1][1]);
        }
        else dp[ind][buy]=max(prices[ind]+dp[ind+2][1],
        0+dp[ind+1][0]);
            }
        }
        return dp[0][1];
        
    }
};
