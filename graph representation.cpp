#include<iostream>
using namespace std;

int main(){
	int n,m;
	cin>> n >> m;
	int adj[n+1][m+1];
    for(int i=0;i<m;i++){
    	int u,v;                 //o(n^2) time complexity reduce it 
    	cin>> u>>v;
    	adj[u][v] = 1;
    	adj[v][u] = 1;
    }
	return 0;
}
