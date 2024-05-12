#include<iostream>
using namespace std;
int reverse_num(int n)
{
   int rev_num = 0;
   while(n>0){
   	int ld = n%10;
   	rev_num = rev_num*10+ld;
   	n=n/10;
   }
   return rev_num;
}

int main(){
  int n;
  cin>>n;
  int dup=n;
  int reverse =reverse_num(n);
  if(reverse == dup){
  	cout<<"True";
  }else{
  	cout<<"False";
  }

}