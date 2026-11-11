class Solution {
	public:
	int firstElementKTime(vector<int>& arr, int k) {
		// Hashmap approch: TC - O(n)
		unordered_map<int, int> f;
		
		for (int i = 0; i<arr.size(); i++) {
			f[arr[i]]++;
			
			if (f[arr[i]] == k) {
				return arr[i];
			}
		}
		
		return - 1;
	}
};
