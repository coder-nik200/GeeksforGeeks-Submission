class Solution {
	public:
	int missingNum(vector<int>& arr) {
		int n = arr.size() + 1;
		
		for (int i = 0; i < arr.size(); i++) {
			n += (i + 1) - arr[i];
		}
		
		return n;
	}
};
