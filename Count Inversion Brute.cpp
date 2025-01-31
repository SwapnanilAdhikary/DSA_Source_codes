class Solution {
  public:
    int inversionCount(vector<int> &arr) {
        int cnt = 0;
        for(int i=0;i<arr.size()-1;i++){
            for(int j = i+1;j<arr.size();j++){
                if(arr[i>arr[j]]){
                    cnt+=1;
                }
            }
        }
        return cnt;
    }
};
