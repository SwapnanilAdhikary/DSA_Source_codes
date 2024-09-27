class Solution
{
    public:
    //Function to find length of longest increasing subsequence.
    int longestSubsequence(int n, int a[])
    {
       vector<int> temp;
       temp.push_back(a[0]);
       for(int i = 1;i<n;i++){
           if(a[i] > temp.back()){
               temp.push_back(a[i]);
           }else{
               int ind = lower_bound(temp.begin().temp.end(),a[i]) - temp;
               temp[ind] = a[ind];
           }
       }
       return temp.size();
    }
};
