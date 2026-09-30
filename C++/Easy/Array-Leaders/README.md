<div align="center">

# 🔗 Array Leaders

[![Difficulty](https://img.shields.io/badge/Difficulty-Easy-2ea44f?style=for-the-badge)](https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-0366d6?style=for-the-badge&logo=cplusplus&logoColor=white)](https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1)
[![Source](https://img.shields.io/badge/Source-GeeksforGeeks-2f8d46?style=for-the-badge)](https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1)
[![Status](https://img.shields.io/badge/Status-Solved-2ea44f?style=for-the-badge&logo=checkmarx&logoColor=white)](https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1)

**[🌐 View Original Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1)**

</div>

---

## 📝 Problem Statement

> You are given an array arr of positive integers. Your task is to find all the leaders in the array. An element is considered a leader if it is greater than or equal to all elements to its right. The rightmost element is always a leader.


## 📚 Examples

<details open>
<summary><strong>Example 1</strong></summary>

| | |
|---|---|
| **Input** | `arr = [16, 17, 4, 3, 5, 2]` |
| **Output** | `[17, 5, 2]` |

**Explanation:**
Note that there is nothing greater on the right side of 17, 5 and, 2.

</details>

<details >
<summary><strong>Example 2</strong></summary>

| | |
|---|---|
| **Input** | `arr = [10, 4, 2, 4, 1]` |
| **Output** | `[10, 4, 4, 1]` |

**Explanation:**
Note that both of the 4s are in output, as to be a leader an equal element is also allowed on the right. side

</details>

<details >
<summary><strong>Example 3</strong></summary>

| | |
|---|---|
| **Input** | `arr = [5, 10, 20, 40]` |
| **Output** | `[40]` |

**Explanation:**
When an array is sorted in increasing order, only the rightmost element is leader.

</details>

<details >
<summary><strong>Example 4</strong></summary>

| | |
|---|---|
| **Input** | `arr = [30, 10, 10, 5]` |
| **Output** | `[30, 10, 10, 5]` |

**Explanation:**
When an array is sorted in non-increasing order, all elements are leaders.

</details>


---

<div align="center">

### 🚀 GFG GitHub Sync

<sub>Automatically synced from GeeksforGeeks • Last updated: 2026-09-30</sub>

</div>
