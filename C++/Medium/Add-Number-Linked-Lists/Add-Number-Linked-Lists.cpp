/*
class Node {
	public:
	int data;
	Node* next;
	Node(int x) {
		data = x;
		next = nullptr;
	}
};
*/

class Solution {
	public:
	Node* reverse(Node* head) {
		Node* temp = head;
		Node* prev = nullptr;
		
		while (temp != nullptr) {
			Node* front = temp->next;
			temp->next = prev;
			
			prev = temp;
			temp = front;
		}
		
		return prev;
	}
	
	Node* addTwoLists(Node* head1, Node* head2) {
		head1 = reverse(head1);
		head2 = reverse(head2);
		
		Node* dummy = new Node(-1);
		Node* curr = dummy;
		Node* temp1 = head1;
		Node* temp2 = head2;
		int carry = 0;
		
		while (temp1 != nullptr || temp2 != nullptr) {
			int sum = carry;
			
			if (temp1)
				sum += temp1->data;
			if (temp2)
				sum += temp2->data;
			
			Node* newNode = new Node(sum % 10);
			carry = sum / 10;
			
			curr->next = newNode;
			curr = curr->next;
			
			if (temp1)
				temp1 = temp1->next;
			if (temp2)
				temp2 = temp2->next;
		}
		
		if (carry) {
			Node* newNode = new Node(carry);
			curr->next = newNode;
		}
		
		Node* ans = reverse(dummy->next);
		
		delete dummy;
		
		while (ans && ans->data == 0 && ans->next) {
			Node* del = ans;
			ans = ans->next;
			
			delete del;
		}
		
		return ans;
	}
};
