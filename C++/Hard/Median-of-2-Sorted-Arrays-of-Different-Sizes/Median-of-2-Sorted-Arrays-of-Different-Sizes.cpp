class Solution {
	public:
	double medianOf2(vector<int>& a, vector<int>& b) {
		// Brute Force: TC - O(n + m)
		// 		int n = a.size();
		// 		int m = b.size();
		
		// 		int i = 0;
		// 		int j = 0;
		// 		vector<int> ans;
		
		// 		while (i < n && j < m) {
		// 			if (a[i] < b[j]) {
		// 				ans.push_back(a[i]);
		// 				i++;
		// 			} else {
		// 				ans.push_back(b[j]);
		// 				j++;
		// 			}
		// 		}
		
		// 		while (i < n) {
		// 			ans.push_back(a[i]);
		// 			i++;
		// 		}
		
		// 		while (j < m) {
		// 			ans.push_back(b[j]);
		// 			j++;
		// 		}
		
		// 		int total = ans.size();
		
		// 		if (total % 2 == 1) {
		// 			return ans[total / 2];
		// 		}
		
		// 		return (ans[total / 2] + ans[total / 2 - 1]) / 2.0;
		
		// Binary Search: TC - O(log min(n, m))
		
		int n1 = a.size();
		int n2 = b.size();
		if (n1 > n2)
			return medianOf2(b, a);
		
		int low = 0;
		int high = n1;
		int left = (n1 + n2 + 1) / 2;
		int n = n1 + n2;
		
		while (low <= high) {
			int mid1 = low + (high - low) / 2;
			int mid2 = left - mid1;
			
			int l1 = INT_MIN;
			int l2 = INT_MIN;
			int r1 = INT_MAX;
			int r2 = INT_MAX;
			
			if (mid1 < n1)
				r1 = a[mid1];
			if (mid2 < n2)
				r2 = b[mid2];
			
			if (mid1 - 1 >= 0)
				l1 = a[mid1 - 1];
			if (mid2 - 1 >= 0)
				l2 = b[mid2 - 1];
			
			if (l1 <= r2 && l2 <= r1) {
				if (n % 2 == 1)
					return max(l1, l2);
				return (max(l1, l2) + (double)min(r1, r2)) / 2.0;
			} else if (l1 > r2) {
				high = mid1 - 1;
			} else {
				low = mid1 + 1;
			}
		}
		
		return 0;
	}
};
