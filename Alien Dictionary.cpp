class Solution {
public:
    void dfs(int node,vector<int>&vis,stack<int>&st,vector<int> adj[]){
        vis[node]=1;
        for(auto it:adj[node]){
            if(!vis[it]) dfs(it,vis,st,adj);
        }
        st.push(node);
    }
	string findOrder(string dict[], int N, int K) {
		vector<int>adj[K];
        stack<int>st;
        vector<int>vis(K,0);
        for(int i=0;i<N-1;i++){
            string s1=dict[i];
            string s2=dict[i+1];
            int len=min(s1.size(),s2.size());
            for(int ptr=0;ptr<len;ptr++){
                if(s1[ptr]!=s2[ptr]){
                    adj[s1[ptr]-'a'].push_back(s2[ptr]-'a');
                    break;
                }
            }
        }
        for(int i=0;i<K;i++){
            if(!vis[i]) dfs(i,vis,st,adj);
        }
        string ans="";
        while(!st.empty()){
            ans+=(char)(st.top()+'a');
            st.pop();
        }
        return ans;
	}
};
