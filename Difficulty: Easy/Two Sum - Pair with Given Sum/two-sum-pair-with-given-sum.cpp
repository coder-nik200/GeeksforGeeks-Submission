class Solution {
	public:
	bool twoSum(vector<int>& arr, int target) {
		vector<pair<int, int>> nums;
		int n = arr.size();
		
		for (int i = 0; i<n; i++) {
			nums.push_back({arr[i], i});
		}
		
		sort(nums.begin(), nums.end());
		int left = 0;
		int right = n - 1;
		
		while (left < right) {
			int sum = nums[left].first + nums[right].first;
			
			if (sum == target) {
				return true;
			} else if (sum < target) {
				left++;
			} else {
				right--;
			}
		}
		
		return false;
	}
};
