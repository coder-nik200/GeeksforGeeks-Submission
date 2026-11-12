class Solution {
	public:
	int possible(vector<int>& arr, int mid) {
		long long sum = 0;
		
		for (int i = 0; i<arr.size(); i++) {
			sum += (arr[i] + mid - 1) / mid;
		}
		
		return sum;
	}
	
	int smallestDivisor(vector<int>& arr, int k) {
		int low = 1;
		int maxi = INT_MIN;
		for (int i = 0; i<arr.size(); i++) {
			maxi = max(maxi, arr[i]);
		}
		
		int high = maxi;
		int ans = INT_MAX;
		
		while (low <= high) {
			int mid = low + (high - low) / 2;
			
			long long minDivisor = possible(arr, mid);
			if (minDivisor <= k) {
				ans = mid;
				high = mid - 1;
			} else {
				low = mid + 1;
			}
		}
		
		return ans;
	}
};
