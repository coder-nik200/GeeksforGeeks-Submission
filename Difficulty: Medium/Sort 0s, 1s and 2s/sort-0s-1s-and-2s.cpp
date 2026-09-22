class Solution {
	public:
	void sort012(vector<int>& arr) {
		int st = 0;
		int mid = 0;
		int end = arr.size() - 1;
		
		while (mid <= end) {
			if (arr[mid] == 0) {
				swap(arr[st], arr[mid]);
				st++;
				mid++;
			} else if (arr[mid] == 1) {
				mid++;
			} else { // arr[mid] == 2
				swap(arr[mid], arr[end]);
				end--;
			}
		}
	}
};
