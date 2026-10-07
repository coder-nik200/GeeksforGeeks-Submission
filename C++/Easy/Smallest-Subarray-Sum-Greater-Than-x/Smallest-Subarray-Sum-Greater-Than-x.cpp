class Solution {
	public:
	int smallestSubWithSum(int x, vector<int>& arr) {
		int n = arr.size();
		int low = 0;
		int sum = 0;
		int res = INT_MAX;
		
		for (int high = 0; high<n; high++) {
			sum += arr[high];
			
			while (sum > x) {
				int len = high - low + 1;
				res = min(res, len);
				
				sum -= arr[low];
				low++;
			}
		}
		
		return res == INT_MAX ? 0 : res;
	}
};
