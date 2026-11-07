class Solution {
	public:
	bool isSorted(vector<int>& arr) {
		int i = 0;
		int j = 1;
		
		while (j < arr.size()) {
			if (arr[i] > arr[j]) {
				return false;
			}
			
			i++;
			j++;
		}
		
		return true;
	}
};
