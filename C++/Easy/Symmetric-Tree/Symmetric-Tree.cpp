/* Structure of binary tree node
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
    int isMirror(Node *left, Node *right) {
      if (left == nullptr && right == nullptr)
        return true;

      if (left == nullptr || right == nullptr)
        return false;

      if (left->data != right->data)
        return false;

      return isMirror(left->left, right->right) &&
             isMirror(left->right, right->left);
    }

  public:
    bool isSymmetric(Node *root) {
      if (root == nullptr)
        return true;

      return isMirror(root->left, root->right);
    }
};