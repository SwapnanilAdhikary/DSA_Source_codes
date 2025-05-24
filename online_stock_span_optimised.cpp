class Solution
{
    public:
    
    vector <int> stockSpan(vector<int> arr, int n) {
       vector<int> span(n);
        stack<int> s; // store indices

        for (int i = 0; i < n; ++i) {
            // Pop all previous prices less than or equal to current
            while (!s.empty() && arr[s.top()] <= arr[i]) {
                s.pop();
            }

            span[i] = (s.empty()) ? (i + 1) : (i - s.top());
            s.push(i);
        }

        return span;
    }
};
