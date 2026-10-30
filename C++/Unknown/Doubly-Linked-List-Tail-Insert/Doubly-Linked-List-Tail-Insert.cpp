/* Structure of doubly linked list node
class Node
{
	int data;
	Node * next;
	Node * prev;
	Node (int x)
	{
		data = x;
		next = nullptr;
		prev = nullptr;
	}
};
*/
class Solution {
	public:
	Node *insertInTail(Node *head, int data) {
		vector<vector<int>> result;
		
		vector<int>forward;
		vector<int>backward;
		
		Node* temp = head;
		
		while (temp->next != nullptr) {
			temp = temp->next;
		}
		
		Node* newTail = new Node(data);
		newTail->prev = temp;
		temp->next = newTail;
		
		return head;
	}
};
