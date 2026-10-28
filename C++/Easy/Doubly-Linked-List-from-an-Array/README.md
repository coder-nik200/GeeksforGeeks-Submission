<div align="center">

# 🔗 Doubly Linked List from an Array

[![Difficulty](https://img.shields.io/badge/Difficulty-Easy-2ea44f?style=for-the-badge)](https://www.geeksforgeeks.org/problems/create-a-doubly-linked-list-from-a-given-array/1)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-0366d6?style=for-the-badge&logo=cplusplus&logoColor=white)](https://www.geeksforgeeks.org/problems/create-a-doubly-linked-list-from-a-given-array/1)
[![Source](https://img.shields.io/badge/Source-GeeksforGeeks-2f8d46?style=for-the-badge)](https://www.geeksforgeeks.org/problems/create-a-doubly-linked-list-from-a-given-array/1)
[![Status](https://img.shields.io/badge/Status-Solved-2ea44f?style=for-the-badge&logo=checkmarx&logoColor=white)](https://www.geeksforgeeks.org/problems/create-a-doubly-linked-list-from-a-given-array/1)

**[🌐 View Original Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/create-a-doubly-linked-list-from-a-given-array/1)**

</div>

---

## 📝 Problem Statement

> Given an array arr[] of integers, the goal is to create a Doubly Linked List (DLL) where each element of the array is represented as a node. The nodes must be linked in the same sequence as the array, maintaining both forward (next) and backward (prev) connections. Return the head of the constructed doubly linked list.


## 📚 Examples

<details open>
<summary><strong>Example 1</strong></summary>

| | |
|---|---|
| **Input** | `arr[] = [1, 2, 3, 4]` |
| **Output** | `1 <-> 2 <-> 3 <-> 4` |

**Explanation:**
Each array element becomes a node in the doubly linked list. Node 1 connects forward to 2, and node 2 connects back to 1, and so on.

</details>

<details >
<summary><strong>Example 2</strong></summary>

| | |
|---|---|
| **Input** | `arr[] = [10, 20]` |
| **Output** | `10 <-> 20` |

**Explanation:**
The list has two nodes. Node 10 points to 20, and node 20 points back to 10.



Constraints:
1 ≤ arr.size() ≤ 104
0 ≤ arr[i] ≤ 104

</details>


---

<div align="center">

### 🚀 GFG GitHub Sync

<sub>Automatically synced from GeeksforGeeks • Last updated: 2026-10-28</sub>

</div>
