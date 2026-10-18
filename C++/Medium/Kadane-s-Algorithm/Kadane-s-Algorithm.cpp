class Solution {
	public:
	int maxSubarraySum(vector<int> &arr) {
		int sum = arr[0];
		int maxSum = arr[0];
		
		for (int i = 1; i < arr.size(); i++) {
			sum = max(arr[i], sum + arr[i]);
			maxSum = max(maxSum, sum);
		}
		
		return maxSum;
	}
};
