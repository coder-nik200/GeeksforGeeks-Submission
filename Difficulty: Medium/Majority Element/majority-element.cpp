class Solution {
	public:
	int majorityElement(vector<int>& arr) {
		int count = 0;
		int candidate = -1;
		
		for (int i = 0; i<arr.size(); i++) {
			if (count == 0) {
				candidate = arr[i];
				count = 1;
			} else if (arr[i] == candidate) {
				count++;
			} else {
				count--;
			}
		}
		
		int count1 = 0;
		for (int i = 0; i<arr.size(); i++) {
			if (arr[i] == candidate) {
				count1++;
			}
		}
		
		if (count1 > arr.size()/2) {
			return candidate;
		} else {
			return - 1;
		}
	}
};
