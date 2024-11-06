class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long n = nums.size();
        long long sum = 0;
        for(int i=0;i<n;i++){
            int largest = nums[i];
            int smallest = nums[i];
            for(int j = i+1;j<n;j++){
                largest = max(largest,nums[j]);
                smallest = min(smallest,nums[j]);

                sum = sum+(largest - smallest);
            }
        }
        return sum;
    }
};
