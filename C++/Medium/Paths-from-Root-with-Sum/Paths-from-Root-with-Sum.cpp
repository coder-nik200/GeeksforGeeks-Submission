/* A Tree node
class Node {
public:
    int data;
    Node *left, *right;
    Node(int x) {
        left = right = nullptr;
        data = x;
    }
};*/

class Solution {
    void solve(Node *root, int target, int currSum, vector<int> &path,
               vector<vector<int>> &result) {
      if (root == nullptr)
        return;

      path.push_back(root->data);
      currSum += root->data;

      // Valid at ANY node (does not have to be a leaf)
      if (currSum == target) {
        result.push_back(path);
      }

      // Keep exploring children in case negative/zero nodes hit target again
      solve(root->left, target, currSum, path, result);
      solve(root->right, target, currSum, path, result);

      path.pop_back();
    }

  public:
    vector<vector<int>> printPaths(Node *root, int s) {
      vector<vector<int>> result;
      vector<int> path;

      solve(root, s, 0, path, result);
      return result;
    }
};