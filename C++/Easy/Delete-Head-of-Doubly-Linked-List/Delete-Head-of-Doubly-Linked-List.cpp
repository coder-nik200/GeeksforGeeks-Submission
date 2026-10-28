/* Structure of doubly linked list Node
class Node {
	public:
	int data;
	Node* next;
	Node* prev;
	
	Node(int x) {
		data = x;
		next = nullptr;
		prev = nullptr;
	}
}; */
class Solution {
	public:
	Node* deleteHead(Node* head) {
		if (head == nullptr || head->next == nullptr) {
			return nullptr;
		}
		
		Node* prev = head;
		head = head->next;
		head->prev = nullptr;
		prev->next = nullptr;
		delete prev;
		
		return head;
	}
};
