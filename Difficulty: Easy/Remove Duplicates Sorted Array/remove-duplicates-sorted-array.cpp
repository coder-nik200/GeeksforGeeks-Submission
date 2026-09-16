class Solution {
	public:
	vector<int> removeDuplicates(vector<int> &arr) {
		int j = 0;
		
		for (int i = 1; i < arr.size(); i++) {
			if (arr[i] != arr[j]) {
				j++;
				arr[j] = arr[i];
			}
		}
		
		arr.resize(j + 1);
		return arr;
	}
};
