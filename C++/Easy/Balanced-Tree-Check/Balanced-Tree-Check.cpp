/* Structure of binary tree node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
}; */

class Solution {
	public:
	bool isBalanced(Node* root) {
		return dfdHight(root) != -1;
	}
	
	int dfdHight(Node* root) {
		if (root == nullptr)
			return 0;
		
		int leftHight = dfdHight(root->left);
		if (leftHight == -1)
			return - 1;
		
		int rightHight = dfdHight(root->right);
		if (rightHight == -1)
			return - 1;
		
		if (abs(leftHight - rightHight) > 1)
			return - 1;
		
		return max(leftHight, rightHight) + 1;
	}
};
