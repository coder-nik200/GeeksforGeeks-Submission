/* Structure of linked list Node
class Node {
	public:
	int data;
	Node *next;
	
	Node(int x) {
		data = x;
		next = nullptr;
	}
};
*/
class Solution {
	public:
	Node* removeDuplicates(Node* head) {
		Node* temp = head;
		
		while (temp != nullptr && temp->next != nullptr) {
			if (temp->data == temp->next->data) {
				temp->next = temp->next->next;
			} else {  // temp->data != temp->next->data
				temp = temp->next;
			}
		}
		
		return head;
	}
};
