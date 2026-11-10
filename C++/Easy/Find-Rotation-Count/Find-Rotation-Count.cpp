class Solution {
public:
    int findKRotation(vector<int> &arr) {
        int low = 0;
        int high = arr.size() - 1;
        int ans = INT_MAX;
        int index = -1; // To store the index of the minimum element

        while (low <= high) {
            // If the search space is already sorted, 
            // arr[low] is the minimum element in this range.
            if (arr[low] <= arr[high]) {
                if (arr[low] < ans) {
                    ans = arr[low];
                    index = low;
                }
                break;
            }

            int mid = low + (high - low) / 2;

            // If left half is sorted, the minimum can be at arr[low]
            if (arr[low] <= arr[mid]) {
                if (arr[low] < ans) {
                    ans = arr[low];
                    index = low;
                }
                low = mid + 1; // Search in the right unsorted half
            } 
            // If right half is sorted, the minimum can be at arr[mid]
            else {
                if (arr[mid] < ans) {
                    ans = arr[mid];
                    index = mid;
                }
                high = mid - 1; // Search in the left unsorted half
            }
        }

        return index; // Returns the number of rotations (which equals the index of the minimum element)
    }
};