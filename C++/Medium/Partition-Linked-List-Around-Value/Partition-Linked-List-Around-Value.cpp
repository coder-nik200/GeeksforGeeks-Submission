/* Structure of linked list Node
class Node {
	public:
	int data;
	Node* next;
	
	Node(int x) {
		data = x;
		next = nullptr;
	}
};
*/
class Solution {
	public:
	Node* partition(Node* head, int x) {
		Node* smaller = new Node(0);
		Node* equal = new Node(0);
		Node* greater = new Node(0);
		
		Node* smallerTail = smaller;
		Node* equalTail = equal;
		Node* greaterTail = greater;
		
		Node* curr = head;
		
		while (curr != nullptr) {
			if (curr->data < x) {
				smallerTail->next = curr;
				smallerTail = smallerTail->next;
			} else if (curr->data == x) {
				equalTail->next = curr;
				equalTail = equalTail->next;
			} else {
				greaterTail->next = curr;
				greaterTail = greaterTail->next;
			}
			
			curr = curr->next;
		}
		
		greaterTail->next = nullptr;
		equalTail->next = greater->next;
		smallerTail->next = equal->next;
		
		Node* newHead = smaller->next;
		
		return newHead;
	}
};
