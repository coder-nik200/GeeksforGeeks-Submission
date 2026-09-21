class Solution {
	public:
	vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
		int n1 = arr1.size();
		int n2 = arr2.size();
		
		int i = 0;
		int j = 0;
		vector<int>ans;
		
		while (i < n1 && j < n2) {
			if (arr1[i] < arr2[j]) {
				i++;
			} else if (arr1[i] > arr2[j]) {
				j++;
			} else {
				if (ans.size() == 0 || ans.back() != arr1[i]) {
					ans.push_back(arr1[i]);
				}
				i++;
				j++;
			}
		}
		
		return ans;
	}
};
