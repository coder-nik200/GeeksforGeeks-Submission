/* Structrue of Binary Tree Node
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
	int height(Node* root) {
		if (root == nullptr)
			return {};
		
		queue<Node*> q;
		q.push(root);
		int len = 0;
		
		while (!q.empty()) {
			int size = q.size();
			
			for (int i = 0; i<size; i++) {
				Node* curr = q.front();
				q.pop();
				
				if (curr->left != nullptr) {
					q.push(curr->left);
				}
				if (curr->right != nullptr) {
					q.push(curr->right);
				}
			}
			
			len++;
		}
		
		return len - 1;
	}
};
