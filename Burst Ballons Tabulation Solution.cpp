class Solution {
public:
    int f(int i,int j, vector<int>& nums,vector<vector<int>> &dp){
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int maxi = INT_MIN;
        for(int ind=i;ind<=j;ind++){
            int cost = nums[i-1] * nums[ind] * nums[j+1] + f(i,ind-1,nums,dp) + f(ind+1,j,nums,dp);
            maxi = max(maxi,cost);
        }
        return dp[i][j] = maxi;
    }
    int maxCoins(vector<int>& nums) {
        int n = nums.size();
        nums.push_back(1);
        nums.insert(nums.begin(),1); //[1 gbfj 1]
        vector<vector<int>> dp(n+2,vector<int>(n+2,0));
        for(int i=n;i>=1;i--){
            for(int j=1;j<=n;j++){
                if(i>j) continue;
                int maxi = INT_MIN;
        for(int ind=i;ind<=j;ind++){
            int cost = nums[i-1] * nums[ind] * nums[j+1] + dp[i][ind-1] + dp[ind+1][j];
            maxi = max(maxi,cost);
        }
        dp[i][j] = maxi;

            }
        }
        return dp[1][n];
    }
}; 
