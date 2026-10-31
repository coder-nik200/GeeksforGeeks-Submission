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
	Node* findMiddle(Node* head) {
		Node* slow = head;
		Node* fast = head->next;
		
		while (fast != nullptr && fast->next != nullptr) {
			slow = slow->next;
			fast = fast->next->next;
		}
		
		return slow;
	}
	
	Node* merge(Node* left, Node* right) {
		Node* dummy = new Node(-1);
		Node* temp = dummy;
		
		while (left != nullptr && right != nullptr) {
			if (left->data <= right->data) {
				temp->next = left;
				left = left->next;
			} else {
				temp->next = right;
				right = right->next;
			}
			
			temp = temp->next;
		}
		
		if (left != nullptr)
			temp->next = left;
		else
			temp->next = right;
		
		return dummy->next;
	}
	
	Node* mergeSort(Node* head) {
		if (head == nullptr || head->next == nullptr) {
			return head;
		}
		
		Node* middle = findMiddle(head);
		Node* rightHead = middle->next;
		
		middle->next = nullptr;
		
		Node* left = mergeSort(head);
		Node* right = mergeSort(rightHead);
		
		return merge(left, right);
	}
};
