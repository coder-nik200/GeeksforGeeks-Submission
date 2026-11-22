/* Structure of Binary Tree Node
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
	void dfd(Node* root, vector<int>& res) {
		if (root == nullptr)
			return;
		
		dfd(root->left, res);
		dfd(root->right, res);
		res.push_back(root->data);
	}
	
	public:
	vector<int> postOrder(Node* root) {
		vector<int> res;
		dfd(root, res);
		
		return res;
	}
};
