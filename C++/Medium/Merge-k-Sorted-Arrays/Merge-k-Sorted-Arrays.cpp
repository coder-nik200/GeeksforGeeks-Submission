class Solution {
	public:
	vector<int> merge(vector<int>left, vector<int>right) {
		int n = left.size();
		int m = right.size();
		
		int i = 0;
		int j = 0;
		
		vector<int> ans;
		ans.reserve(n + m);
		
		while (i < n && j < m) {
			if (left[i] <= right[j]) {
				ans.push_back(left[i]);
				i++;
			} else {
				ans.push_back(right[j]);
				j++;
			}
		}
		
		while (i < n) {
			ans.push_back(left[i]);
			i++;
		}
		
		while (j < m) {
			ans.push_back(right[j]);
			j++;
		}
		
		return ans;
	}
	
	vector<int> mergeSort(vector<vector<int>> & mat, int low, int high) {
		if (low == high) {
			return mat[low];
		}
		
		int mid = low + (high - low) / 2;
		
		vector<int>left = mergeSort(mat, low, mid);
		
		vector<int>right = mergeSort(mat, mid + 1, high);
		
		return merge(left, right);
	}
	
	vector<int> mergeArrays(vector<vector<int>> &mat) {
		int n = mat.size();
		
		if (n == 0) {
			return {};
		}
		
		return mergeSort(mat, 0, n - 1);
	}
};
