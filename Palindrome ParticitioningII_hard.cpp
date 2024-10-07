class Solution {
public:
    //its good to precompute

    vector<vector<bool>> computePalindromes(const string &s) {
        int n = s.size();
        vector<vector<bool>> isPalindrome(n, vector<bool>(n, false));
        for (int len = 1; len <= n; ++len) {
            for (int start = 0; start <= n - len; ++start) {
                int end = start + len - 1;
                if (s[start] == s[end] && (len <= 2 || isPalindrome[start + 1][end - 1])) {
                    isPalindrome[start][end] = true;
                }
            }
        }
        return isPalindrome;
    }

    int minCut(string s) {
        int n = s.size();
        if (n <= 1) return 0;

        vector<int> dp(n + 1, 0);
        vector<vector<bool>> isPalindrome = computePalindromes(s);

        for (int i = n - 1; i >= 0; i--) {
            int minCost = INT_MAX;
            for (int j = i; j < n; j++) {
                if (isPalindrome[i][j]) {
                    int cost = 1 + dp[j + 1];
                    minCost = min(minCost, cost);
                }
            }
            dp[i] = minCost;
        }

        return dp[0] - 1; 
    }
};
