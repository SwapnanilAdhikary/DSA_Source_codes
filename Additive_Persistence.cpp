int AdditivePersistence(int num) {
  int Var=num;
  int cnt=0;
  while(Var>=10){
    int sum=0;
    int temp=Var;
    while(temp>0){
      sum+=temp%10;
      temp /=10;
    }
    Var = sum;
    cnt++;

  }
  return cnt;

}
