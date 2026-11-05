/* Linked List Node Structure
class Node {
	int data;
	Node* next;
	Node(int x) {
		data = x;
		next = nullptr;
	}
}; */

class Solution {
	public:
	Node* findNthNode(Node* temp, int k) {
		int count = 1;
		
		while (temp != nullptr) {
			if (count == k)
				return temp;
			
			count++;
			temp = temp->next;
		}
		
		return temp;
	}
	
	Node* rotate(Node* head, int k) {
		if (head == nullptr || head->next == nullptr) {
			return head;
		}
		
		Node* tail = head;
		int len = 1;
		
		while (tail->next != nullptr) {
			len++;
			tail = tail->next;
		}
		
		k = k % len;
		
		if (k == 0)
			return head;
		
		tail->next = head;
		
		Node* nextNode = findNthNode(head, k);
		
		head = nextNode->next;
		nextNode->next = nullptr;
		
		return head;
	}
};
