class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxInd = 0;
        for(int i=0;i<=n-1;i++){
            if(i> maxInd) return false;
            maxInd = max(maxInd,i+nums[i]);
             if (maxInd >= n - 1) return true;
        }
        return false;
        
    }
};
