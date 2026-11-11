class Solution {
	public:
	int fun(int mid, int n, int m) {
		long long ans = 1;
		
		for (int i = 1; i <= n; i++) {
			ans *= mid;
			
			if (ans > m)
				return 2;
		}
		
		if (ans == m)
			return 1;
		
		return 0;
	}
	
	int nthRoot(int n, int m) {
		if (m == 0)
			return 0;
		
		int low = 1;
		int high = m;
		
		while (low <= high) {
			int mid = low + (high - low) / 2;
			
			int minN = fun(mid, n, m);
			
			if (minN == 1) {
				return mid;
			} else if (minN == 0) {
				low = mid + 1;
			} else {
				high = mid - 1;
			}
		}
		
		return - 1;
	}
};
