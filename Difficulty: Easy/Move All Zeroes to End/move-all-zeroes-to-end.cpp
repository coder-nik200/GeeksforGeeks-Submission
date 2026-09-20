class Solution {
	public:
	void pushZerosToEnd(vector<int>& arr) {
		// Brute force
		/*
		int n = arr.size();
		vector<int>temp;
		
		// step 1
		for (int i = 0; i<n; i++) {
			if (arr[i] != 0) {
				temp.push_back(arr[i]);
			}
		}
		
		// step 2
		int nonZero = temp.size();
		for (int i = 0; i<nonZero; i++) {
			arr[i] = temp[i];
		}
		
		// step 3
		for (int i = nonZero; i<n; i++) {
			arr[i] = 0;
		}
		*/
		
		// Optimal
		int n = arr.size();
		int j = -1;
		
		for (int i = 0; i<n; i++) {
			if (arr[i] == 0) {
				j = i;
				break;
			}
		}
		
		// No zero found
		
		if (j == -1) {
			return;
		}
		
		// non zero numbers
		for (int i = j + 1; i<n; i++) {
			if (arr[i] != 0) {
				swap(arr[i], arr[j]);
				j++;
			}
		}
	}
};
