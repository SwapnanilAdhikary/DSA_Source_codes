class Solution {
public:
    int f(int ind, const std::vector<int>& heights, std::vector<int>& dp) {
        if (ind == 0) return 0;
        if (dp[ind] != -1) return dp[ind];
        int left = f(ind - 1, heights, dp) + std::abs(heights[ind] - heights[ind - 1]);
        int right = INT_MAX;
        if (ind > 1) {
            right = f(ind - 2, heights, dp) + std::abs(heights[ind] - heights[ind - 2]);
        }
        return dp[ind] = std::min(left, right);
    }
    
    int minimumEnergy(std::vector<int>& heights, int n) {
        std::vector<int> dp(n, -1); 
        return f(n - 1, heights, dp);
    }
};
