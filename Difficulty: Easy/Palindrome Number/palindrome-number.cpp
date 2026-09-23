class Solution {
	public:
	bool isPalindrome(int n) {
		int temp = n;
		
		if (n < 0)
			n = -n;
		
		long rev = 0;
		
		while (n > 0) {
			int digit = n % 10;
			rev = rev * 10 + digit;
			n /= 10;
		}
		
		return rev == abs(temp);
	}
};
