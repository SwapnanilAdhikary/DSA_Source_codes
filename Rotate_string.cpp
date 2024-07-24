class Solution {
public:
    bool rotateString(string s, string goal) {
        int len = s.length();
        for(int i=0;i<len;i++){
            s+=s[i];
            string sub = s.substr(i+1,len+1);
            if(sub==goal){
                return true;
            }
        }
        return false;
    }
};
