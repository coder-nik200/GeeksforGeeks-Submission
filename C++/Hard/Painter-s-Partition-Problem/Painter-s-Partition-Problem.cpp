class Solution {
	public:
	int findMax(vector<int>& arr) {
		int maxi = INT_MIN;
		
		for (int i = 0; i < arr.size(); i++) {
			maxi = max(maxi, arr[i]);
		}
		
		return maxi;
	}
	
	int requiredPainters(vector<int>& arr, long long maxPaint) {
		int noOfPaint = 1;
		long long sumOfPaint = 0;
		
		for (int i = 0; i < arr.size(); i++) {
			if (sumOfPaint + arr[i] <= maxPaint) {
				sumOfPaint += arr[i];
			} else {
				noOfPaint++;
				sumOfPaint = arr[i];
			}
		}
		
		return noOfPaint;
	}
	
	int minTime(vector<int>& arr, int k) {
		long long low = findMax(arr);
		long long high = accumulate(arr.begin(), arr.end(), 0LL);
		long long ans = -1;
		
		while (low <= high) {
			long long mid = low + (high - low) / 2;
			
			int noOfPainters = requiredPainters(arr, mid);
			
			if (noOfPainters <= k) {
				ans = mid;
				high = mid - 1;
			} else {
				low = mid + 1;
			}
		}
		
		return ans;
	}
};
