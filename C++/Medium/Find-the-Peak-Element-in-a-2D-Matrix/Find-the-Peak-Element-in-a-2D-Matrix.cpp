class Solution {
	public:
	int findMax(vector<vector<int>> & mat, int n, int m, int col) {
		int maxIndex = mat[0][col];
		int index = 0;
		
		for (int i = 1; i<n; i++) {
			if (mat[i][col] > maxIndex) {
				maxIndex = mat[i][col];
				index = i;
			}
		}
		
		return index;
	}
	
	vector<int> findPeakGrid(vector<vector<int>> & mat) {
		int n = mat.size();
		int m = mat[0].size();
		
		int low = 0;
		int high = m - 1;
		
		while (low <= high) {
			int mid = low + (high - low) / 2;
			
			int maxRowIndex = findMax(mat, n, m, mid);
			
			int left = (mid - 1 >= 0) ? mat[maxRowIndex][mid - 1] : INT_MIN;
			int right = (mid + 1 < m) ? mat[maxRowIndex][mid + 1] : INT_MIN;
			
			if (mat[maxRowIndex][mid] >= left && mat[maxRowIndex][mid] >= right) {
				return {maxRowIndex, mid};
			} else if (mat[maxRowIndex][mid] < right) {
				low = mid + 1;
			} else {
				high = mid - 1;
			}
		}
		
		return {-1, -1};
	}
};
