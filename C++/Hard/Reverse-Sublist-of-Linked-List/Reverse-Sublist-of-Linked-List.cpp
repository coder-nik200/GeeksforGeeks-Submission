/* Structure of a Linked List Node
class Node {
	public:
	int data;
	Node* next;
	
	Node(int x) {
		data = x;
		next = nullptr;
	}
}; */

class Solution {
	public:
	Node* reverseBetween(int a, int b, Node* head) {
		if (head == nullptr || a == b) {
			return head;
		}
		
		Node* dummy = new Node(-1);
		dummy->next = head;
		Node* prev = dummy;
		
		for (int i = 1; i<a; i++) {
			prev = prev->next;
		}
		
		Node* curr = prev->next;
		Node* subListHead = curr;
		Node* subListPrev = nullptr;
		
		for (int i = 0; i<b - a + 1; i++) {
			Node* nextNode = curr->next;
			curr->next = subListPrev;
			
			subListPrev = curr;
			curr = nextNode;
		}
		
		prev->next = subListPrev;
		subListHead->next = curr;
		
		return dummy->next;
	}
};
