class Solution {
	public:
	void nextPermutation(vector<int>& arr) {
		int n = arr.size();
		
		// Find the breakpoint
		int i = n - 2;
		while (i >= 0 && arr[i] >= arr[i + 1]) {
			i--;
		}
		
		// Find the next greater element and swap
		if (i >= 0) {
			int j = n - 1;
			
			while (arr[j] <= arr[i]) {
				j--;
			}
			
			swap(arr[i], arr[j]);
		}
		
		// Reverse the suffix
		reverse(arr.begin() + i + 1, arr.end());
		
	}
};
