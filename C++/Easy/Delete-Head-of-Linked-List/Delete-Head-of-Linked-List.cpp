/* Structure of Linked List Node
class Node {
	public:
	int data;
	Node* next;
	
	Node(int x) {
		data = x;
		next = NULL;
	}
};

*/
class Solution {
	public:
	Node *deleteHead(Node *head) {
		if (head == nullptr) {
			return nullptr;
		}
		
		Node *temp = head;
		
		head = head->next;
		
		delete temp;
		
		return head;
	}
};
