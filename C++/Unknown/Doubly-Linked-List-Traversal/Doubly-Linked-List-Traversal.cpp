/* Structure of doubly linked list Node
class Node {
	public:
	int data;
	Node *next;
	Node *prev;
	
	Node(int x) {
		data = x;
		next = nullptr;
		prev = nullptr;
	}
}; */
class Solution {
	public:
	vector<vector<int>> displayList(Node *head) {
		vector<vector<int>> result;
		
		vector<int> forward;
		vector<int> backward;
		
		Node* temp = head;
		
		// Forward traversal
		while (temp != nullptr) {
			forward.push_back(temp->data);
			
			if (temp->next == nullptr) {
				break;
			}
			
			temp = temp->next;
		}
		
		// Backward traversal
		while (temp != nullptr) {
			backward.push_back(temp->data);
			temp = temp->prev;
		}
		
		result.push_back(forward);
		result.push_back(backward);
		
		return result;
	}
};
