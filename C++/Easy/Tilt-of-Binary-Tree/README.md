<div align="center">

# 🔗 Tilt of Binary Tree

[![Difficulty](https://img.shields.io/badge/Difficulty-Easy-2ea44f?style=for-the-badge)](https://www.geeksforgeeks.org/problems/tilt-of-binary-tree/1)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-0366d6?style=for-the-badge&logo=cplusplus&logoColor=white)](https://www.geeksforgeeks.org/problems/tilt-of-binary-tree/1)
[![Source](https://img.shields.io/badge/Source-GeeksforGeeks-2f8d46?style=for-the-badge)](https://www.geeksforgeeks.org/problems/tilt-of-binary-tree/1)
[![Status](https://img.shields.io/badge/Status-Solved-2ea44f?style=for-the-badge&logo=checkmarx&logoColor=white)](https://www.geeksforgeeks.org/problems/tilt-of-binary-tree/1)

**[🌐 View Original Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/tilt-of-binary-tree/1)**

</div>

---

## 📝 Problem Statement

> Given a binary tree, your task is to complete the function tiltTree(), that returns the tilt of the whole tree. The tilt of a tree node is defined as the absolute difference between the sum of all left subtree node values and the sum of all right subtree node values. Null nodes are assigned tilt to be zero. Therefore, tilt of the whole tree is defined as the sum of all nodes’ tilt.


## 📚 Examples

<details open>
<summary><strong>Example 1</strong></summary>

| | |
|---|---|
| **Input** | `root = [1, 2, 3]
       1
      / \
     2   3` |
| **Output** | `1` |

**Explanation:**
Tilt of node 2 : 0, Tilt of node 3 : 0, Tilt of node 1 : |2-3| = 1, Tilt of tree : 0 + 0 + 1 = 1

</details>

<details >
<summary><strong>Example 2</strong></summary>

| | |
|---|---|
| **Input** | `root = [4, 2, 9, 3, 5, N, 7]
        4 
       / \
      2   9 
     / \   \
    3   5   7` |
| **Output** | `15` |

**Explanation:**
Tilt of node 3 : 0 , Tilt of node 5 : 0, Tilt of node 7 : 0, Tilt of node 2 : |3-5| = 2, Tilt of node 9 : |0-7| = 7, Tilt of node 4 : |(3+5+2)-(9+7)| = 6, Tilt of binary tree : 0 + 0 + 0 + 2 + 7 + 6 = 15


Constraints:
1<= number of nodes <=105
0<= node -> data <=10

</details>


---

<div align="center">

### 🚀 GFG GitHub Sync

<sub>Automatically synced from GeeksforGeeks • Last updated: 2026-11-23</sub>

</div>
