class Solution {
  public:
  struct jobs{
      int deadline;
      int profit;
  };
  static bool compare(jobs a,jobs b){
      return a.profit>b.profit;
  }
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        int n=deadline.size();
        vector<jobs>jobs(n);
        for(int i=0;i<n;i++){
            jobs[i]={deadline[i],profit[i]};
        }
        sort(jobs.begin(),jobs.end(),compare);
        int maxDeadLine=0;
        for(int i=0;i<n;i++){
            maxDeadLine = max(maxDeadLine,jobs[i].deadline);
        }
        //now make a hash table out of the max deadline
        vector<int>slots(maxDeadLine+1,-1);
        int countJob=0;
        int countProfit=0;
        for(int i=0;i<n;i++){
            for(int j=jobs[i].deadline; j > 0; --j){
                if(slots[j]==-1){
                    slots[j]=i;
                    countJob++;
                    countProfit+=jobs[i].profit;
                    break;
                }
            }
        }
        return {countJob,countProfit};
    }
};
