<div align="center">

# 🔗 Implement Upper Bound

[![Difficulty](https://img.shields.io/badge/Difficulty-Easy-2ea44f?style=for-the-badge)](https://www.geeksforgeeks.org/problems/implement-upper-bound/1)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-0366d6?style=for-the-badge&logo=cplusplus&logoColor=white)](https://www.geeksforgeeks.org/problems/implement-upper-bound/1)
[![Source](https://img.shields.io/badge/Source-GeeksforGeeks-2f8d46?style=for-the-badge)](https://www.geeksforgeeks.org/problems/implement-upper-bound/1)
[![Status](https://img.shields.io/badge/Status-Solved-2ea44f?style=for-the-badge&logo=checkmarx&logoColor=white)](https://www.geeksforgeeks.org/problems/implement-upper-bound/1)

**[🌐 View Original Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/implement-upper-bound/1)**

</div>

---

## 📝 Problem Statement

> Given a sorted array arr[] and a number target, the task is to find the upper bound of the target in this given array.
> The upper bound of a number is defined as the smallest index in the sorted array where the element is greater than the given number.
> 
> Note: If all the elements in the given array are smaller than or equal to the target, the upper bound will be the length of the array.


## 📚 Examples

<details open>
<summary><strong>Example 1</strong></summary>

| | |
|---|---|
| **Input** | `arr[] = [2, 3, 7, 10, 11, 11, 25], target = 9` |
| **Output** | `3` |

**Explanation:**
3 is the smallest index in arr[], at which element (arr[3] = 10) is larger than 9.

</details>

<details >
<summary><strong>Example 2</strong></summary>

| | |
|---|---|
| **Input** | `arr[] = [2, 3, 7, 10, 11, 11, 25], target = 11` |
| **Output** | `6` |

**Explanation:**
6 is the smallest index in arr[], at which element (arr[6] = 25) is larger than 11.

</details>

<details >
<summary><strong>Example 3</strong></summary>

| | |
|---|---|
| **Input** | `arr[] = [2, 3, 7, 10, 11, 11, 25], target = 100` |
| **Output** | `7` |

**Explanation:**
As no element in arr[] is greater than 100, return the length of array.

Constraints:
1 ≤ arr.size() ≤ 106
1 ≤ arr[i] ≤ 106
1 ≤ target ≤ 106

</details>


---

<div align="center">

### 🚀 GFG GitHub Sync

<sub>Automatically synced from GeeksforGeeks • Last updated: 2026-09-29</sub>

</div>
