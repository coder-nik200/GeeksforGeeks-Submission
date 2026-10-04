class Solution {
	public:
	vector<int> removeDuplicates(vector<int> &arr) {
		// Brute force
		// 		int n = arr.size();
		// 		vector<int>ans;
		
		// 		for (int i = 0; i<n; i++) {
		// 			if (arr[i] != arr[i + 1]) {
		// 				ans.push_back(arr[i]);
		// 			}
		// 		}
		
		// 		return ans;
		
		// Optimal approach
		int n = arr.size();
		int j = 0;
		
		for (int i = 1; i<n; i++) {
			if (arr[i] != arr[j]) {
				arr[j + 1] = arr[i];
				j++;
			}
		}
		
		arr.resize(j + 1);
		return arr;
	}
};
