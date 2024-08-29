class Solution {
public:

    int f(int ind,int T,vector<int> &nums,vector<vector<int>> &dp){
        if (T == 0) return 0;
        if (ind < 0) return INT_MAX;
        if(dp[ind][T] != -1) return dp[ind][T]; 
        int notTake = f(ind - 1, T, nums,dp);
        int take = INT_MAX;
        if (nums[ind] <= T) {
            int subProblem = f(ind, T - nums[ind], nums,dp);
            if (subProblem != INT_MAX) take = subProblem + 1;
        }

        return dp[ind][T] = min(take, notTake);
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        int ans = f(n-1,amount,coins,dp);
        if(ans >= 1e9) return -1;
        return ans;
    }
};
