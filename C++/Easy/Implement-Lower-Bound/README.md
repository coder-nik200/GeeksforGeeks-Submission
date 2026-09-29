<div align="center">

# 🔗 Implement Lower Bound

[![Difficulty](https://img.shields.io/badge/Difficulty-Easy-2ea44f?style=for-the-badge)](https://www.geeksforgeeks.org/problems/implement-lower-bound/1)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-0366d6?style=for-the-badge&logo=cplusplus&logoColor=white)](https://www.geeksforgeeks.org/problems/implement-lower-bound/1)
[![Source](https://img.shields.io/badge/Source-GeeksforGeeks-2f8d46?style=for-the-badge)](https://www.geeksforgeeks.org/problems/implement-lower-bound/1)
[![Status](https://img.shields.io/badge/Status-Solved-2ea44f?style=for-the-badge&logo=checkmarx&logoColor=white)](https://www.geeksforgeeks.org/problems/implement-lower-bound/1)

**[🌐 View Original Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/implement-lower-bound/1)**

</div>

---

## 📝 Problem Statement

> Given a sorted array arr[] (following 0-based indexing) and a number target, find the lower bound of the target in this given array.
> 
> The lower bound of a number is defined as the smallest index in the sorted array where the element is greater than or equal to the given number.
> If all the elements in the given array are smaller than the target, the lower bound will be the length of the array.


## 📚 Examples

<details open>
<summary><strong>Example 1</strong></summary>

| | |
|---|---|
| **Input** | `arr[] = [2, 3, 7, 10, 11, 11, 25], target = 9` |
| **Output** | `3` |

**Explanation:**
3 is the smallest index in arr[] where element (arr[3] = 10) is greater than or equal to 9.

</details>

<details >
<summary><strong>Example 2</strong></summary>

| | |
|---|---|
| **Input** | `arr[] = [2, 3, 7, 10, 11, 11, 25], target = 11` |
| **Output** | `4` |

**Explanation:**
4 is the smallest index in arr[] where element (arr[4] = 11) is greater than or equal to 11.

</details>

<details >
<summary><strong>Example 3</strong></summary>

| | |
|---|---|
| **Input** | `arr[] = [2, 3, 7, 10, 11, 11, 25], target = 100` |
| **Output** | `7` |

**Explanation:**
As no element in arr[] is greater than 100, return the length of array.

</details>


---

<div align="center">

### 🚀 GFG GitHub Sync

<sub>Automatically synced from GeeksforGeeks • Last updated: 2026-09-29</sub>

</div>
