# Best Time to Buy and Sell Stock

## Problem
Given an array of stock prices where prices[i] is the price of a stock on the ith day, find the maximum profit that can be achieved by buying on one day and selling on a later day.

## Approach
- Keep track of the minimum price seen so far.
- For every price, calculate the profit by selling at that price.
- Keep track of the maximum profit.
- If prices keep decreasing, the maximum profit remains 0.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Local Test Cases

### Test Case 1
Input:
`[7,1,5,3,6,4]`

Output:
`5`

### Test Case 2
Input:
`[7,6,4,3,1]`

Output:
`0`

## Notes
The stock must be bought before it is sold. Therefore, we always compare the current price with the minimum price found earlier.