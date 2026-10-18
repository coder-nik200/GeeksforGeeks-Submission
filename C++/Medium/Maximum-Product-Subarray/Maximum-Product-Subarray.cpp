class Solution {
	public:
	int maxProduct(vector<int> &arr) {
		int pro = arr[0];
		int minPro = arr[0];
		int maxPro = arr[0];
		
		for (int i = 1; i<arr.size(); i++) {
			if (arr[i] < 0) {
				swap(pro, minPro);
			}
			
			pro = max(arr[i], pro * arr[i]);
			minPro = min(arr[i], minPro * arr[i]);
			
			maxPro = max(maxPro, pro);
		}
		
		return maxPro;
	}
};
