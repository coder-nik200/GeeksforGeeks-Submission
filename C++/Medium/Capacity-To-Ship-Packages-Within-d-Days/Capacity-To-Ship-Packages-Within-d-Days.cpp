class Solution {
	public:
	int findMax(vector<int>& arr) {
		int maxi = INT_MIN;
		
		for (int i = 0; i<arr.size(); i++) {
			maxi = max(maxi, arr[i]);
		}
		
		return maxi;
	}
	
	int totalCapacity(vector<int>& arr, int cap) {
		int days = 1;
		int load = 0;
		
		for (int i = 0; i<arr.size(); i++) {
			if (load + arr[i] > cap) {
				days++;
				load = arr[i];
			} else {
				load += arr[i];
			}
		}
		
		return days;
	}
	
	int leastWeightCapacity(vector<int>& arr, int d) {
		int low = findMax(arr);
		int high = accumulate(arr.begin(), arr.end(), 0);
		int ans = INT_MAX;
		
		while (low <= high) {
			int mid = low + (high - low) / 2;
			
			long long noOfDays = totalCapacity(arr, mid);
			if (noOfDays <= d) {
				ans = mid;
				high = mid - 1;
			} else {
				low = mid + 1;
			}
		}
		
		return ans;
	}
};
