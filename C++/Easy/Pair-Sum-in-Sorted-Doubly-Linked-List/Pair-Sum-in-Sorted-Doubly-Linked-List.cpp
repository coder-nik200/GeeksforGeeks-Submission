/* Structure of Doubly Linked List Node
class Node {
	public:
	int data;
	Node *next;
	Node *prev;
	
	Node(int val) {
		data = val;
		next = nullptr;
		prev = nullptr;
	}
}; */

class Solution {
	public:
	Node* findTail(Node* tail) {
		while (tail->next != nullptr) {
			tail = tail->next;
		}
		
		return tail;
	}
	
	vector<vector<int>> givenSumPairs(Node* head, int target) {
		vector<vector<int>> ans;
		
		if (head == nullptr)
			return ans;
		
		Node* left = head;
		Node* right = findTail(head);
		
		while (left->data < right->data) {
			int sum = left->data + right->data;
			
			if (sum == target) {
				ans.push_back({left->data, right->data});
				left = left->next;
				right = right->prev;
			} else if (sum < target) {
				left = left->next;
			} else {
				right = right->prev;
			}
		}
		
		return ans;
	}
};
