class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        //apply operaton
        for(int i=0;i<n-1;i++){
            if(nums[i] == nums[i+1]){
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        //shifting 0s to the end
        int nonZeroIdx = 0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[nonZeroIdx++] = nums[i];
            }
        }
        // fill remaining position with zero
        while(nonZeroIdx < n){
            nums[nonZeroIdx++] = 0;
        }
        return nums;

    }
};
