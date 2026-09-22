# Reverse Linked List

## Problem
Given the head of a singly linked list, reverse the linked list and return the new head.

## Approach
- Use three pointers: `previous`, `current`, and `nextNode`.
- Initially, `previous` is `NULL` and `current` points to the head.
- Store the next node before changing the current node's link.
- Reverse the current node's `next` pointer.
- Move `previous` and `current` one step forward.
- Continue until all nodes are reversed.
- Return `previous` as the new head.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Local Test Cases

### Test Case 1
Input:
`1 -> 2 -> 3 -> NULL`

Output:
`3 -> 2 -> 1 -> NULL`

### Test Case 2
Input:
`5 -> NULL`

Output:
`5 -> NULL`

## Notes
The links between the nodes are reversed one by one. No additional linked list is created.