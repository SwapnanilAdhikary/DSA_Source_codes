class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int left = 0, right = arr.size() - 1;

        // Binary search to find the closest element to x
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] < x) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        // Initialize two pointers
        left = right - 1;
        right = right;

        // Find the k closest elements
        while (k > 0) {
            if (left < 0) {
                right++;
            } else if (right >= arr.size()) {
                left--;
            } else if (x - arr[left] <= arr[right] - x) {
                left--;
            } else {
                right++;
            }
            k--;
        }

        return vector<int>(arr.begin() + left + 1, arr.begin() + right);
    }
};
