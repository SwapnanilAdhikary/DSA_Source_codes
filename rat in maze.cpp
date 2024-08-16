//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
  
   void solve(int i,int j, vector<vector<int>> &a, int n, vector<string> &ans, string move,vector<vector<int>> &vis){
        if(i==n-1 && j==n-1){
            ans.push_back(move);
            return;
        }
        if(i+1<n && !vis[i+1][j] && a[i+1][j] == 1){
            vis[i][j] = 1;
            solve(i+1,j,a,n,ans,move + 'D',vis);
            vis[i][j] = 0;
        }
        if(j-1>=0 && !vis[i][j-1] && a[i][j-1] == 1){
            vis[i][j] = 1;
            solve(i,j-1,a,n,ans,move + 'L',vis);
            vis[i][j] = 0;
        }
        if(j+1<n && !vis[i][j+1] && a[i][j+1] == 1){
            vis[i][j] = 1;
            solve(i,j+1,a,n,ans,move+'R',vis);
            vis[i][j] = 0;
        }
        if(i-1>=0 && !vis[i-1][j] && a[i-1][j] == 1){
            vis[i][j] = 1;
            solve(i-1,j,a,n,ans,move + 'U',vis);
            vis[i][j] = 0;
        }
        
   }
    vector<string> findPath(vector<vector<int>> &mat) {
        vector<string> ans;
        int n = mat.size();
        vector<vector<int>> vis(n,vector<int>(n,0));
        if(mat[0][0] == 1) solve(0,0,mat,n,ans,"",vis);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends
