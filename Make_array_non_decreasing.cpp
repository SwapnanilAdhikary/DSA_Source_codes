class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        //count stornger number
        int size=0;
        int prev=0;
        for(int num:nums){
            if(prev<=num){
            prev=num;
            size++;
            }
        }
    return size;
    }
};
