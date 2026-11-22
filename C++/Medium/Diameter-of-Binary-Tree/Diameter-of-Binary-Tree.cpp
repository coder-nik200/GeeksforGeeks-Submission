/* Structure of binary tree Node
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
	int dfdHight(Node* root, int &diameter) {
		if (root == nullptr)
			return 0;
		
		int left = dfdHight(root->left, diameter);
		int right = dfdHight(root->right, diameter);
		
		diameter = max(diameter, left + right);
		
		return 1 + max(left, right);
	}
	
	public:
	int diameter(Node* root) {
		int diameter = 0;
		
		dfdHight(root, diameter);
		
		return diameter;
	}
};
