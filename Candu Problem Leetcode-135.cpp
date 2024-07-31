#include <vector>
class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> left(n,1);
        vector<int> right(n,1);
        if (n == 0) return 0;
        for(int i=1;i<n;i++){
            if(ratings[i] > ratings[i-1]){
                left[i] = left[i-1]+1;
            }else{
                left[i] = 1;
            }
        }
        for(int i=n-2;i>=0;--i){
            if(ratings[i]>ratings[i+1]){
                right[i] = right[i+1]+1;
            }else{
                right[i] = 1;
            }
        }
        int sum = 0;
        for(int i=0;i<n;i++){
            sum = sum + max(left[i],right[i]);
        }
        return sum;

    }
};
