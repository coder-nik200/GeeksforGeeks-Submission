/* Node Structure
class Node {
	public:
	int data;
	Node *next;
	Node(int x) {
		data = x;
		next = nullptr;
	}
}; */

class Solution {
	public:
	void rearrangeEvenOdd(Node *head) {
		if (head == nullptr || head->next == nullptr) {
			return;
		}
		
		Node* odd = head;
		Node* even = head->next;
		Node* evenHead = head->next;
		
		while (even != nullptr && even->next != nullptr) {
			odd->next = odd->next->next;
			even->next = even->next->next;
			
			odd = odd->next;
			even = even->next;
		}
		
		odd->next = evenHead;
		
		return;
	}
};
