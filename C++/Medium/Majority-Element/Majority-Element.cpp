class Solution {
	public:
	int majorityElement(vector<int>& arr) {
		int count = 0;
		int candidate = 0;
		
		for (int i = 0; i<arr.size(); i++) {
			if (count == 0) {
				count = 1;
				candidate = arr[i];
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
			return candidate;
		} else {
			return - 1;
		}
	}
};
