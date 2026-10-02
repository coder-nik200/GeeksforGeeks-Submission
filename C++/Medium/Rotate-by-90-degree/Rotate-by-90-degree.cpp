class Solution {
	public:
	void rotateMatrix(vector<vector<int>> & mat) {
		int n = mat.size();
		
		// Step 1: Transpose the matrix
		for (int i = 0; i<n - 1; i++) {
			for (int j = i + 1; j<n; j++) {
				swap(mat[i][j], mat[j][i]);
			}
		}
		
		// Step 2: Reverse the order of rows
		for (int i = 0; i<n/2; i++) {
			swap(mat[i], mat[n - 1 - i]);
		}
	}
};
