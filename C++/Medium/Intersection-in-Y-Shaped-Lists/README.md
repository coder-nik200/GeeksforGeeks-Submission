<div align="center">

# 🔗 Intersection in Y Shaped Lists

[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-dfb317?style=for-the-badge)](https://www.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-0366d6?style=for-the-badge&logo=cplusplus&logoColor=white)](https://www.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1)
[![Source](https://img.shields.io/badge/Source-GeeksforGeeks-2f8d46?style=for-the-badge)](https://www.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1)
[![Status](https://img.shields.io/badge/Status-Solved-2ea44f?style=for-the-badge&logo=checkmarx&logoColor=white)](https://www.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1)

**[🌐 View Original Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1)**

</div>

---

## 📝 Problem Statement

> Given the heads of two non-empty singly linked lists, head1 and head2, return the node where the two linked lists intersect. If the two lists do not intersect, return null.
> 
> Note: The custom input contains a non-empty singly linked list common. Initially, head1 and head2 do not share any node. The last node of each list is then connected to the head of common, creating an intersection at the first node of common. If common is empty, the two lists do not intersect at all.


## 📚 Examples

<details open>
<summary><strong>Example 1</strong></summary>

| | |
|---|---|
| **Input** | `head1: 10 -> 15 -> 30, head2: 3 -> 6 -> 9 -> 15 -> 30` |
| **Output** | `15` |

**Explanation:**
From the image, it is clear that the common part is 15 -> 30, and its starting node is 15.

</details>

<details >
<summary><strong>Example 2</strong></summary>

| | |
|---|---|
| **Input** | `head1: 4 -> 1 -> 8 -> 5, head2: 5 -> 6 -> 1 -> 8 -> 5` |
| **Output** | `1` |

**Explanation:**
From the image, it is clear that the common part is 1 -> 8 -> 5, and its starting node is 1.


Constraints:
2 ≤ total number of nodes ≤ 2*105
-104 ≤ node->data ≤ 104

</details>


---

<div align="center">

### 🚀 GFG GitHub Sync

<sub>Automatically synced from GeeksforGeeks • Last updated: 2026-11-02</sub>

</div>
