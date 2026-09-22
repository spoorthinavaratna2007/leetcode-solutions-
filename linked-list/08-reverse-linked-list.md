# Reverse Linked List

## Problem Link

https://leetcode.com/problems/reverse-linked-list/

## Problem

Given the head of a singly linked list, reverse the linked list and return the new head.

## Approach

I use three pointers: `previous`, `current`, and `nextNode`.

Initially, `previous` is `NULL` and `current` points to the head.

For every node:
- Store the next node in `nextNode`.
- Reverse the current node's `next` pointer.
- Move `previous` to the current node.
- Move `current` to the next node.

I continue until `current` becomes `NULL`.

Finally, `previous` becomes the new head of the reversed linked list.

## Complexity

- Time Complexity: O(n)
- Space Complexity: O(1)

## Local Test Cases

### Test Case 1 - Typical Case

Input:

1 -> 2 -> 3 -> NULL

Output:

3 -> 2 -> 1 -> NULL

### Test Case 2 - Edge Case

Input:

5 -> NULL

Output:

5 -> NULL

## Notes

- The links between the nodes are reversed one by one.
- I tested both a multi-node list and a single-node list.