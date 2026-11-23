<div align="center">

# 🔗 Root to Leaf Path Sum

[![Difficulty](https://img.shields.io/badge/Difficulty-Easy-2ea44f?style=for-the-badge)](https://www.geeksforgeeks.org/problems/root-to-leaf-path-sum/1)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-0366d6?style=for-the-badge&logo=cplusplus&logoColor=white)](https://www.geeksforgeeks.org/problems/root-to-leaf-path-sum/1)
[![Source](https://img.shields.io/badge/Source-GeeksforGeeks-2f8d46?style=for-the-badge)](https://www.geeksforgeeks.org/problems/root-to-leaf-path-sum/1)
[![Status](https://img.shields.io/badge/Status-Solved-2ea44f?style=for-the-badge&logo=checkmarx&logoColor=white)](https://www.geeksforgeeks.org/problems/root-to-leaf-path-sum/1)

**[🌐 View Original Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/root-to-leaf-path-sum/1)**

</div>

---

## 📝 Problem Statement

> Given root of a binary tree and an integer target, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum. Return false if no such path can be found.


## 📚 Examples

<details open>
<summary><strong>Example 1</strong></summary>

| | |
|---|---|
| **Input** | `root = [1, 2, 3], target = 4` |
| **Output** | `true` |

**Explanation:**
The root to leaf path sums are 1 + 2 = 3 and 1 + 3 = 4. Since, a path with sum 4 exists (1 -> 3), the answer is true.

</details>

<details >
<summary><strong>Example 2</strong></summary>

| | |
|---|---|
| **Input** | `root = [1, 2, 3], target = 2` |
| **Output** | `false` |

**Explanation:**
The root to leaf path sums are 1 + 2 = 3 and 1 + 3 = 4. Since, there is no path with sum 2, the answer is false.

</details>

<details >
<summary><strong>Example 3</strong></summary>

| | |
|---|---|
| **Input** | `root = [1, 2, 3, 4, 1], target = 4` |
| **Output** | `true` |

**Explanation:**
The root to leaf path sums are 1 + 2 + 4 = 7, 1 + 2 + 1 = 4 and 1 + 3 = 4. Since, a path with sum 4 exists (1 -> 3 and 1 -> 2 -> 1), the answer is true.

</details>


---

<div align="center">

### 🚀 GFG GitHub Sync

<sub>Automatically synced from GeeksforGeeks • Last updated: 2026-11-23</sub>

</div>
