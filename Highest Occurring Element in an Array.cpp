class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        int n=nums.size();
        int maxFreq=0;
        int maxEle=0;
        unordered_map<int,int>mpp; //map ready
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            int ele = it.first;
            int freq=it.second;
            if(freq>maxFreq){
                maxFreq=freq;
                maxEle=ele;
            }else if(freq == maxFreq){
                maxEle = min(maxEle,ele);
            }
        }
        return maxEle;
    }
};
