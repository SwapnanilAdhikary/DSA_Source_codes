class Solution {
public:
int dp[100005][2];
int f(int i,int canbuy,vector<int>&v,int fee)
{
    int n=v.size();
    if(i>=n)return 0;
    if(dp[i][canbuy]!=-1)return dp[i][canbuy];
    if(canbuy)
    {
        dp[i][canbuy]=max(-v[i]+f(i+1,0,v,fee),f(i+1,1,v,fee));
    }
    else
    {
        dp[i][canbuy]=max(v[i]-fee+f(i+1,1,v,fee),f(i+1,0,v,fee));
    }
    return dp[i][canbuy];
}
    int maxProfit(vector<int>& prices, int fee) {
        memset(dp,-1,sizeof dp);
        return f(0,1,prices,fee);
    }
};
