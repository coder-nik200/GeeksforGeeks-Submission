/* Node is defined as
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
	Node* segregate(Node* head) {
		if (head == nullptr || head->next == nullptr) {
			return head;
		}
		
		Node* zeroHead = nullptr;
		Node* zeroTail = nullptr;
		
		Node* oneHead = nullptr;
		Node* oneTail = nullptr;
		
		Node* twoHead = nullptr;
		Node* twoTail = nullptr;
		
		Node* temp = head;
		
		while (temp != nullptr) {
			Node* nextNode = temp->next;
			temp->next = nullptr;
			
			// Place node in zero list
			if (temp->data == 0) {
				if (zeroHead == nullptr) {
					zeroHead = zeroTail = temp;
				} else {
					zeroTail->next = temp;
					zeroTail = temp;
				}
			}
			// Place node in one list
			else if (temp->data == 1) {
				if (oneHead == nullptr) {
					oneHead = oneTail = temp;
				} else {
					oneTail->next = temp;
					oneTail = temp;
				}
			}
			// Place node in two list
			else {
				if (twoHead == nullptr) {
					twoHead = twoTail = temp;
				} else {
					twoTail->next = temp;
					twoTail = temp;
				}
			}
			
			temp = nextNode;
		}
		
		// Connect zero list with one or two list
		if (zeroTail != nullptr) {
			zeroTail->next = (oneHead != nullptr) ? oneHead : twoHead;
		}
		
		// Connect one list with two list
		if (oneTail != nullptr) {
			oneTail->next = twoHead;
		}
		
		// Return the first available list
		if (zeroHead != nullptr) {
			return zeroHead;
		}
		
		if (oneHead != nullptr) {
			return oneHead;
		}
		
		return twoHead;
	}
};
