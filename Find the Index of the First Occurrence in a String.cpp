class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length() < needle.length()){
            return -1;
        }
        for(int i=0;i<=haystack.length() - needle.length();i++){
            if(haystack.substr(i,needle.length()) == needle){
                return i;
            }
        }
        return -1;
    }
};
