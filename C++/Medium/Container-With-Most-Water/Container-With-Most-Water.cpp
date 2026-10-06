class Solution {
	public:
	int maxWater(vector<int> &arr) {
		int n = arr.size();
		int maxWater = 0;
		int i = 0;
		int j = n - 1;
		
		while (i < j) {
			int width = j - i;
			int height = min(arr[i], arr[j]);
			int currWater = width * height;
			maxWater = max(maxWater, currWater);
			
			if (arr[i] <= arr[j]) {
				i++;
			} else {
				j--;
			}
		}
		
		return maxWater;
	}
};
