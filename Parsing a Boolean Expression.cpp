class Solution {
public:
    bool parseBoolExpr(string str) {
        stack<char>st;
        int n = str.length();
        for(int i=0; i<n; i++){
            if(str[i]=='(' || str[i]=='!' || str[i]=='&' || str[i]=='|' || str[i]=='t' || str[i]=='f'){
                st.push(str[i]);
            }else if(str[i]==')'){
                vector<char>temp;
                while(!st.empty() && st.top()!='('){
                    temp.push_back(st.top());
                    st.pop();
                }
                st.pop();
                char topchar = st.top();
                st.pop();
                if(topchar == '|'){
                    char result = 'f';
                    for(int i=0; i<temp.size(); i++){
                        if(temp[i]=='t'){
                            result = 't';
                            break;
                        }
                    }
                    st.push(result);
                }else if(topchar == '&'){
                    char result = 't';
                    for(int i=0; i<temp.size(); i++){
                        if(temp[i]=='f'){
                            result = 'f';
                            break;
                        }
                    }
                    st.push(result);
                }else{
                    st.push(temp[0]=='t' ? 'f' : 't');
                }
            }
        }
        return st.top()=='t' ? true : false;
    }
};
