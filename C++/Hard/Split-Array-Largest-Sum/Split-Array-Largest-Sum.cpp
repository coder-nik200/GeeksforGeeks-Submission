class Solution {
	public:
	int findMax(vector<int>& arr) {
		int maxi = INT_MIN;
		
		for (int i = 0; i<arr.size(); i++) {
			maxi = max(maxi, arr[i]);
		}
		
		return maxi;
	}
	
	int splitArray(vector<int>& arr, long long maxSum) {
		int sumArrayCount = 1;
		long long currentSum = 0;
		
		for (int i = 0; i<arr.size(); i++) {
			if (currentSum + arr[i] <= maxSum) {
				currentSum += arr[i];
			} else {
				sumArrayCount++;
				currentSum = arr[i];
			}
		}
		
		return sumArrayCount;
	}
	
	int splitArray(vector<int>& arr, int k) {
		long long low = findMax(arr);
		long long high = accumulate(arr.begin(), arr.end(), 0LL);
		long long ans = -1;
		
		while (low <= high) {
			long long mid = low + (high - low) / 2;
			
			int requiredArray = splitArray(arr, mid);
			if (requiredArray <= k) {
				ans = mid;
				high = mid - 1;
			} else {
				low = mid + 1;
			}
		}
		
		return ans;
	}
};
