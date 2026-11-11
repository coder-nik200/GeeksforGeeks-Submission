class Solution {
	public:
	bool possible(vector<int>& arr, int day, int k, int m) {
		int count = 0;
		int noOfB = 0;
		
		for (int i = 0; i<arr.size(); i++) {
			if (arr[i] <= day) {
				count++;
			} else {
				noOfB += count / k;
				count = 0;
			}
		}
		
		noOfB += count / k;
		
		return noOfB >= m;
	}
	
	int minDaysBloom(vector<int>& arr, int k, int m) {
		long long val = 1LL * k * m;
		
		if (val > arr.size())
			return - 1;
		
		int mini = INT_MAX;
		int maxi = INT_MIN;
		for (int i = 0; i<arr.size(); i++) {
			mini = min(mini, arr[i]);
			maxi = max(maxi, arr[i]);
		}
		
		int low = mini;
		int high = maxi;
		
		while (low <= high) {
			int mid = low + (high - low) / 2;
			
			if (possible(arr, mid, k, m)) {
				high = mid - 1;
			} else {
				low = mid + 1;
			}
		}
		
		return low;
	}
};
