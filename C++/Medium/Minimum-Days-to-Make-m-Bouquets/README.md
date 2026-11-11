<div align="center">

# 🔗 Minimum Days to Make m Bouquets

[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-dfb317?style=for-the-badge)](https://www.geeksforgeeks.org/problems/minimum-days-to-make-m-bouquets/1)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-0366d6?style=for-the-badge&logo=cplusplus&logoColor=white)](https://www.geeksforgeeks.org/problems/minimum-days-to-make-m-bouquets/1)
[![Source](https://img.shields.io/badge/Source-GeeksforGeeks-2f8d46?style=for-the-badge)](https://www.geeksforgeeks.org/problems/minimum-days-to-make-m-bouquets/1)
[![Status](https://img.shields.io/badge/Status-Solved-2ea44f?style=for-the-badge&logo=checkmarx&logoColor=white)](https://www.geeksforgeeks.org/problems/minimum-days-to-make-m-bouquets/1)

**[🌐 View Original Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/minimum-days-to-make-m-bouquets/1)**

</div>

---

## 📝 Problem Statement

> In a row of flowers, each flower blooms on a specific day. Given an integer array arr[], where arr[i] denotes the day on which the flower at position i blooms.
> 
> To make a bouquet, you need to collect k adjacent flowers that have already bloomed. Each flower can be used in at most one bouquet.
> 
> Find the minimum number of days required to make m bouquets. If it is impossible to do so, return -1.


## 📚 Examples

<details open>
<summary><strong>Example 1</strong></summary>

| | |
|---|---|
| **Input** | `arr[] = [3, 4, 2, 7, 13, 8, 5], m = 3, k = 2` |
| **Output** | `8` |

**Explanation:**
We need to make 3 bouquets, each consisting of 2 adjacent flowers.
-> By day 8, all flowers have bloomed except the flower at position 5 (1-indexed).
-> Form the 1st bouquet using the first 2 flowers.
-> Form the 2nd bouquet using the next 2 flowers.
-> Form the 3rd bouquet using the last 2 flowers.

</details>

<details >
<summary><strong>Example 2</strong></summary>

| | |
|---|---|
| **Input** | `arr[] = [5, 5, 5, 5, 10, 5, 5], m = 2, k = 3,` |
| **Output** | `10` |

**Explanation:**
We need to make 2 bouquets, each consisting of 3 adjacent flowers.
-> By day 5, all flowers have bloomed except the flower at position 5 (1-indexed).
-> We can form the 1st bouquet using the first 3 bloomed flowers.
-> It is not possible to form the 2nd bouquet now.
-> By day 10, all the flowers have bloomed.
-> We can then form 2 bouquets, each consisting of 3 adjacent flowers.

</details>

<details >
<summary><strong>Example 3</strong></summary>

| | |
|---|---|
| **Input** | `m = 3, k = 2, arr[] = [1, 10, 3, 10, 2]` |
| **Output** | `-1` |

**Explanation:**
We need to make 3 bouquets, each consisting of 2 flowers.
-> This requires a total of 6 flowers.
-> There are only 5 flowers available.
-> Therefore, it is impossible to make the required bouquets.

</details>


---

<div align="center">

### 🚀 GFG GitHub Sync

<sub>Automatically synced from GeeksforGeeks • Last updated: 2026-11-11</sub>

</div>
