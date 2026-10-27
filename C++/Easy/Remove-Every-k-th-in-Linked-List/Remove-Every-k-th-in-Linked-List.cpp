/* Structure for Link list node
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
	Node* deleteK(Node* head, int K) {
		if (head == nullptr || K <= 0)
			return nullptr;
		
		if (K == 1) {
			while (head != nullptr) {
				Node* temp = head;
				head = head->next;
				delete temp;
			}
			
			return nullptr;
		}
		
		int count = 1;
		Node* temp = head;
		Node* prev = nullptr;
		
		while (temp != nullptr) {
			if (count % K == 0) {
				prev->next = temp->next;
				
				Node* del = temp;
				temp = temp->next;
				
				delete del;
			} else {
				prev = temp;
				temp = temp->next;
			}
			
			count++;
		}
		
		return head;
	}
};
