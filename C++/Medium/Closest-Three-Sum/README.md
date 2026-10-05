<div align="center">

# 🔗 Closest Three Sum

[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-dfb317?style=for-the-badge)](https://www.geeksforgeeks.org/problems/three-sum-closest/1)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-0366d6?style=for-the-badge&logo=cplusplus&logoColor=white)](https://www.geeksforgeeks.org/problems/three-sum-closest/1)
[![Source](https://img.shields.io/badge/Source-GeeksforGeeks-2f8d46?style=for-the-badge)](https://www.geeksforgeeks.org/problems/three-sum-closest/1)
[![Status](https://img.shields.io/badge/Status-Solved-2ea44f?style=for-the-badge&logo=checkmarx&logoColor=white)](https://www.geeksforgeeks.org/problems/three-sum-closest/1)

**[🌐 View Original Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/three-sum-closest/1)**

</div>

---

## 📝 Problem Statement

> Given an array, arr[] of integers, and another number target, find three integers in the array such that their sum is closest to the target. Return the sum of the three integers.
> 
> Note: If there are multiple solutions, return the maximum one.


## 📚 Examples

<details open>
<summary><strong>Example 1</strong></summary>

| | |
|---|---|
| **Input** | `arr[] = [-1, 2, 2, 4], target = 4` |
| **Output** | `5` |

**Explanation:**
All possible triplets
[-1, 2, 2], sum = (-1) + 2 + 2 = 3
[-1, 2, 4], sum = (-1) + 2 + 4 = 5
[-1, 2, 4], sum = (-1) + 2 + 4 = 5
[2, 2, 4], sum = 2 + 2 + 4 = 8
Triplet [-1, 2, 2], [-1, 2, 4] and [-1, 2, 4] have sum closest to target, so return the maximum one, that is 5.

</details>

<details >
<summary><strong>Example 2</strong></summary>

| | |
|---|---|
| **Input** | `arr[] = [1, 10, 4, 5], target = 10` |
| **Output** | `10` |

**Explanation:**
All possible triplets
[1, 10, 4], sum = (1 + 10 + 4) = 15
[1, 10, 5], sum = (1 + 10 + 5) = 16
[1, 4, 5], sum = (1 + 4 + 5) = 10
[10, 4, 5], sum = (10 + 4 + 5) = 19 
Triplet [1, 4, 5] has sum = 10 which is closest to target.

Constraints:
3 ≤ arr.size() ≤ 103
-105 ≤ arr[i] ≤ 105
1 ≤ target ≤ 105

</details>


---

<div align="center">

### 🚀 GFG GitHub Sync

<sub>Automatically synced from GeeksforGeeks • Last updated: 2026-10-05</sub>

</div>
