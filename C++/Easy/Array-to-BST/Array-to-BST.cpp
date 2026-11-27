/*
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
};
*/

class Solution {
  public:
    Node *solve(vector<int> &arr, int low, int high) {
      if (low > high) {
        return nullptr;
      }

      int mid = low + (high - low) / 2;

      Node *root = new Node(arr[mid]);

      root->left = solve(arr, low, mid - 1);
      root->right = solve(arr, mid + 1, high);

      return root;
    }

    Node *sortedArrayToBST(vector<int> &arr) {
      return solve(arr, 0, arr.size() - 1);
    }
};