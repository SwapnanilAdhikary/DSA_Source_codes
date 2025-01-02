class Solution
{
public:
    bool validPalindrome(string s)
    {
        int cnt=0;
        int l=0,r=s.size()-1;
        while(l<r){
            if(s[l]!=s[r]){
                if(s[l+1] == s[r]){
                    if(s[l]==s[r-1]){
                        ++l;
                        --r;
                    }
                    else{
                        l+=2;
                        --r;
                        ++cnt;
                    }
                }
                else if(s[l]==s[r-1]){
                    r-=2;
                    ++l;
                    ++cnt;
                }
                else return false;
            }
            else{
                ++l;
                --r;
            }
        }
        return cnt<2;
        
    }
};
