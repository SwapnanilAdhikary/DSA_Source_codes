
class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            bool leader = true;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]>arr[i]){
                    leader = false;
                    break;
                }
            }
            if(leader == true) ans.push_back(arr[i]);
        }
        return ans;
    }
};
