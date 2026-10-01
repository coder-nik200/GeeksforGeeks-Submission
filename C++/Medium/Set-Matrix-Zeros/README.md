<div align="center">

# 🔗 Set Matrix Zeros

[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-dfb317?style=for-the-badge)](https://www.geeksforgeeks.org/problems/set-matrix-zeroes/1)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-0366d6?style=for-the-badge&logo=cplusplus&logoColor=white)](https://www.geeksforgeeks.org/problems/set-matrix-zeroes/1)
[![Source](https://img.shields.io/badge/Source-GeeksforGeeks-2f8d46?style=for-the-badge)](https://www.geeksforgeeks.org/problems/set-matrix-zeroes/1)
[![Status](https://img.shields.io/badge/Status-Solved-2ea44f?style=for-the-badge&logo=checkmarx&logoColor=white)](https://www.geeksforgeeks.org/problems/set-matrix-zeroes/1)

**[🌐 View Original Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/set-matrix-zeroes/1)**

</div>

---

## 📝 Problem Statement

> Given a 2D matrix mat[][] of size n x m. Modify the matrix such that if mat[i][j] is 0, all the elements in the i-th row and j-th column are set to 0.


## 📚 Examples

<details open>
<summary><strong>Example 1</strong></summary>

| | |
|---|---|
| **Input** | `mat[][] = [[1, -1, 1], [-1, 0, 1], [1, -1, 1]]` |
| **Output** | `[[1, 0, 1], [0, 0, 0], [1, 0, 1]]` |

**Explanation:**
mat[1][1] = 0, so all elements in row 1 and column 1 are updated to zeroes.

</details>

<details >
<summary><strong>Example 2</strong></summary>

| | |
|---|---|
| **Input** | `mat[][] = [[0, 1, 2, 0], [1, 2, 6, 2], [1, 3, 1, 8]]` |
| **Output** | `[[0, 0, 0, 0], [0, 2, 6, 0], [0, 3, 1, 0]]` |

**Explanation:**
mat[0][0] and mat[0][3] are 0s, so all elements in row 0, column 0 and column 3 are updated to zeroes.


Constraints:
1 ≤ n, m ≤ 500
- 231 ≤ mat[i][j] ≤ 231 - 1

</details>


---

<div align="center">

### 🚀 GFG GitHub Sync

<sub>Automatically synced from GeeksforGeeks • Last updated: 2026-10-01</sub>

</div>
