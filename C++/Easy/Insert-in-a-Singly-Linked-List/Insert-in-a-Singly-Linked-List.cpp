/* Structure of Linked List Node
class Node {
	public:
	int data;
	Node* next;
	Node(int data) {
		this->data = data;
		this->next = nullptr;
	}
}; */

class Solution {
	public:
	Node* insertPos(Node* head, int pos, int val) {
		if (pos < 1)
			return head;
		
		Node *node = new Node(val);
		
		if (pos == 1) {
			node->next = head;
			return node;
		}
		
		Node * temp = head;
		
		for (int i = 1; i<pos - 1 && temp != nullptr; i++) {
			temp = temp->next;
		}
		
		if (temp == nullptr) {
			delete node;
			return head;
		}
		
		node->next = temp->next;
		temp->next = node;
		
		return head;
	}
};
