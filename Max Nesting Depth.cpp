class Solution {
public:
    int maxDepth(string s) {
        stack <char> st;
        int m=0,ans=0;
        for(int i=0;i<s.length();i++){
            char c = s[i];
            if(c == '('){
                st.push(c);
                ans++;
            }
            char top = st.top();
            if(c == ')' && top == '('){
                st.pop();
                m = max(ans, m);
                ans--;
            }
        }
        return m;
    }
};
