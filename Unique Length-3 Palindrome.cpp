class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int res = 0;
        set<char>Unique(s.begin(),s.end());
        for(char c:Unique){
            int i=s.find(c);
            int j = s.rfind(c);
            if(j>i+1){
                set<char>Midd(s.begin()+i+1,s.begin()+j);
                res +=Midd.size();
            }
        }
        return res;
    }
};

