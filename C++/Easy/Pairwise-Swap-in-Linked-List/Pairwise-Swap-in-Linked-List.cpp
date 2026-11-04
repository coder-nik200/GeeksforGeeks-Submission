/* Structure of linked list Node
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
	Node* reverse(Node* temp) {
		Node* prev = nullptr;
		Node* front = nullptr;
		
		while (temp != nullptr) {
			front = temp->next;
			temp->next = prev;
			
			prev = temp;
			temp = front;
		}
		
		return prev;
	}
	
	Node* pairwiseSwap(Node* head) {
		Node* temp = head;
		Node* prev = nullptr;
		
		while (temp != nullptr && temp->next != nullptr) {
			Node* nextNode = temp->next->next;
			
			temp->next->next = nullptr;
			
			Node* newHead = reverse(temp);
			
			if (prev == nullptr) {
				head = newHead;
			} else {
				prev->next = newHead;
			}
			
			prev = temp;
			temp = nextNode;
		}
		
		if (temp != nullptr) {
			prev->next = temp;
		}
		
		return head;
	}
};
