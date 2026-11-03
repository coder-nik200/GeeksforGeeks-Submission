/* Structure of a link list node
class Node {
	public:
	int data;
	Node* next;
	Node* prev;
	Node(int value) {
		data = value;
		next = nullptr;
		prev = nullptr;
	}
};
*/
class Solution {
	public:
	Node* removeDuplicates(Node* headRef) {
		Node* temp = headRef;
		
		while (temp != nullptr && temp->next != nullptr) {
			Node* nextNode = temp->next;
			
			while (nextNode != nullptr && nextNode->data == temp->data) {
				Node* duplicate = nextNode;
				nextNode = nextNode->next;
				
				delete(duplicate);
			}
			
			temp->next = nextNode;
			
			if (nextNode != nullptr)
				nextNode->prev = temp;
			
			temp = temp->next;
		}
		
		return headRef;
	}
};
