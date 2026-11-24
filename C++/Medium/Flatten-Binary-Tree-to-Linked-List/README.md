<div align="center">

# 🔗 Flatten Binary Tree to Linked List

[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-dfb317?style=for-the-badge)](https://www.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-0366d6?style=for-the-badge&logo=cplusplus&logoColor=white)](https://www.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1)
[![Source](https://img.shields.io/badge/Source-GeeksforGeeks-2f8d46?style=for-the-badge)](https://www.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1)
[![Status](https://img.shields.io/badge/Status-Solved-2ea44f?style=for-the-badge&logo=checkmarx&logoColor=white)](https://www.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1)

**[🌐 View Original Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1)**

</div>

---

## 📝 Problem Statement

> Given a binary tree, flatten the tree into a Linked list:
> 
> The linked list should use the same Node class where the right child pointer points to the next node in the list and the left child pointer is always null.
> The linked list nodes should be in the same order as a preorder traversal of the binary tree.


## 📚 Examples

<details open>
<summary><strong>Example 1</strong></summary>

| | |
|---|---|
| **Input** | `root[] = [1, 2, 5, 3, 4, 6]` |
| **Output** | `[1, 2, 3, 4, 5, 6]` |

**Explanation:**
After flattening, the tree looks like:
     1
      \
       2
        \
         3
          \
           4
            \ 
             5 
              \
               6
Here, left of each node points to NULL and right contains the next node in preorder.The inorder traversal of this flattened tree is 1 2 3 4 5 6.

</details>

<details >
<summary><strong>Example 2</strong></summary>

| | |
|---|---|
| **Input** | `root[] = [1, 3, 4, 2, 5]` |
| **Output** | `[1, 3, 4, 2, 5]` |

**Explanation:**
After flattening, the tree looks like:
     1
      \
       3
        \
         4
          \
           2
            \ 
             5 
Here, left of each node points to NULL and right contains the next node in preorder.The inorder traversal of this flattened tree is 1 3 4 2 5.

</details>


---

<div align="center">

### 🚀 GFG GitHub Sync

<sub>Automatically synced from GeeksforGeeks • Last updated: 2026-11-24</sub>

</div>
