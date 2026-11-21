/* Structure of Binary Tree Node
class Node {
	public:
	int data;
	Node* left;
	Node* right;
	
	// Constructor
	Node(int val) {
		data = val;
		left = right = nullptr;
	}
}; */

class Solution {
	public:
	vector<int> levelOrder(Node *root) {
		if (root == nullptr)
			return {};
		
		queue<Node*> q;
		q.push(root);
		
		vector<int> ans;
		
		while (!q.empty()) {
			
			Node* current = q.front();
			q.pop();
			
			ans.push_back(current->data);
			
			if (current->left != nullptr) {
				q.push(current->left);
			}
			if (current->right != nullptr) {
				q.push(current->right);
			}
		}
		
		return ans;
	}
};
