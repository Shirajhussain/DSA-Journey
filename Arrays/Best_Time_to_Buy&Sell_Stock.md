# 121. Best Time to Buy and Sell Stock

**Platform:** LeetCode
**Difficulty:** Easy
**Topic:** Arrays, Greedy

---

# Problem Statement

You are given an integer array `prices` where `prices[i]` is the price of a stock on the `iᵗʰ` day.

You may choose a single day to buy one stock and choose a different day in the future to sell that stock.

Return the maximum profit you can achieve.

If no profit is possible, return `0`.

---

# Approach (Greedy)

The key observation is:

* Buy the stock at the **minimum price** seen so far.
* For every day, calculate the profit if you sell on that day.
* Keep track of the maximum profit.

Instead of checking every possible pair of buy and sell days (`O(n²)`), we maintain:

* `buyStock` → Minimum stock price seen so far.
* `maxProfit` → Maximum profit obtained so far.

---

# Algorithm

1. Initialize:

   * `buyStock = prices[0]`
   * `maxProfit = 0`
2. Traverse the array from index `1`.
3. If the current price is smaller than `buyStock`, update `buyStock`.
4. Otherwise, calculate the current profit:

   ```
   currentProfit = prices[i] - buyStock
   ```
5. Update `maxProfit` if the current profit is larger.
6. Return `maxProfit`.

---

# Time Complexity

* **O(n)**

Only one traversal of the array is required.

---

# Space Complexity

* **O(1)**

Only a few variables are used.

---

# Key Interview Points

* This is a Greedy algorithm.
* Keep track of the minimum buying price.
* Calculate profit for every selling day.
* Update the maximum profit whenever a better profit is found.
* Much better than the brute-force solution (`O(n²)`).
