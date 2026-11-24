/* Structure of Binary Tree Node
class Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    vector<int> zigZagTraversal(Node *root) {
      vector<int> ans;

      if (root == nullptr)
        return ans;

      queue<Node *> q;
      q.push(root);

      bool leftToRight = true;

      while (!q.empty()) {
        int size = q.size();
        vector<int> level(size);

        for (int i = 0; i < size; i++) {
          Node *current = q.front();
          q.pop();

          int index = leftToRight ? i : size - 1 - i;

          level[index] = current->data;

          if (current->left) {
            q.push(current->left);
          }

          if (current->right) {
            q.push(current->right);
          }
        }

        ans.insert(ans.end(), level.begin(), level.end());
        leftToRight = !leftToRight;
      }

      return ans;
    }
};