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
	private:
	void dfd(Node* root, vector<int>& res) {
		if (root == nullptr)
			return;
		
		dfd(root->left, res);
		res.push_back(root->data);
		dfd(root->right, res);
	}
	
	public:
	vector<int> inOrder(Node* root) {
		vector<int> res;
		
		dfd(root, res);
		
		return res;
	}
};
