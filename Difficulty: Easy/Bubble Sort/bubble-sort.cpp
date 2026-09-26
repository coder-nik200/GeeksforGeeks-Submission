class Solution {
	public:
	void bs(vector<int>& arr, int n) {
		if (n == 1)
			return;
		
		for (int j = 0; j<n - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
			}
		}
		
		bs(arr, n - 1);
	}
	
	void bubbleSort(vector<int>& arr) {
		bs(arr, arr.size());
	}
};
