class Solution {
	public:
	int single(vector<int>& arr) {
		// Optimal approach
		int ans = 0;
		
		for (int i = 0; i<arr.size(); i++) {
			ans ^= arr[i];
		}
		
		return ans;
		
		// 		Brute force
		// 		for (int i = 0; i<arr.size(); i++) {
		// 			int count = 0;
		
		// 			for (int j = 0; j<arr.size(); j++) {
		// 				if (arr[i] == arr[j]) {
		// 					count++;
		// 				}
		// 			}
		
		// 			if (count == 1)
		// 				return arr[i];
		// 		}
		
		// 		return - 1;
	}
};
