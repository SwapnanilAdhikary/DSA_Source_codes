class Solution {
public:
    void reverseString(string &s, int start,int end){
        while(start<end){
            swap(s[start++],s[end--]);
        }
    }
    string reverseWords(string s) {
       int n = s.length();
       reverseString(s,0,n-1);
       int i=0,j=0,start=0,end=0;
       while(j < n){
        while(j<n && s[j] == ' ')j++;
        if(j == n) break;
        start = i;
        while (j < n && s[j] != ' ') {
                 s[i++] = s[j++];
        }
        end = i-1;
        reverseString(s, start, end);
        
            if (j < n) {
                s[i++] = ' ';
            }
       }
       if (i > 0 && s[i - 1] == ' ') i--;

        return s.substr(0, i);
    } 
};
