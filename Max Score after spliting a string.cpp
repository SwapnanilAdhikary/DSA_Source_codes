class Solution {
public:
    int maxScore(string s) {
        int Total_zeros = 0;
        for(char c:s){
            if(c=='0') Total_zeros++;
        }
        int ans=-1;
        int zeros= 0;
        int L = s.length();
        for(int i=1;i<L;i++){
            if(s.at(i-1)=='0'){
                zeros++;
                Total_zeros--;
            }
             ans=max(ans,(zeros+(L-Total_zeros-(i))));
        }
        return ans;
    }
};
