class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0;i<=n-k;i++){
            int maxi = nums[i];
            for(int j=i;j<=i+k-1;j++){
                maxi = max(maxi,nums[j]);
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};
