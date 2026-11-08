<div align="center">

# 🔗 Design Browser History

[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-dfb317?style=for-the-badge)](https://www.geeksforgeeks.org/problems/design-browser-history/1)
[![Language](https://img.shields.io/badge/Language-C%2B%2B-0366d6?style=for-the-badge&logo=cplusplus&logoColor=white)](https://www.geeksforgeeks.org/problems/design-browser-history/1)
[![Source](https://img.shields.io/badge/Source-GeeksforGeeks-2f8d46?style=for-the-badge)](https://www.geeksforgeeks.org/problems/design-browser-history/1)
[![Status](https://img.shields.io/badge/Status-Solved-2ea44f?style=for-the-badge&logo=checkmarx&logoColor=white)](https://www.geeksforgeeks.org/problems/design-browser-history/1)

**[🌐 View Original Problem on GeeksforGeeks](https://www.geeksforgeeks.org/problems/design-browser-history/1)**

</div>

---

## 📝 Problem Statement

> You are given q operations to be performed on a browser with a single tab. Implement the BrowserHistory class to process these operations.
> 
> The operations are provided as a 2D string array operations[][] of size q × 2, where:
> 
> operations[i][0] denotes the operation.
> operations[i][1] denotes the corresponding argument.
> 
> The first operation is always: ["BrowserHistory", homepage] ->  Initializes the browser with the given homepage.
> 
> The remaining operations are:
> 
> ["visit", url] -> Visits the webpage url from the current page and clears all the forward history.
> ["back", steps] -> Moves backward by at most steps pages and returns the current URL.
> ["forward", steps] -> Moves forward by at most steps pages and returns the current URL.
> 
> If the requested number of backward or forward steps exceeds the available history, move as far as possible and return the URL of the page where the browser stops.


## 📚 Examples

<details open>
<summary><strong>Example 1</strong></summary>

| | |
|---|---|
| **Input** | `q = 6 operations[][] = [ ["BrowserHistory", "gfg.org"], ["visit", "google.com"], ["visit", "facebook.com"], ["back", "2"], ["forward", "1"], ["visit", "linkedin.com"] ]` |
| **Output** | `[gfg.org, google.com]` |

**Explanation:**
Initialize the browser with "gfg.org".
Visit "google.com" and then "youtube.com".
back(1) moves to "google.com".
forward(1) moves back to "youtube.com".

</details>

<details >
<summary><strong>Example 2</strong></summary>

| | |
|---|---|
| **Input** | `q = 3, operations[][] = [["BrowserHistory", "google.com"], ["visit", "youtube.com"], ["back", "2"]]` |
| **Output** | `["google.com"]` |

**Explanation:**
Initialize the browser with "google.com".
Visit "youtube.com".
back(2) requests moving back two pages, but only one previous page is available.
The browser moves back one step and returns "google.com".

Constraints:
1 ≤ q ≤ 5000
1 ≤ homepage.length ≤ 20
1 ≤ url.length ≤ 20
1 ≤ steps ≤ 100
homepage and url consist of . and lowercase English letters only.
At most 5000 calls will be made to visit, back, and forward.

</details>


---

<div align="center">

### 🚀 GFG GitHub Sync

<sub>Automatically synced from GeeksforGeeks • Last updated: 2026-11-08</sub>

</div>
