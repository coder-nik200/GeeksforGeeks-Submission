/* Structure of Doubly Linked List Node
class Node {
	public:
	int data;
	Node* next;
	Node* prev;
	
	Node(int x) {
		data = x;
		next = prev = nullptr;
	}
};
*/

class Solution {
	public:
	Node* insertAtPos(Node* head, int p, int x) {
		
		if (head == nullptr || p < 0) {
			return head;
		}
		
		Node* temp = head;
		int count = 0;
		
		while (temp != nullptr) {
			
			if (count == p) {
				break;
			}
			
			count++;
			temp = temp->next;
		}
		
		Node* front = temp->next;
		Node* newNode = new Node(x);
		
		newNode->next = front;
		newNode->prev = temp;
		
		temp->next = newNode;
		
		if (front != nullptr) {
			front->prev = newNode;
		}
		
		return head;
	}
};
