class Solution {
	public:
	int countTriplets(int sum, vector<int>& arr) {
		int n = arr.size();
		int count = 0;
		
		sort(arr.begin(), arr.end());
		
		for (int i = 0; i < n - 2; i++) {
			int j = i + 1;
			int k = n - 1;
			
			while (j < k) {
				int sum1 = arr[i] + arr[j] + arr[k];
				
				if (sum1 < sum) {
					count += k - j;
					j++;
				}
				else {
					k--;
				}
			}
		}
		
		return count;
	}
};
