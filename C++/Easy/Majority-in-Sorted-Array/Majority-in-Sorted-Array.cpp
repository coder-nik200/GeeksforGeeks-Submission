class Solution {
	public:
	bool isMajority(vector<int>& arr) {
		int count = 0;
		int candidate = INT_MIN;
		
		for (int i = 0; i<arr.size(); i++) {
			if (count == 0) {
				candidate = arr[i];
				count++;
			} else if (arr[i] == candidate) {
				count++;
			} else {
				count--;
			}
		}
		
		count = 0;
		for (int i = 0; i<arr.size(); i++) {
			if (arr[i] == candidate) {
				count++;
			}
		}
		
		if (count > arr.size() / 2) {
			return true;
		}
		
		return false;
	}
};
