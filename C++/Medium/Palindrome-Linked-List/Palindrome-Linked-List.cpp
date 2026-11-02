/*
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
	Node* reverse(Node* head) {
		Node* prev = nullptr;
		Node* front = nullptr;
		Node* temp = head;
		
		while (temp != nullptr) {
			front = temp->next;
			temp->next = prev;
			
			prev = temp;
			temp = front;
		}
		
		return prev;
	}
	
	bool isPalindrome(Node *head) {
		if (head == nullptr || head->next == nullptr) {
			return true;
		}
		
		Node* slow = head;
		Node* fast = head->next;
		
		while (fast != nullptr && fast->next != nullptr) {
			slow = slow->next;
			fast = fast->next->next;
		}
		
		Node* second = reverse(slow->next);
		Node* secondHalfHead = second;
		
		Node* first = head;
		
		while (second != nullptr) {
			if (first->data != second->data) {
				second = reverse(secondHalfHead);
				return false;
			}
			
			first = first->next;
			second = second->next;
		}
		
		second = reverse(secondHalfHead);
		
		return true;
	}
};
