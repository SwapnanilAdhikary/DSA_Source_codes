class StockSpanner {
public:
    vector<int>arr;
    StockSpanner() {
        vector<int>arr;
    }
    
    int next(int price) {
        arr.push_back(price);
        int cnt=1;
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i] <=price)cnt++;
            else break;
        }
        return cnt;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
