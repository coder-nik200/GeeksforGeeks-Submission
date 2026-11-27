/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    int count = 0;
    int ans = 0;
    bool found = false;

    void inorderTraversal(Node *root, int k) {
      if (root == nullptr || found)
        return;

      inorderTraversal(root->left, k);
      if (found)
        return;

      count++;

      if (count == k) {
        ans = root->data;
        found = true;
        return;
      }

      inorderTraversal(root->right, k);
    }

    int kthSmallest(Node *root, int k) {
      count = 0;
      ans = -1;
      found = false;
      inorderTraversal(root, k);

      return ans;
    }
};