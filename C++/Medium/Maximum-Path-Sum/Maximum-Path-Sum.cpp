/* Structure of binary tree node
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
    int maxPath(Node *root, int &maxi) {
      if (root == nullptr)
        return 0;

      int leftSum = max(0, maxPath(root->left, maxi));
      int rightSum = max(0, maxPath(root->right, maxi));

      maxi = max(maxi, leftSum + rightSum + root->data);

      return root->data + max(leftSum, rightSum);
    }

  public:
    int findMaxSum(Node *root) {
      int maxi = INT_MIN;
      maxPath(root, maxi);

      return maxi;
    }
};