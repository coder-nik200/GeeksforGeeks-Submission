<div align="center">

# 🔗 Maximum point you can obtain from cards

[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-dfb317?style=for-the-badge)](https://www.geeksforgeeks.org/problems/maximum-point-you-can-obtain-from-cards/1)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-0366d6?style=for-the-badge&logo=cplusplus&logoColor=white)](https://www.geeksforgeeks.org/problems/maximum-point-you-can-obtain-from-cards/1)
[![Source](https://img.shields.io/badge/Source-GeeksforGeeks-2f8d46?style=for-the-badge)](https://www.geeksforgeeks.org/problems/maximum-point-you-can-obtain-from-cards/1)
[![Status](https://img.shields.io/badge/Status-Solved-2ea44f?style=for-the-badge&logo=checkmarx&logoColor=white)](https://www.geeksforgeeks.org/problems/maximum-point-you-can-obtain-from-cards/1)

**[🌐 View Original Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/maximum-point-you-can-obtain-from-cards/1)**

</div>

---

## 📝 Problem Statement

> You are given an integer array cardPoints[], where each element represents the points associated with a card. The cards are arranged in a row. In one step, you can take one card either from the beginning or the end of the row. You must take exactly k cards. Your goal is to maximize the total score from the cards you take.
> 
> Given the array cardPoints[], and the integer k, return the maximum score you can obtain.


## 📚 Examples

<details open>
<summary><strong>Example 1</strong></summary>

| | |
|---|---|
| **Input** | `cardPoints[] = [1, 2, 3, 4, 5, 6, 1], k = 3` |
| **Output** | `12` |

**Explanation:**
Taking the rightmost three cards yields a total score of 1 + 6 + 5 = 12.

</details>

<details >
<summary><strong>Example 2</strong></summary>

| | |
|---|---|
| **Input** | `cardPoints[] = [8, 6, 2, 4, 5], k = 5` |
| **Output** | `25` |

**Explanation:**
You need to take all the cards, so the score is 8 + 6 + 2 + 4 + 5 = 25.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ cardPoints.size() ≤ 10^6
1 ≤ k ≤ cardPoints.size()
1 ≤ cardPoints[i] ≤ 10^5

</details>


---

<div align="center">

### 🚀 GFG GitHub Sync

<sub>Automatically synced from GeeksforGeeks • Last updated: 2026-10-08</sub>

</div>
