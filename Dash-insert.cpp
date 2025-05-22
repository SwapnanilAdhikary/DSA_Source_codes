string DashInsert(string str) {
  string result="";
  char temp;
  for(int i=0;i<str.length();i++){
    temp=str[i];
    result+=temp;
    if(i<str.length()-1){
      int curr = temp-'0';
      int next = str[i+1]-'0';
      if(curr % 2 == 1 && next % 2 == 1){
        result+= "-";
      }
    }

  }

  return result;

}
