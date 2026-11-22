/* Structure of Tree Node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	Node(int val) {
		data = val;
		left = nullptr;
		right = nullptr;
	}
}; */

class Solution {
	void dfd(Node* root, vector<int>& res) {
		if (root == nullptr)
			return;
		
		res.push_back(root->data);
		dfd(root->left, res);
		dfd(root->right, res);
	}
	
	public:
	vector<int> preOrder(Node* root) {
		vector<int> res;
		dfd(root, res);
		
		return res;
	}
};
