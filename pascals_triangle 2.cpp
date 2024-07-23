class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> res(1,1);
        long long prev = 1;
        for(int k =1;k<=rowIndex;k++){
            long long next_val = prev* (rowIndex - k+1)/k;
            res.push_back(next_val);
            prev = next_val;
        }
        return res;
    }
};
