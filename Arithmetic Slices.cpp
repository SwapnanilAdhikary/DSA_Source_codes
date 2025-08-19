class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int output = 0;
        int left = 0;
        for (int right = 2; right < nums.size(); ++right) {
            if (nums[right] - nums[right - 1] != nums[right - 1] - nums[right - 2]) left = right - 1;
            if (right - left + 1 >= 3) output += (right - 2) - left + 1;
        }
        return output;
    }
};
