# Valid Parentheses

## Problem Link

https://leetcode.com/problems/valid-parentheses/

## Problem

Given a string containing parentheses `()`, square brackets `[]`, and curly brackets `{}`, determine whether the brackets are valid.

A valid string must have:
- Every opening bracket closed by the correct closing bracket.
- Brackets closed in the correct order.

## Approach

I use a stack to store opening brackets.

When an opening bracket is found, I push it onto the stack.

When a closing bracket is found, I compare it with the top bracket in the stack.

If they do not match, the string is invalid.

At the end, the stack must be empty for the string to be valid.

## Complexity

- Time Complexity: O(n)
- Space Complexity: O(n)

## Local Test Cases

### Test Case 1 - Typical Case

Input:

"()[]{}"

Output:

Valid

### Test Case 2 - Edge Case

Input:

"(]"

Output:

Invalid

## Notes

- The stack follows the Last In, First Out (LIFO) principle.
- I tested both a valid and an invalid bracket sequence.