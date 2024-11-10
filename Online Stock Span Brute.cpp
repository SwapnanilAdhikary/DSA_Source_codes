class StockSpanner {
public:
    vector<int> arr;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int ct = 0;
        arr.push_back(price);
        for(int i=arr.size() - 1;i>=0;i--){
            if(arr[i] <= price){
                ct++;
            }
            else{
                break;
            }
        }
        return ct;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
