/* Structure of Linked List Node
class Node {
	public:
	int data;
	Node* next;
	Node(int data) {
		this->data = data;
		this->next = nullptr;
	}
};
*/
class Solution {
	public:
	Node* deleteNode(Node* head, int x) {
		if (head == nullptr) {
			return nullptr;
		}
		
		if (x == 1) {
			while (head != nullptr) {
				Node* temp = head;
				head = head->next;
				delete temp;
				
				return head;
			}
			
			return nullptr;
		}
		
		int count = 0;
		Node* temp = head;
		Node* prev = nullptr;
		
		while (temp != nullptr) {
			count++;
			
			if (count == x) {
				prev->next = prev->next->next;
				delete temp;
				break;
			} else {
				prev = temp;
				temp = temp->next;
			}
		}
		
		return head;
	}
};
