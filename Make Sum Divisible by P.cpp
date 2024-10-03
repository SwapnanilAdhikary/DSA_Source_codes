class Solution {
public:
    int SmallestSubarray(vector<int>&nums,int p,int remainder){
        long long prefixSum = 0;
        int minLength = nums.size();
        unordered_map<int,int>prefixMap;
        prefixMap[0]= -1;

        for(int i=0;i<nums.size();i++){
            prefixSum += nums[i];
            int targetRemainder = (prefixSum % p - remainder + p) % p;

            if(prefixMap.find(targetRemainder) != prefixMap.end()){
                minLength = min(minLength,i-prefixMap[targetRemainder]);
            }
            prefixMap[prefixSum % p]  = i;
        }
        return minLength < nums.size() ? minLength: -1; 

    }
    int minSubarray(vector<int>& nums, int p) {
        long long totalSum = 0;
        for(int num:nums){
            totalSum += num;
        }
        int remainder = totalSum % p;
        if (remainder == 0){
            return 0;
        }
        return SmallestSubarray(nums,p,remainder);
    }
};
