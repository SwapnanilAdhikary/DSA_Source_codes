class Solution {
public:
    void sum(int k,int n,vector<vector<int>> &ans,vector<int> &ds,int start){
        if(k == 0 && n== 0){
            ans.push_back(ds);
            return;
        }
        if((k>0 && n==0) || (k==0 && n>0)){
            return; 
        }
        for(int num=start;num<=9;num++){
            if(num>n){
                break;
            }
            ds.push_back(num);
            sum(k-1,n-num,ans,ds,num+1);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> ds;
        vector<vector<int>> ans;
        sum(k,n,ans,ds,1);
        return ans;
    }
};
