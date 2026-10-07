class Solution {
	public:
	int countSubarray(vector<int>& arr, int k) {
		int n = arr.size();
		
		if (k <= 1) {
			return 0;
		}
		
		int low = 0;
		int high = 0;
		int mul = 1;
		int res = 0;
		
		while (high < n) {
			mul *= arr[high];
			
			while (mul >= k) {
				mul /= arr[low];
				low++;
			}
			
			res += high - low + 1;
			high++;
		}
		
		return res;
	}
};
