#include<iostream>
using namespace std;

int main(){
	string s;
	cin>> s;

	//pre-compute
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
    	hash[s[i]]++;
    }
	int q;
	cin>>q;
	while(q--){
		char c;
		cin>>c;
		//fetch
		cout<<hash[c]<<endl;
	}
	return 0;
}