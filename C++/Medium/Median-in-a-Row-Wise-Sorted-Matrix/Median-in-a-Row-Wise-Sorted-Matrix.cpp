class Solution {
	public:
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
		int totalArray = mergedArr.size();
		
		if (totalArray % 2 == 1) {
			return mergedArr[totalArray / 2];
		} else {
			int mid1 = mergedArr[totalArray / 2];
			int mid2 = mergedArr[totalArray / 2 - 1];
			
			return (mid1 + mid2) / 2.0;
		}
	}
};
