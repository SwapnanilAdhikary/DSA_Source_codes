class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen =0;
        int n = nums.size();
        int l=0;
        int r=0;
        int zeros = 0;
        while(r<n){
            if(nums[r]== 0){
                zeros++;
            }
            while(zeros>k){
                if(nums[l]==0){
                    zeros--;
                }
                l++;
            }
            if(zeros <=k){
                int len = r-l+1;
                maxlen = max(len,maxlen);
            }
            r++;
        }
        return maxlen;
    }
};
