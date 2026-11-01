/* Structure of Linked List Node
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
	int getKthFromLast(Node* head, int k) {
		if (head == nullptr || k <= 0) {
			return - 1;
		}
		
		Node* slow = head;
		Node* fast = head;
		
		for (int i = 0; i<k; i++) {
			if (fast == nullptr)
				return - 1;
			
			fast = fast->next;
		}
		
		while (fast != nullptr) {
			slow = slow->next;
			fast = fast->next;
		}
		
		return slow->data;
	}
};
