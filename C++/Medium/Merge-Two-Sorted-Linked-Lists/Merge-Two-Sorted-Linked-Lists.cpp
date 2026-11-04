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
	Node* sortedMerge(Node* head1, Node* head2) {
		Node* temp1 = head1;
		Node* temp2 = head2;
		
		Node* dummy = new Node(-1);
		Node* curr = dummy;
		
		while (temp1 != nullptr && temp2 != nullptr) {
			if (temp1->data < temp2->data) {
				curr->next = temp1;
				temp1 = temp1->next;
			} else {
				curr->next = temp2;
				temp2 = temp2->next;
			}
			
			curr = curr->next;
		}
		
		if (temp1)
			curr->next = temp1;
		if (temp2)
			curr->next = temp2;
		
		return dummy->next;
	}
};
