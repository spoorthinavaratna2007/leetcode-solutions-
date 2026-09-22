# Binary Search

## Problem Link

https://leetcode.com/problems/binary-search/

## Problem

Given a sorted array of integers and a target value, find the index of the target. If the target is not present, return -1.

## Approach

I use two pointers, `left` and `right`, to represent the current search range.

I find the middle element of the range.

- If the middle element is equal to the target, I return its index.
- If the middle element is smaller than the target, I search the right half.
- Otherwise, I search the left half.

I continue until the target is found or the search range becomes empty.

## Complexity

- Time Complexity: O(log n)
- Space Complexity: O(1)

## Local Test Cases

### Test Case 1 - Typical Case

Input:

Array = [1, 3, 5, 7, 9]

Target = 7

Output:

3

### Test Case 2 - Edge Case

Input:

Array = [1, 3, 5, 7, 9]

Target = 4

Output:

-1

## Notes

- Binary search works on a sorted array.
- I tested both a case where the target is present and a case where it is not present.