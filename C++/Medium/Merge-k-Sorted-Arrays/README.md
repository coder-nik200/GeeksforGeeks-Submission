<div align="center">

# 🔗 Merge k Sorted Arrays

[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-dfb317?style=for-the-badge)](https://www.geeksforgeeks.org/problems/merge-k-sorted-arrays/1)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-0366d6?style=for-the-badge&logo=cplusplus&logoColor=white)](https://www.geeksforgeeks.org/problems/merge-k-sorted-arrays/1)
[![Source](https://img.shields.io/badge/Source-GeeksforGeeks-2f8d46?style=for-the-badge)](https://www.geeksforgeeks.org/problems/merge-k-sorted-arrays/1)
[![Status](https://img.shields.io/badge/Status-Solved-2ea44f?style=for-the-badge&logo=checkmarx&logoColor=white)](https://www.geeksforgeeks.org/problems/merge-k-sorted-arrays/1)

**[🌐 View Original Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/merge-k-sorted-arrays/1)**

</div>

---

## 📝 Problem Statement

> Given a 2D matrix mat[][] of size n x m. Each row in the matrix is sorted in non-decreasing order, merge all the rows and return a single sorted array that contains all the elements of the matrix.


## 📚 Examples

<details open>
<summary><strong>Example 1</strong></summary>

| | |
|---|---|
| **Input** | `mat[][] = [[1, 3, 5, 7], [2, 4, 6, 8], [0, 9, 10, 11]]` |
| **Output** | `[0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]` |

**Explanation:**
Merging all elements from the 3 sorted arrays and sorting them results in: [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11].

</details>

<details >
<summary><strong>Example 2</strong></summary>

| | |
|---|---|
| **Input** | `mat[][] = [[1, 2, 3, 4], [2, 2, 3, 4], [5, 5, 6, 6], [7, 8, 9, 9]]` |
| **Output** | `[1, 2, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 8, 9, 9]` |

**Explanation:**
Merging all elements from the 4 sorted arrays and sorting them results in:[1, 2, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 8, 9, 9]

Constraints:
1 ≤ n * m ≤ 105
0 ≤ mat[i][j] ≤ 106

</details>


---

<div align="center">

### 🚀 GFG GitHub Sync

<sub>Automatically synced from GeeksforGeeks • Last updated: 2026-10-04</sub>

</div>
