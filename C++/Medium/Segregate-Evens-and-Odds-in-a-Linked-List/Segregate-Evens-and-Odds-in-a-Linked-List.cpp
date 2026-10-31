/* Structure of Linked List Node
class Node {
	public:
	int data;
	Node* next;
	
	Node(int val) {
		data = val;
		next = nullptr;
	}
}; */
class Solution {
	public:
	Node* divide(Node* head) {
		if (head == nullptr || head->next == nullptr) {
			return head;
		}
		
		Node* evenHead = nullptr;
		Node* oddHead = nullptr;
		
		Node* evenTail = nullptr;
		Node* oddTail = nullptr;
		
		Node* temp = head;
		
		while (temp != nullptr) {
			Node* nextNode = temp->next;
			temp->next = nullptr;
			
			// Check whether node value is even
			if (temp->data % 2 == 0) {
				if (evenHead == nullptr) {
					evenHead = evenTail = temp;
				} else {
					evenTail->next = temp;
					evenTail = temp;
				}
			}
			
			// Otherwise, node value is odd
			else {
				if (oddHead == nullptr) {
					oddHead = oddTail = temp;
				} else {
					oddTail->next = temp;
					oddTail = temp;
				}
			}
			
			temp = nextNode;
		}
		
		// If no even nodes exist
		if (evenHead == nullptr) {
			return oddHead;
		}
		
		// Connect even list to odd list
		evenTail->next = oddHead;
		
		return evenHead;
	}
};
