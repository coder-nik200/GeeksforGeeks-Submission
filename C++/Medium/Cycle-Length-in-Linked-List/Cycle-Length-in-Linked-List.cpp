/* Structure of Linked List Node
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
	int lengthOfLoop(Node *head) {
		Node* slow = head;
		Node* fast = head;
		
		while (fast != nullptr && fast->next != nullptr) {
			slow = slow->next;
			fast = fast->next->next;
			
			if (slow == fast)
				break;
		}
		
		if (fast == nullptr || fast->next == nullptr)
			return 0;
		
		fast = fast->next;
		int count = 1;
		while (fast != slow) {
			count++;
			fast = fast->next;
		}
		
		return count;
	}
};
