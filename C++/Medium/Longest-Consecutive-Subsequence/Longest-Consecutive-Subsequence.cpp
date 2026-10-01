class Solution {
	public:
	int longestConsecutive(vector<int>& arr) {
		if (arr.size() == 0)
			return 0;
		
		sort(arr.begin(), arr.end());
		
		int lastSmaller = INT_MIN;
		int count = 0;
		int largest = 1;
		
		for (int i = 0; i<arr.size(); i++) {
			if (arr[i] - 1 == lastSmaller) {
				count++;
				lastSmaller = arr[i];
			} else if (arr[i] != lastSmaller) {
				count = 1;
				lastSmaller = arr[i];
			}
			
			largest = max(largest, count);
		}
		
		return largest;
	}
};
