#include<iostream>
using namespace std;    ///all this for directed graph
int main(){
	int n,m;
	cin>>n>>m;
	vector<int> adj[n+1];
	for(int i=0;i<m;i++){
		int u,v;
		cin>> u>>v;
		adj[u].push_back(v);   //on the Uth index save v 
		//adj[v].push_back(u);   // on the Vth index save u
	}
	return 0;
}
