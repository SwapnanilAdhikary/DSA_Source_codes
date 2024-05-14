#include<iostream>
using namespace std;

int main(){
	string s;
	cin>> s;

	//pre-compute
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
    	hash[s[i] - 'a']++;
    }
	int q;
	cin>>q;
	while(q--){
		char c;
		cin>>c;
		//fetch
		cout<<hash[c-'a']<<endl;
	}
	return 0;
}