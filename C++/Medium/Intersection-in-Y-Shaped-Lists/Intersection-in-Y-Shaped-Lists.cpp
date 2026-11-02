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
	Node* intersectPoint(Node* head1, Node* head2) {
		if (head1 == nullptr || head2 == nullptr) {
			return nullptr;
		}
		
		Node* temp1 = head1;
		Node* temp2 = head2;
		
		while (temp1 != temp2) {
			temp1 = temp1->next;
			temp2 = temp2->next;
			
			if (temp1 == temp2)
				return temp1;
			
			if (temp1 == nullptr)
				temp1 = head2;
			if (temp2 == nullptr)
				temp2 = head1;
		}
		
		return temp1;
	}
};
