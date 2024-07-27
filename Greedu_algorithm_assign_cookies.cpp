class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s){
        int n = g.size();
        int m=s.size();
        int l=0,r=0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        while(l<m && r<n){
            if(g[r] <=s[l]){
                r = r+1;
            }
            l = l+1;
        }
        return r;
        
    }
};
