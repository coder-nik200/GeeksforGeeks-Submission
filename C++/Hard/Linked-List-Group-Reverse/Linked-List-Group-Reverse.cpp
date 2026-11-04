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
	
	Node* getKthNode(Node* temp, int k) {
		k -= 1;
		while (temp != nullptr && k > 0) {
			k--;
			temp = temp->next;
		}
		
		return temp;
	}
	
	Node *reverseKGroup(Node *head, int k) {
		Node* temp = head;
		Node* prev = nullptr;
		
		while (temp != nullptr) {
			Node* kthNode = getKthNode(temp, k);
			
			// If fewer than k nodes remain,
			
			// find the last node of the remaining group
			
			if (kthNode == nullptr) {
				kthNode = temp;
				while (kthNode->next != nullptr) {
					kthNode = kthNode->next;
				}
			}
			
			Node* nextNode = kthNode->next;
			
			kthNode->next = nullptr;
			
			kthNode = reverse(temp);
			
			if (temp == head) {
				head = kthNode;
			} else {
				prev->next = kthNode;
			}
			
			prev = temp;
			temp = nextNode;
		}
		
		return head;
	}
};
