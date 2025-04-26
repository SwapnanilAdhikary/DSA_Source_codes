class Solution {
public:
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());

        int cnt = 0, maxCnt = 0;
        int i = 0, j = 0;

        while (i < n && j < n) {
            if (arr[i] <= dep[j]) {
                cnt++;
                i++;
            } else {
                cnt--;
                j++;
            }
            maxCnt = max(maxCnt, cnt);
        }
        return maxCnt;
    }
};
