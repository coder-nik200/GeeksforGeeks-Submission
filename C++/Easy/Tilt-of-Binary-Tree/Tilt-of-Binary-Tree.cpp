/*
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x)
	{
		data = x;
		left = NULL;
		right = NULL;
	}
};
*/

class Solution {
	int findTilt(Node* root, int &ans) {
		if (root == nullptr)
			return 0;
		
		int leftSum = findTilt(root->left, ans);
		int rightSum = findTilt(root->right, ans);
		
		ans += abs(leftSum - rightSum);
		
		return root->data + leftSum + rightSum;
	}
	
	public:
	// Your are required to complete this function
	// function should return the tilt of the tree
	int tiltTree(Node *root) {
		int ans = 0;
		findTilt(root, ans);
		
		return ans;
	}
};
