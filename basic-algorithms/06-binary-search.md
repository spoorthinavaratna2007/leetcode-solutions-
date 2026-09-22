# Binary Search

## Problem
Given a sorted array of integers and a target value, find the index of the target. If the target is not present, return -1.

## Approach
- Set two pointers: `left` at the beginning and `right` at the end.
- Find the middle element.
- If the middle element is the target, return its index.
- If the middle element is smaller than the target, search the right half.
- Otherwise, search the left half.
- Continue until the target is found or the search range becomes empty.

## Time Complexity
O(log n)

## Space Complexity
O(1)

## Local Test Cases

### Test Case 1
Input:
`[1,3,5,7,9]`, target = `7`

Output:
`3`

### Test Case 2
Input:
`[1,3,5,7,9]`, target = `4`

Output:
`-1`

## Notes
Binary search works only when the array is sorted.