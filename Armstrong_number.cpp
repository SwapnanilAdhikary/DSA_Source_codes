#include<iostream>
using namespace std;

int Armstrong_number(int n){
	int sum = 0;
	while(n>0){
		int ld = n%10;
		n=n/10;
		sum += (ld*ld*ld);
	}
	return sum;
}

int main(){
    int n;
    cin>>n;
    int dup = n;
    int Armstrong = Armstrong_number(n);
    if(Armstrong==dup){
    	cout<<"its a  Armstrong_number";
    }else{
    	cout<<"its not a Armstrong_number";
    }
}