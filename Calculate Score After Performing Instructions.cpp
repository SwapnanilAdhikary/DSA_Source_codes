class Solution {
public:
    long long calculateScore(vector<string>& instructions, vector<int>& values) {
        long long ans=0;
        long long n = instructions.size();
        vector<bool>visited(n,false);
        int i=0;
        while(i>=0 && i<n && !visited[i]){
            visited[i]=true;
             if (instructions[i] == "add") {
                ans += values[i];
                i++;
            } else if (instructions[i] == "jump") {
                i += values[i];
            }else{
                 break;
            }
        }
        return ans;
    }
};
