class Solution {
	public:
	int findMax(vector<int>& arr) {
		int maxi = INT_MIN;
		int n = arr.size();
		
		for (int i = 0; i<n; i++) {
			maxi = max(maxi, arr[i]);
		}
		
		return maxi;
	}
	
	long long countTotalHours(vector<int>& arr, int mid) {
		int totalHours = 0;
		int n = arr.size();
		
		for (int i = 0; i<n; i++) {
			totalHours += (arr[i] + mid - 1) / mid;
		}
		
		return totalHours;
	}
	
	int kokoEat(vector<int>& arr, int k) {
		int low = 1;
		int high = findMax(arr);
		int ans = 0;
		
		while (low <= high) {
			int mid = low + (high - low) / 2;
			
			long long minH = countTotalHours(arr, mid);
			
			if (minH <= k) {
				ans = mid;
				high = mid - 1;
			} else {
				low = mid + 1;
			}
		}
		
		return ans;
	}
};
