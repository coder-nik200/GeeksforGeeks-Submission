/* Structure of linked list Node
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
	Node* removeDuplicates(Node* head) {
		if (head == nullptr || head->next == nullptr) {
			return head;
		}
		
		Node* dummy = new Node(-1);
		dummy->next = head;
		
		Node* prev = dummy;
		Node* temp = head;
		
		while (temp != nullptr && temp->next != nullptr) {
			if (temp->data == temp->next->data) {
				int duplicate = temp->data;
				
				while (temp != nullptr && temp->data == duplicate) {
					temp = temp->next;
				}
				
				prev->next = temp;
			} else {
				prev = temp;
				temp = temp->next;
			}
		}
		
		return dummy->next;
	}
};
