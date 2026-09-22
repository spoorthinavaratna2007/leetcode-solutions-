# Two Sum

**Problem:** Two Sum  
**Difficulty:** Easy  
**Platform:** LeetCode

## Problem Link

https://leetcode.com/problems/two-sum/

## Approach

I used a brute-force approach with two nested loops.

The first loop selects one element, and the second loop checks all the elements after it.

For each pair of elements, I check whether their sum is equal to the target. If the required pair is found, their indices are returned.

## Complexity

- Time Complexity: O(n²)
- Space Complexity: O(1)

## Local Test Cases

### Test Case 1 - Typical Case

Input:
Array = [2, 7, 11, 15]
Target = 9

Output:
[0, 1]

### Test Case 2 - Edge Case

Input:
Array = [3, 3]
Target = 6

Output:
[0, 1]

## Notes

- Array indexing starts from 0.
- I tested both a typical case and a duplicate-value case.
