class Solution {
public:
    int f(int ind,int T,vector<int>& coins,vector<vector<int>> &dp){
        if(ind == 0){
            return (T % coins[0] == 0);
        }
        if(dp[ind][T]!=-1) return dp[ind][T];
        int notTake = f(ind-1,T,coins,dp);
        int take = 0;
        if(coins[ind] <= T) take = f(ind,T-coins[ind],coins,dp);
        return dp[ind][T] = take+notTake;
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));   
        return f(n-1,amount,coins,dp);
    }
};
