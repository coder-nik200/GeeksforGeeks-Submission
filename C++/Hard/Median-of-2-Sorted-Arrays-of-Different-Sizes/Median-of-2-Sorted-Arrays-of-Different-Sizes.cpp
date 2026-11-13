class Solution {
	public:
	double medianOf2(vector<int>& a, vector<int>& b) {
		int n = a.size();
		int m = b.size();
		
		int i = 0;
		int j = 0;
		vector<int> ans;
		
		while (i < n && j < m) {
			if (a[i] < b[j]) {
				ans.push_back(a[i]);
				i++;
			} else {
				ans.push_back(b[j]);
				j++;
			}
		}
		
		while (i < n) {
			ans.push_back(a[i]);
			i++;
		}
		
		while (j < m) {
			ans.push_back(b[j]);
			j++;
		}
		
		int total = ans.size();
		
		if (total % 2 == 1) {
			return ans[total / 2];
		}
		
		return (ans[total / 2] + ans[total / 2 - 1]) / 2.0;
	}
};
