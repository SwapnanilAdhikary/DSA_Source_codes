class Solution {
public:
 int f(int i, int j, string& s, string& t, vector<vector<int>>& memo) {
        if (j == 0) return 1;  
        if (i == 0) return 0;  
        if (memo[i][j] != -1) return memo[i][j];
        if (s[i - 1] == t[j - 1]) {
            return memo[i][j] = f(i - 1, j - 1, s, t, memo) + f(i - 1, j, s, t, memo);
        }
        return memo[i][j] = f(i - 1, j, s, t, memo);
    }
    int numDistinct(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<vector<int>> memo(n + 1, vector<int>(m + 1, -1));
        return f(n,m, s, t, memo);
    }
};
