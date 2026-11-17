class Solution {
	public:
	// 	Brute force: TC - O(nm log(nm))
	/*
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
	*/
	
	int upperBound(vector<int> & mat, int x, int n) {
		int low = 0;
		int high = n - 1;
		int ans = n;
		
		while (low <= high) {
			int mid = low + (high - low) / 2;
			
			if (mat[mid] > x) {
				ans = mid;
				high = mid - 1;
			} else {
				low = mid + 1;
			}
		}
		
		return ans;
	}
	
	int countSmallEqual(vector<vector<int>> & mat, int n, int m, int x) {
		int cnt = 0;
		
		for (int i = 0; i<n; i++) {
			cnt += upperBound(mat[i], x, m);
			// cnt += upper_bound(mat[i].begin(), mat[i].end(), x) - mat[i].begin();
		}
		
		return cnt;
	}
	
	// 	Binary Search: TC - O(n log m log R)
	int median(vector<vector<int>> & mat) {
		int n = mat.size();
		int m = mat[0].size();
		
		int low = INT_MAX;
		int high = INT_MIN;
		
		for (int i = 0; i<n; i++) {
			low = min(low, mat[i][0]);
			high = max(high, mat[i][m - 1]);
		}
		
		int res = (n * m) / 2;
		
		while (low <= high) {
			int mid = low + (high - low) / 2;
			
			int smallerEqauls = countSmallEqual(mat, n, m, mid);
			
			if (smallerEqauls <= res) {
				low = mid + 1;
			} else {
				high = mid - 1;
			}
		}
		
		return low;
	}
};
