class Solution {
public:
    int lowerBound(vector<int>& arr, int x) {
        int low = 0, high = arr.size() - 1;
        int ans = arr.size();
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] >= x) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    int upperBound(vector<int>& arr, int x) {
        int low = 0, high = arr.size() - 1;
        int ans = arr.size();
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] > x) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& arr, int x) {
        int lb = lowerBound(arr, x);
        if (lb == arr.size() || arr[lb] != x) return {-1, -1};
        return {lb, upperBound(arr, x) - 1};
    }
};
