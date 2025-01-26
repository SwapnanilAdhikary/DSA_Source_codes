class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int left = nums[0];
        int right = accumulate(nums.begin() + 1, nums.end(), 0);
        int count = 0;
        for(int i=1;i<nums.size();i++){
            if(abs(left - right)%2 == 0){
                count++;
            }
            left += nums[i];
            right -= nums[i];
        }
        return count;
    }
};
