# Best Time to Buy and Sell Stock

## Problem Link

https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Problem

Given an array of stock prices where `prices[i]` is the price of a stock on the ith day, find the maximum profit that can be achieved by buying on one day and selling on a later day.

## Approach

I keep track of the minimum price seen so far.

For each day's price, I calculate the profit that could be obtained by selling on that day.

I keep updating the maximum profit found.

If the prices keep decreasing, the maximum profit remains 0.

## Complexity

- Time Complexity: O(n)
- Space Complexity: O(1)

## Local Test Cases

### Test Case 1 - Typical Case

Input:

Array = [7, 1, 5, 3, 6, 4]

Output:

5

### Test Case 2 - Edge Case

Input:

Array = [7, 6, 4, 3, 1]

Output:

0

## Notes

- The stock must be bought before it is sold.
- I tested both a case with profit and a case where no profit is possible.