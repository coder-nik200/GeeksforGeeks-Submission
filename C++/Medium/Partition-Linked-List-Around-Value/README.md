<div align="center">

# 🔗 Partition Linked List Around Value

[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-dfb317?style=for-the-badge)](https://www.geeksforgeeks.org/problems/partition-a-linked-list-around-a-given-value/1)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-0366d6?style=for-the-badge&logo=cplusplus&logoColor=white)](https://www.geeksforgeeks.org/problems/partition-a-linked-list-around-a-given-value/1)
[![Source](https://img.shields.io/badge/Source-GeeksforGeeks-2f8d46?style=for-the-badge)](https://www.geeksforgeeks.org/problems/partition-a-linked-list-around-a-given-value/1)
[![Status](https://img.shields.io/badge/Status-Solved-2ea44f?style=for-the-badge&logo=checkmarx&logoColor=white)](https://www.geeksforgeeks.org/problems/partition-a-linked-list-around-a-given-value/1)

**[🌐 View Original Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/partition-a-linked-list-around-a-given-value/1)**

</div>

---

## 📝 Problem Statement

> Given the head of a linked list and an integer x, rearrange the list such that:
> All nodes with values less than x appear first,
> Followed by equal to x,
> Followed by greater than x.
> The relative order of nodes within each partition must remain unchanged, and the rearrangement should be performed in-place.


## 📚 Examples

<details open>
<summary><strong>Example 1</strong></summary>

| | |
|---|---|
| **Input** | `head: 1->4->2->10, x = 3` |
| **Output** | `1->2->4->10` |

**Explanation:**
Nodes with value less than 3 come first, then equal to 3 and then greater than 3.

</details>

<details >
<summary><strong>Example 2</strong></summary>

| | |
|---|---|
| **Input** | `head: 1->4->3->2->5->2->3, x = 3` |
| **Output** | `1->2->2->3->3->4->5` |

**Explanation:**
Nodes with a value less than 3 come first, then equal to 3 and then greater than 3.

Constraints:
1 ≤ size of linked list ≤ 105
1 ≤ data of node ≤ 105
1 ≤ x ≤ 105

</details>


---

<div align="center">

### 🚀 GFG GitHub Sync

<sub>Automatically synced from GeeksforGeeks • Last updated: 2026-11-09</sub>

</div>
