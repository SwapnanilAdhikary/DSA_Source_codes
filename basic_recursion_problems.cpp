#include<iostream>
using namespace std;
//print name n time
void print(int i,int n){
	if(i>n){
		return;
	}
	cout<<"swapnanil"<<endl;
	print(i+1,n);
}
//print 1-> N
void print2(int i,int n){
	if(i>n){
		return;
	}
	cout<<i<<endl;
	print2(i+1,n);
}
// rpint N->1
void print3(int i, int n) {
    if(i < n) {
        return;
    }
    cout << i << endl;
    print3(i - 1, n);
}
//print n->1 backtrack
void print4(int i,int n){
	if(i<1){
		return;
	}
	print4(i-1,n);
	cout<<i<<endl;
}
void parameterised(int i,int sum){
	sum =0;
	if(i<1){
		return;
	}
	sum +=1;
	parameterised(i-1,sum);
	cout<<sum;
}
int functional_sum(int n){
	if(n == 1){
		return 1;
	}
	return n + functional_sum(n-1);
}
int factorial(int n){
	if(n == 1) return 1;
	return n* factorial(n-1);
}
int main(){
	int n=6;
	//cin>>n;
   // print(1,n);
   // print2(1,n);
   //print3(n,1);
	//print4(3,5);
	//parameterised(n,0);
    cout<<factorial(n);
    return 0;
}