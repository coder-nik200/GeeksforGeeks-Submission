<div align="center">

# 🔗 Zig-Zag Tree Traversal

[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-dfb317?style=for-the-badge)](https://www.geeksforgeeks.org/problems/zigzag-tree-traversal/1)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-0366d6?style=for-the-badge&logo=cplusplus&logoColor=white)](https://www.geeksforgeeks.org/problems/zigzag-tree-traversal/1)
[![Source](https://img.shields.io/badge/Source-GeeksforGeeks-2f8d46?style=for-the-badge)](https://www.geeksforgeeks.org/problems/zigzag-tree-traversal/1)
[![Status](https://img.shields.io/badge/Status-Solved-2ea44f?style=for-the-badge&logo=checkmarx&logoColor=white)](https://www.geeksforgeeks.org/problems/zigzag-tree-traversal/1)

**[🌐 View Original Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/zigzag-tree-traversal/1)**

</div>

---

## 📝 Problem Statement

> Given the root of a binary tree. Find the zig-zag level order traversal of the binary tree.
> Note: In zig zag traversal we traverse the nodes from left to right for odd-numbered levels, and from right to left for even-numbered levels.


## 📚 Examples

<details open>
<summary><strong>Example 1</strong></summary>

| | |
|---|---|
| **Input** | `root = [1, 2, 3, 4, 5, 6, 7]` |
| **Output** | `[1, 3, 2, 4, 5, 6, 7]` |

**Explanation:**
Level 1 (left to right): [1]
Level 2 (right to left): [3, 2]
Level 3 (left to right): [4, 5, 6, 7]
Final result: [1, 3, 2, 4, 5, 6, 7]

</details>

<details >
<summary><strong>Example 2</strong></summary>

| | |
|---|---|
| **Input** | `root = [7, 9, 7, 8, 8, 6, N, 10, 9]` |
| **Output** | `[7, 7, 9, 8, 8, 6, 9, 10]` |

**Explanation:**
Level 1 (left to right): [7]
Level 2 (right to left): [7, 9]
Level 3 (left to right): [8, 8, 6]
Level 4 (right to left): [9, 10]
Final result: [7, 7, 9, 8, 8, 6, 9, 10]

</details>


---

<div align="center">

### 🚀 GFG GitHub Sync

<sub>Automatically synced from GeeksforGeeks • Last updated: 2026-11-24</sub>

</div>
