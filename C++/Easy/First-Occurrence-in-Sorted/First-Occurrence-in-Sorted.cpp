class Solution {
	public:
	int firstSearch(vector<int> &arr, int k) {
		int st = 0;
		int end = arr.size() - 1;
		int result = -1;
		
		while (st <= end) {
			int mid = st + (end - st) / 2;
			
			if (arr[mid] == k) {
				result = mid;
				end = mid - 1;
			} else if (k > arr[mid]) {
				st = mid + 1;
			} else {
				end = mid - 1;
			}
		}
		
		return result;
	}
};
