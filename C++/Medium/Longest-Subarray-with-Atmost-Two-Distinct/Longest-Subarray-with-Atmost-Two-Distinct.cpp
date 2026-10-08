class Solution {
	public:
	int totalElements(vector<int> &arr) {
		int n = arr.size();
		int low = 0;
		int res = INT_MIN;
		unordered_map<int, int>f;
		
		for (int high = 0; high<n; high++) {
			f[arr[high]]++;
			
			while (f.size() > 2) {
				f[arr[low]]--;
				
				if (f[arr[low]] == 0) {
					f.erase(arr[low]);
				}
				
				low++;
			}
			
			int len = high - low + 1;
			res = max(res, len);
		}
		
		return res;
	}
};
