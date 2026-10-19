class Solution {
	public:
	vector<int> findMajority(vector<int>& arr) {
		int count1 = 0;
		int count2 = 0;
		int candidate1 = 0;
		int candidate2 = 0;
		
		for (int i = 0; i<arr.size(); i++) {
			if (arr[i] == candidate1 && count1 > 0) {
				count1++;
			} else if (arr[i] == candidate2 && count2 > 0) {
				count2++;
			} else if (count1 == 0) {
				candidate1 = arr[i];
				count1++;
			} else if (count2 == 0) {
				candidate2 = arr[i];
				count2++;
			} else {
				count1--;
				count2--;
			}
		}
		
// 		Verification
		count1 = 0;
		count2 = 0;
		for (int i = 0; i<arr.size(); i++) {
			if (arr[i] == candidate1) {
				count1++;
			} else if (arr[i] == candidate2) {
				count2++;
			}
		}
		
		vector<int>ans;
		
		if (count1 > arr.size() / 3) {
			ans.push_back(candidate1);
		}
		if (count2 > arr.size() / 3) {
			ans.push_back(candidate2);
		}
		
// 		Sort ans
		sort(ans.begin(), ans.end());
		
		return ans;
	}
};
