class Solution {
public:
    vector<int> assignElements(vector<int>& groups, vector<int>& elements) {
        int n = groups.size();
        int m = elements.size();
        vector<int> assigned(n,-1);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(groups[i]%elements[j] == 0){
                    assigned[i]=j;
                    break;
                }
            }
        }
        return assigned;
    }
};
