class Solution {
  public:
    int binarySearch(vector<int>& arr, int k) {
        int low = 0;
        int high = static_cast<int>(arr.size()) - 1; //! FOCUS HERE ITS LIKE N-1

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == k) { //! FOCUS HERE WE USE ARRAY
                return mid;
            } else if (arr[mid] < k) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return -1;
    }
};