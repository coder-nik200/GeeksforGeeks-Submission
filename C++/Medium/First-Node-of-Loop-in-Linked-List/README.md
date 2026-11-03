<div align="center">

# 🔗 First Node of Loop in Linked List

[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-dfb317?style=for-the-badge)](https://www.geeksforgeeks.org/problems/find-the-first-node-of-loop-in-linked-list--170645/1)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-0366d6?style=for-the-badge&logo=cplusplus&logoColor=white)](https://www.geeksforgeeks.org/problems/find-the-first-node-of-loop-in-linked-list--170645/1)
[![Source](https://img.shields.io/badge/Source-GeeksforGeeks-2f8d46?style=for-the-badge)](https://www.geeksforgeeks.org/problems/find-the-first-node-of-loop-in-linked-list--170645/1)
[![Status](https://img.shields.io/badge/Status-Solved-2ea44f?style=for-the-badge&logo=checkmarx&logoColor=white)](https://www.geeksforgeeks.org/problems/find-the-first-node-of-loop-in-linked-list--170645/1)

**[🌐 View Original Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/find-the-first-node-of-loop-in-linked-list--170645/1)**

</div>

---

## 📝 Problem Statement

> You are given the head of a singly linked list. If a loop is present in the linked list then return the first node of the loop else return -1.
> 
> Note: Internally, pos(1 based index) is used to denote the position of the node that tail's next pointer is connected to. If pos = 0, it means the last node points to null, indicating there is no loop. Note that pos is not passed as a parameter.


## 📚 Examples

<details open>
<summary><strong>Example 1</strong></summary>

| | |
|---|---|
| **Input** | `pos = 2,` |
| **Output** | `3` |

**Explanation:**
We can see that there exists a loop in the given linked list and the first node of the loop is 3.

</details>

<details >
<summary><strong>Example 2</strong></summary>

| | |
|---|---|
| **Input** | `pos = 0,` |
| **Output** | `-1` |

**Explanation:**
No loop exists in the above linked list. So the output is -1.


Constraints:
1 ≤ no. of nodes ≤ 106
1 ≤ node->data ≤ 106

</details>


---

<div align="center">

### 🚀 GFG GitHub Sync

<sub>Automatically synced from GeeksforGeeks • Last updated: 2026-11-03</sub>

</div>
