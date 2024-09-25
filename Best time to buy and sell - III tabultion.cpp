class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n == 0) return 0;

        vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(2, vector<int>(3, 0)));

        
        for (int ind = n - 1; ind >= 0; ind--) {
            for (int buy = 0; buy <= 1; buy++) {
                for (int cap = 1; cap <= 2; cap++) {
                    if (buy == 1) {
                    
                        dp[ind][buy][cap] = max(-prices[ind] + dp[ind + 1][0][cap], 
                                               dp[ind + 1][1][cap]); 
                    } else {
                    
                        dp[ind][buy][cap] = max(prices[ind] + dp[ind + 1][1][cap - 1], 
                                               dp[ind + 1][0][cap]);
                    }
                }
            }
        }

        return dp[0][1][2];
    }
};
