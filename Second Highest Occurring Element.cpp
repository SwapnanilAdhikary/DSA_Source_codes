class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        int n=nums.size();
        int maxFreq = 0,secMaxFreq=0;
        int maxEle=-1,secEle = -1;
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            int ele = it.first;
            int freq=it.second;
            if(freq > maxFreq){
                secMaxFreq = maxFreq;
                maxFreq=freq;
                secEle = maxEle;
                maxEle=ele;
            }
            else if(freq == maxFreq){
                maxEle = min(maxEle,ele);
            }
            else if(freq > secMaxFreq){
                secMaxFreq=freq;
                secEle = ele;
            }
            else if(freq == secMaxFreq){
                secEle = min(secEle,ele);
            }
        }
        return secEle;
    }
};
