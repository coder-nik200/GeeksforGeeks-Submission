<div align="center">

# 🔗 Max Circular Subarray Sum

[![Difficulty](https://img.shields.io/badge/Difficulty-Hard-e11d48?style=for-the-badge)](https://www.geeksforgeeks.org/problems/max-circular-subarray-sum-1587115620/1)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-0366d6?style=for-the-badge&logo=cplusplus&logoColor=white)](https://www.geeksforgeeks.org/problems/max-circular-subarray-sum-1587115620/1)
[![Source](https://img.shields.io/badge/Source-GeeksforGeeks-2f8d46?style=for-the-badge)](https://www.geeksforgeeks.org/problems/max-circular-subarray-sum-1587115620/1)
[![Status](https://img.shields.io/badge/Status-Solved-2ea44f?style=for-the-badge&logo=checkmarx&logoColor=white)](https://www.geeksforgeeks.org/problems/max-circular-subarray-sum-1587115620/1)

**[🌐 View Original Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/max-circular-subarray-sum-1587115620/1)**

</div>

---

## 📝 Problem Statement

> You are given a circular array arr[] of integers, find the maximum possible sum of a non-empty subarray. In a circular array, the subarray can start at the end and wrap around to the beginning. Return the maximum non-empty subarray sum, considering both non-wrapping and wrapping cases.


## 📚 Examples

<details open>
<summary><strong>Example 1</strong></summary>

| | |
|---|---|
| **Input** | `arr[] = [8, -8, 9, -9, 10, -11, 12]` |
| **Output** | `22` |

**Explanation:**
Starting from the last element of the array, i.e, 12, and moving in a circular fashion, we have max subarray as 12, 8, -8, 9, -9, 10, which gives maximum sum as 22.

</details>

<details >
<summary><strong>Example 2</strong></summary>

| | |
|---|---|
| **Input** | `arr[] = [10, -3, -4, 7, 6, 5, -4, -1]` |
| **Output** | `23` |

**Explanation:**
Maximum sum of the circular subarray is 23. The subarray is [7, 6, 5, -4, -1, 10].

</details>

<details >
<summary><strong>Example 3</strong></summary>

| | |
|---|---|
| **Input** | `arr[] = [5, -2, 3, 4]` |
| **Output** | `12` |

**Explanation:**
The circular subarray [3, 4, 5] gives the maximum sum of 12.

</details>


---

<div align="center">

### 🚀 GFG GitHub Sync

<sub>Automatically synced from GeeksforGeeks • Last updated: 2026-10-18</sub>

</div>
