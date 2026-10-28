/* Structure of Doubly Linked List Node
class Node {
	public:
	int data;
	Node *next;
	Node *prev;
	
	Node(int val) {
		data = val;
		this->next = this->prev = nullptr;
	}
}; */

class Solution {
	public:
	Node* delPos(Node* head, int k) {
		if (head == nullptr || k <= 0) {
			return nullptr;
		}
		
		Node* temp = head;
		int count = 0;
		
		while (temp != nullptr) {
			count++;
			
			if (count == k) {
				break;
			} else {
				temp = temp->next;
			}
		}
		
		// Invalid position
		if (temp == nullptr) {
			return head;
		}
		
		Node* back = temp->prev;
		Node* front = temp->next;
		
		// Single node
		if (back == nullptr && front == nullptr) {
			delete temp;
			return nullptr;
		}
		// Delete head
		else if (back == nullptr) {
			head = head->next;
			head->prev = nullptr;
			
			temp->next = nullptr;
			delete temp;
			
			return head;
		}
		// Delete tail
		else if (front == nullptr) {
			back->next = nullptr;
			
			temp->prev = nullptr;
			delete temp;
			
			return head;
		}
		// Delete middle node
		else {
			back->next = front;
			front->prev = back;
			
			temp->next = nullptr;
			temp->prev = nullptr;
			
			delete temp;
		}
		
		return head;
	}
};
