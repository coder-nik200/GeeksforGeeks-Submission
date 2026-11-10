class Solution {
	public:
	int lowerBound(vector<int>& arr, int x) {
		int low = 0;
		int high = arr.size() - 1;
		
		while (low <= high) {
			int mid = low + (high - low) / 2;
			
			if (arr[mid] >= x) {
				high = mid - 1;
			} else {
				low = mid + 1;
			}
		}
		
		return low;
	}
	
	int upperBound(vector<int>& arr, int x) {
		int low = 0;
		int high = arr.size() - 1;
		
		while (low <= high) {
			int mid = low + (high - low) / 2;
			
			if (arr[mid] > x) {
				high = mid - 1;
			} else {
				low = mid + 1;
			}
		}
		
		return low;
	}
	
	vector<int> find(vector<int>& arr, int x) {
		int first = lowerBound(arr, x);
		int last = upperBound(arr, x) - 1;
		
		if (first == arr.size() || arr[first] != x) {
			return {-1, -1};
		}
		
		return {first, last};
	}
};
