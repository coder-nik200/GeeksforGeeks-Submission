/* Linked List Node Structure
class Node {
	public:
	int data;
	Node *next;
	
	Node(int x) {
		data = x;
		next = nullptr;
	}
};
*/
class Solution {
	public:
	Node* removeLastNode(Node* head) {
		if (head == nullptr) {
			return nullptr;
		}
		
		if (head->next == nullptr) {
			delete head;
			return nullptr;
		}
		
		Node *secondLast = head;
		
		while (secondLast->next->next != nullptr) {
			secondLast = secondLast->next;
		}
		
		delete secondLast->next;
		secondLast->next = nullptr;
		
		return head;
	}
};
