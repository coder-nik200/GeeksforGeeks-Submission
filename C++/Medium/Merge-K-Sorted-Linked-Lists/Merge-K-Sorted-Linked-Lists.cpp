/* Linked List Node Structure
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
	Node* merge(Node* list1, Node* list2) {
		Node* dummy = new Node(-1);
		Node* temp = dummy;
		
		while (list1 != nullptr && list2 != nullptr) {
			if (list1->data < list2->data) {
				temp->next = list1;
				list1 = list1->next;
			} else {
				temp->next = list2;
				list2 = list2->next;
			}
			
			temp = temp->next;
		}
		
		if (list1)
			temp->next = list1;
		if (list2)
			temp->next = list2;
		
		return dummy->next;
	}
	
	Node* mergeKLists(vector<Node*>& arr) {
		int n = arr.size();
		
		if (n == 0)
			return nullptr;
		
		while (n > 1) {
			int index = 0;
			
			for (int i = 0; i < n; i += 2) {
				if (i + 1 < n) {
					arr[index++] = merge(arr[i], arr[i + 1]);
				} else {
					arr[index++] = arr[i];
				}
			}
			
			n = index;
		}
		
		return arr[0];
	}
};
