string MultipleBrackets(string str) {
  stack<char> st;
  int cnt=0;
  bool foundBracket=false;
  for (char ch:str){
    if(ch == '(' || ch == '['){
      st.push(ch);
      foundBracket=true;
    }else if(ch == ')' || ch == ']'){
      foundBracket = true;
      if(st.empty()){
        return "0";
      }
      char top = st.top();
       if ((ch == ')' && top == '(') || (ch == ']' && top == '[')) {
                st.pop();
                cnt++;
            } else {
                return "0";  
            }
    }
  }

    if (!st.empty()) {
        return "0";  
    }

    return "1 " + to_string(cnt);

}
