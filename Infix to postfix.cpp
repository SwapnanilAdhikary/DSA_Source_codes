class Solution {
  public:
     int priority(char op) {
        if (op == '+' || op == '-') return 1;
        if (op == '*' || op == '/') return 2;
        if (op == '^') return 3;
        return 0;
    }

    string infixToPostfix(string& s) {
        stack<char> st;
        string ans = "";
        int n = s.size();

        for (int i = 0; i < n; ++i) {
            char c = s[i];
            if (isalnum(c)) {
                ans += c;
            } else if (c == '(') {
                st.push(c);
            } else if (c == ')') {
                while (!st.empty() && st.top() != '(') {
                    ans += st.top();
                    st.pop();
                }
                if (!st.empty()) st.pop(); // remove '('
            } else { // operator
                while (!st.empty() && priority(c) <= priority(st.top())) {
                    ans += st.top();
                    st.pop();
                }
                st.push(c);
            }
        }

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};
