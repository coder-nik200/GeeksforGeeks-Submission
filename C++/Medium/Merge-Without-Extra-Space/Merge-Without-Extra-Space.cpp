class Solution {
	public:
	void mergeArrays(vector<int>& a, vector<int>& b) {
		int n = a.size();
		int m = b.size();
		vector<int>ans(n + m);
		
		int idx = 0;
		int i = 0;
		int j = 0;
		
		while (i < n && j < m) {
			if (a[i] < b[j]) {
				ans[idx] = a[i];
				idx++;
				i++;
			} else {
				ans[idx] = b[j];
				idx++;
				j++;
			}
		}
		
		while (i < n) {
			ans[idx] = a[i];
			idx++;
			i++;
		}
		
		while (j < m) {
			ans[idx] = b[j];
			idx++;
			j++;
		}
		
		// copy first n to arr1
		for (int k = 0; k < n; ++k) {
			a[k] = ans[k];
		}
		
		// copy remaining m to arr2
		for (int k = 0; k < m; ++k) {
			b[k] = ans[n + k];
		}
	}
};
