<div align="center">

# 🔗 Painter's Partition Problem

[![Difficulty](https://img.shields.io/badge/Difficulty-Hard-e11d48?style=for-the-badge)](https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-0366d6?style=for-the-badge&logo=cplusplus&logoColor=white)](https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1)
[![Source](https://img.shields.io/badge/Source-GeeksforGeeks-2f8d46?style=for-the-badge)](https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1)
[![Status](https://img.shields.io/badge/Status-Solved-2ea44f?style=for-the-badge&logo=checkmarx&logoColor=white)](https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1)

**[🌐 View Original Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1)**

</div>

---

## 📝 Problem Statement

> Given an array arr[] where each element denotes the length of a board, and an integer k representing the number of painters available.
> 
> Each painter takes 1 unit of time to paint 1 unit length of a board.
> Each painter can paint only a contiguous sequence of boards (no skipping or splitting allowed).
> 
> Find the minimum amount of time required to paint all the boards.


## 📚 Examples

<details open>
<summary><strong>Example 1</strong></summary>

| | |
|---|---|
| **Input** | `arr[] = [5, 10, 30, 20, 15], k = 3` |
| **Output** | `35` |

**Explanation:**
The optimal allocation of boards among 3 painters is - 
Painter 1 -> [5, 10] → time = 15
Painter 2 -> [30] → time = 30
Painter 3 -> [20, 15] → time = 35
Job will be done when all painters finish i.e. at time = max(15, 30, 35) = 35

</details>

<details >
<summary><strong>Example 2</strong></summary>

| | |
|---|---|
| **Input** | `arr[] = [10, 20, 30, 40], k = 2` |
| **Output** | `60` |

**Explanation:**
A valid optimal partition is - 
Painter 1 -> [10, 20, 30] → time = 60
Painter 2 -> [40] → time = 40
Job will be complete at time = max(60, 40) = 60

</details>

<details >
<summary><strong>Example 3</strong></summary>

| | |
|---|---|
| **Input** | `arr[] = [100, 200, 300, 400], k = 1` |
| **Output** | `1000` |

**Explanation:**
There is only one painter, so the painter must paint all boards sequentially. The total time taken will be the sum of all board lengths, i.e., 100 + 200 + 300 + 400 = 1000.

</details>


---

<div align="center">

### 🚀 GFG GitHub Sync

<sub>Automatically synced from GeeksforGeeks • Last updated: 2026-11-13</sub>

</div>
