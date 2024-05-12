#include<iostream>
using namespace std;
void print_all_divisors(int n)
{
     for(int i=1;i<=n;i++)
     {
     	if(n%i==0){
     		cout<< i<<" ";
     	}
     }
}
int main()
{
    int n;
    cin>>n;
    print_all_divisors(n);
    return 0;
}