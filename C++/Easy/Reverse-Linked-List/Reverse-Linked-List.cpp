/* Structure of Linked List Node
class Node {
	public:
	int data ;
	Node *next ;
	
	Node(int x) {
		data = x ;
		next = nullptr ;
	}
};
*/

class Solution {
	public:
	Node* reverseList(Node* head) {
		Node *prev = nullptr;
		Node *curr = head;
		Node *next = nullptr;
		
		while (curr != nullptr) {
			next = curr->next;
			curr->next = prev;
			
			prev = curr;
			curr = next;
		}
		
		return prev;
	}
};
