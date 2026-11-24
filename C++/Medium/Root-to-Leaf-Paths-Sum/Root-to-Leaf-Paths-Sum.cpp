/* Structure of a Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
}; */
class Solution {
    int sumNum(Node *root, int sum) {
      if (root == nullptr)
        return 0;

      sum = sum * 10 + root->data;

      if (root->left == nullptr && root->right == nullptr) {
        return sum;
      }

      return sumNum(root->left, sum) + sumNum(root->right, sum);
    }

  public:
    int treePathsSum(Node *root) { return sumNum(root, 0); }
};