<div align="center">

# 🔗 Find the Peak Element in a 2D Matrix

[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-dfb317?style=for-the-badge)](https://www.geeksforgeeks.org/problems/find-the-peak-element-in-a-2d-matrix/1)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-0366d6?style=for-the-badge&logo=cplusplus&logoColor=white)](https://www.geeksforgeeks.org/problems/find-the-peak-element-in-a-2d-matrix/1)
[![Source](https://img.shields.io/badge/Source-GeeksforGeeks-2f8d46?style=for-the-badge)](https://www.geeksforgeeks.org/problems/find-the-peak-element-in-a-2d-matrix/1)
[![Status](https://img.shields.io/badge/Status-Solved-2ea44f?style=for-the-badge&logo=checkmarx&logoColor=white)](https://www.geeksforgeeks.org/problems/find-the-peak-element-in-a-2d-matrix/1)

**[🌐 View Original Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/find-the-peak-element-in-a-2d-matrix/1)**

</div>

---

## 📝 Problem Statement

> Given a 2D matrix mat[][], identify any peak element within the matrix.
> 
> An element is considered a peak if it is greater than or equal to its four immediate neighbors: top, bottom, left, and right. For corner and edge elements, any missing neighbors are treated as having a value of negative infinity.
> 
> Note: A peak element is not necessarily the global maximum, it only needs to satisfy the condition relative to its adjacent elements. Multiple peak elements may exist, return any one of them.
> Note that the driver code will print true if you return the correct position of peak element, else it will print false.


## 📚 Examples

<details open>
<summary><strong>Example 1</strong></summary>

| | |
|---|---|
| **Input** | `mat[][] = [[10, 20, 15],           
                [21, 30, 14],
                 [7, 16, 32]]` |
| **Output** | `true` |

**Explanation:**
One of the peak element is 30 at index (1, 1), which is greater than or equal to all its valid neighbors: Left = 21, Right = 14, Top = 20, Bottom = 16. So, it satisfies the peak condition. Alternatively, (2, 2) with value 32 also qualifies as a peak.

</details>

<details >
<summary><strong>Example 2</strong></summary>

| | |
|---|---|
| **Input** | `mat[][] = [[17, 7],
                [11, 10]]` |
| **Output** | `true` |

**Explanation:**
17 is the only peak element at index (0, 0). Its neighbors are: Right= 7, Bottom = 11. Since 17 is greater than or equal to both (and top/left are out of bounds), it qualifies as a peak element.

Constraint:
1 ≤ n × m ≤ 106
-106 ≤ mat[i][j] ≤ 106

</details>


---

<div align="center">

### 🚀 GFG GitHub Sync

<sub>Automatically synced from GeeksforGeeks • Last updated: 2026-11-16</sub>

</div>
