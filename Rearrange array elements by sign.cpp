class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> Pos;
        vector<int> Neg;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                Pos.push_back(nums[i]);
            }
            else{
                Neg.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size()/2;i++){
            nums[2*i] = Pos[i];
            nums[2*i+1] = Neg[i];
        }
        return nums;
    }
};
