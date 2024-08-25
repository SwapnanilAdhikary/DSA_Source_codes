//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:

    bool f(int ind, int target, vector<int> &arr,vector<vector<int>> &dp){
        if(target == 0) return true;
        if(ind == 0) return (arr[0] == target);
        if(dp[ind][target] != -1) return dp[ind][target];
        bool notTake = f(ind-1,target,arr,dp);
        bool take = false;
        if(arr[ind] <= target) take = f(ind -1,target - arr[ind],arr,dp);
        return dp[ind][target] = take | notTake;
        
    }
    bool isSubsetSum(vector<int>arr, int sum){
        int n = arr.size();
        vector<vector<int>> dp(n,vector<int>(sum+1,-1));        
        return f(n-1,sum,arr,dp);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends
