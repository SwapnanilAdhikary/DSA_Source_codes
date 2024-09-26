class MyCalendar {
public:
    vector<pair<int,int>> events;
    MyCalendar() {}
    bool book(int start, int end) {
        for(const auto& event:events){
            if(start < event.second && end > event.first){
                return false;
            }
        }
        events.emplace_back(start,end);
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
