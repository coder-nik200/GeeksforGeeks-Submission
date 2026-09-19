// Brute force
// class Solution {
// 	public:
// 	int largest(vector<int> &arr) {
// 		int n = arr.size();
// 		sort(arr.begin(), arr.end());

// 		return arr[n - 1];
// 	}
// };

// Optimal
class Solution {
	public:
	int largest(vector<int> &arr) {
		int largest = arr[0];
		
		for (int i = 1; i<arr.size(); i++) {
			if (arr[i] > largest) {
				largest = arr[i];
			}
		}
		
		return largest;
	}
};
