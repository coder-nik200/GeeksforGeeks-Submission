<div align="center">

# 🔗 Detect Loop in Linked List

[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-dfb317?style=for-the-badge)](https://www.geeksforgeeks.org/problems/detect-loop-in-linked-list/1)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-0366d6?style=for-the-badge&logo=cplusplus&logoColor=white)](https://www.geeksforgeeks.org/problems/detect-loop-in-linked-list/1)
[![Source](https://img.shields.io/badge/Source-GeeksforGeeks-2f8d46?style=for-the-badge)](https://www.geeksforgeeks.org/problems/detect-loop-in-linked-list/1)
[![Status](https://img.shields.io/badge/Status-Solved-2ea44f?style=for-the-badge&logo=checkmarx&logoColor=white)](https://www.geeksforgeeks.org/problems/detect-loop-in-linked-list/1)

**[🌐 View Original Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/detect-loop-in-linked-list/1)**

</div>

---

## 📝 Problem Statement

> Given a singly linked list, find if the given linked list contains a loop or not. A loop exists in a linked list if the next pointer of the last node points to any other node in the list (including itself), rather than being null.
> 
> 
> Note: Internally, pos(1 based index) is used to denote the position of the node that tail's next pointer is connected to. If pos = 0, it means the last node points to null. Note that pos is not passed as a parameter.


## 📚 Examples

<details open>
<summary><strong>Example 1</strong></summary>

| | |
|---|---|
| **Input** | `pos = 2,` |
| **Output** | `true` |

**Explanation:**
There exists a loop as last node is connected back to the second node.

</details>

<details >
<summary><strong>Example 2</strong></summary>

| | |
|---|---|
| **Input** | `pos = 0,` |
| **Output** | `false` |

**Explanation:**
There exists no loop in given linked list.

</details>

<details >
<summary><strong>Example 3</strong></summary>

| | |
|---|---|
| **Input** | `pos = 1,` |
| **Output** | `true` |

**Explanation:**
There exists a loop as last node is connected back to the first node.

</details>


---

<div align="center">

### 🚀 GFG GitHub Sync

<sub>Automatically synced from GeeksforGeeks • Last updated: 2026-10-20</sub>

</div>
