<div align="center">

# 🔗 Stock Buy and Sell – Max one Transaction Allowed

[![Difficulty](https://img.shields.io/badge/Difficulty-Easy-2ea44f?style=for-the-badge)](https://www.geeksforgeeks.org/problems/buy-stock-2/1)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-0366d6?style=for-the-badge&logo=cplusplus&logoColor=white)](https://www.geeksforgeeks.org/problems/buy-stock-2/1)
[![Source](https://img.shields.io/badge/Source-GeeksforGeeks-2f8d46?style=for-the-badge)](https://www.geeksforgeeks.org/problems/buy-stock-2/1)
[![Status](https://img.shields.io/badge/Status-Solved-2ea44f?style=for-the-badge&logo=checkmarx&logoColor=white)](https://www.geeksforgeeks.org/problems/buy-stock-2/1)

**[🌐 View Original Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/buy-stock-2/1)**

</div>

---

## 📝 Problem Statement

> Given an array prices[] of non-negative integers, representing the prices of the stocks on different days. The task is to find the maximum profit possible by buying and selling the stocks on different days when at most one transaction is allowed. Here one transaction means 1 buy + 1 Sell. If it is not possible to make a profit then return 0.
> 
> Note: Stock must be bought before being sold.


## 📚 Examples

<details open>
<summary><strong>Example 1</strong></summary>

| | |
|---|---|
| **Input** | `prices[] = [7, 10, 1, 3, 6, 9, 2]` |
| **Output** | `8` |

**Explanation:**
You can buy the stock on day 2 at price = 1 and sell it on day 5 at price = 9. Hence, the profit is 8.

</details>

<details >
<summary><strong>Example 2</strong></summary>

| | |
|---|---|
| **Input** | `prices[] = [7, 6, 4, 3, 1]` |
| **Output** | `0` |

**Explanation:**
Here the prices are in decreasing order, hence if we buy any day then we cannot sell it at a greater price. Hence, the answer is 0.

</details>

<details >
<summary><strong>Example 3</strong></summary>

| | |
|---|---|
| **Input** | `prices[] = [1, 3, 6, 9, 11]` |
| **Output** | `10` |

**Explanation:**
Since the array is sorted in increasing order, we can make maximum profit by buying at price[0] and selling at price[n-1].

</details>


---

<div align="center">

### 🚀 GFG GitHub Sync

<sub>Automatically synced from GeeksforGeeks • Last updated: 2026-11-01</sub>

</div>
