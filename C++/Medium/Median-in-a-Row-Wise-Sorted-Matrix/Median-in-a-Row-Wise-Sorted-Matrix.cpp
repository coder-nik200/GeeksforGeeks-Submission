class Solution {
	public:
	// 	Brute force
	vector<int> merge(vector<vector<int>> & mat, int n, int m) {
		vector<int> ans;
		
		for (int i = 0; i<n; i++) {
			for (int j = 0; j < m; j++) {
				ans.push_back(mat[i][j]);
			}
		}
		
		sort(ans.begin(), ans.end());
		return ans;
	}
	
	int median(vector<vector<int>> &mat) {
		int n = mat.size();
		int m = mat[0].size();
		
		vector<int> mergedArr = merge(mat, n, m);
		return mergedArr[(n * m) / 2];
	}
};
