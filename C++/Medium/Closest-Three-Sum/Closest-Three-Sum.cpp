class Solution {
	public:
	int closest3Sum(vector<int> &arr, int target) {
		int n = arr.size();
		sort(arr.begin(), arr.end());
		
		int closest = arr[0] + arr[1] + arr[2];
		
		for (int i = 0; i<n; i++) {
			int j = i + 1;
			int k = n - 1;
			
			while (j < k) {
				int sum = arr[i] + arr[j] + arr[k];
				
				if (abs(sum - target) < abs(closest - target) ||
				(abs(sum - target) == abs(closest - target) && sum > closest)) {
					closest = sum;
				}
				
				if (sum < target) {
					j++;
				} else if (sum > target) {
					k--;
				} else {
					return sum;
				}
			}
		}
		
		return closest;
	}
};
