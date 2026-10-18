class Solution {
	public:
	int maxCircularSum(vector<int> &arr) {
		int curMaxSum = arr[0];
		int curMinSum = arr[0];
		int maxSum = arr[0];
		int minSum = arr[0];
		int totalSum = arr[0];
		
		for (int i = 1; i<arr.size(); i++) {
			// MaxSum
			curMaxSum = max(arr[i], curMaxSum + arr[i]);
			maxSum = max(maxSum, curMaxSum);
			
			// MinSum
			curMinSum = min(arr[i], curMinSum + arr[i]);
			minSum = min(minSum, curMinSum);
			
			totalSum += arr[i];
		}
		
		int circularSum = totalSum - minSum;
		
		if (circularSum == 0) {
			return maxSum;
		}
		
		return max(circularSum, maxSum);
	}
};
