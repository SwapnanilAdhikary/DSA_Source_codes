class Solution {
  public:

    int maxMeetings(vector<int>& start, vector<int>& end) {
        // Your code here
        int cnt = 0;
        int last = -1;
        vector<pair<int,int>> pq;
        for(int i=0;i<end.size();i++){
            
            pq.push_back({end[i],start[i]});
            
        }
        sort(pq.begin(),pq.end());
        for(auto& meeting : pq){
            if(meeting.second > last){
                last = meeting.first;
                cnt++;
            }
        }
        return cnt;
    }
};
