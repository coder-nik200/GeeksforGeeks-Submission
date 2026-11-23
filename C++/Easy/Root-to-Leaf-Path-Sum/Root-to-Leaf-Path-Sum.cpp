/* A binary tree node
class Node {
	int data;
	Node *left;
	Node *right;
	
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
};
*/

class Solution {
	public:
	bool hasPathSum(Node *root, int target) {
		if (root == nullptr)
			return 0;
		
		if (root->left == nullptr && root->right == nullptr) {
			return target == root->data;
		}
		
		target -= root->data;
		
		return hasPathSum(root->left, target) || hasPathSum(root->right, target);
	}
};
