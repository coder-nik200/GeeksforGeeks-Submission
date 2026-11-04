<div align="center">

# 🔗 Pairwise Swap in Linked List

[![Difficulty](https://img.shields.io/badge/Difficulty-Easy-2ea44f?style=for-the-badge)](https://www.geeksforgeeks.org/problems/pairwise-swap-elements-of-a-linked-list-by-swapping-data/1)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-0366d6?style=for-the-badge&logo=cplusplus&logoColor=white)](https://www.geeksforgeeks.org/problems/pairwise-swap-elements-of-a-linked-list-by-swapping-data/1)
[![Source](https://img.shields.io/badge/Source-GeeksforGeeks-2f8d46?style=for-the-badge)](https://www.geeksforgeeks.org/problems/pairwise-swap-elements-of-a-linked-list-by-swapping-data/1)
[![Status](https://img.shields.io/badge/Status-Solved-2ea44f?style=for-the-badge&logo=checkmarx&logoColor=white)](https://www.geeksforgeeks.org/problems/pairwise-swap-elements-of-a-linked-list-by-swapping-data/1)

**[🌐 View Original Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/pairwise-swap-elements-of-a-linked-list-by-swapping-data/1)**

</div>

---

## 📝 Problem Statement

> Given the head of a singly linked list, swap every two adjacent nodes and return the new head.
> 
> Note: Try to swap the nodes, not only the data.


## 📚 Examples

<details open>
<summary><strong>Example 1</strong></summary>

| | |
|---|---|
| **Input** | `head = 1 -> 2 -> 3 -> 4 -> 5` |
| **Output** | `2 -> 1 -> 4 -> 3 -> 5` |

**Explanation:**
The list has 5 nodes, so we form pairs from the front: [1, 2], [3, 4], and 5 remains unpaired (odd node count).
Swapping each pair gives: [2, 1], [4, 3], and 5 stays as is.
Final list: 2 -> 1 -> 4 -> 3 -> 5.

</details>

<details >
<summary><strong>Example 2</strong></summary>

| | |
|---|---|
| **Input** | `head = 8 -> 7 -> 5 -> 2 -> 1` |
| **Output** | `7 -> 8 -> 2 -> 5 -> 1` |

**Explanation:**
The list has 5 nodes, so we form pairs from the front: [8, 7], [5, 2], and 1 remains unpaired (odd node count).
Swapping each pair gives: [7, 8], [2, 5], and 1 stays as is.
Final list: 7 -> 8 -> 2 -> 5 -> 1.

Constraints:
1 ≤ size of linked list ≤ 106
1 ≤ elements of linked list ≤ 106

</details>


---

<div align="center">

### 🚀 GFG GitHub Sync

<sub>Automatically synced from GeeksforGeeks • Last updated: 2026-11-04</sub>

</div>
