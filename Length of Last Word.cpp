class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size(); // length of the string
        int f; //tracker
        char p = ' ';
        for(int i=n-1;i>=0;i--){
            if(s[i] != p){
                f=i; //for conutinh charater count
                break;
            }
        }
        int count = 0;
        for(int i=f;i>=0;i--){
            if(s[i] == p){
                break;
            }
            count++;
        }
        return count;
    }
};
