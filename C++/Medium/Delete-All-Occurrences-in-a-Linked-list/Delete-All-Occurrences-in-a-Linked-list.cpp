/* Structure of a linked list node
class Node {
	public:
	int data;
	Node* next;
	
	Node(int val) {
		data = val;
		next = nullptr;
	}
};
*/

class Solution {
	public:
	Node* deleteAllOccurances(Node* head, int x) {
		if (head == nullptr)
			return head;
		
		Node* temp = head;
		Node* prev = nullptr;
		
		while (temp != nullptr) {
			if (temp->data == x) {
				Node* curr = temp;
				
				if (prev == nullptr) {
					head = temp->next;
				} else {
					prev->next = temp->next;
				}
				
				temp = temp->next;
				delete curr;
			} else {
				prev = temp;
				temp = temp->next;
			}
		}
		
		return head;
	}
};
