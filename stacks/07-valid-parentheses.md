# Valid Parentheses

## Problem
Given a string containing parentheses `()`, square brackets `[]`, and curly brackets `{}`, determine whether the brackets are valid.

A valid string must have:
- Every opening bracket closed by the correct closing bracket.
- Brackets closed in the correct order.

## Approach
- Use a stack to store opening brackets.
- When an opening bracket is found, push it onto the stack.
- When a closing bracket is found, compare it with the top of the stack.
- If they do not match, the string is invalid.
- At the end, the stack must be empty for the string to be valid.

## Time Complexity
O(n)

## Space Complexity
O(n)

## Local Test Cases

### Test Case 1
Input:
`"()[]{}"`

Output:
`Valid`

### Test Case 2
Input:
`"(]"`

Output:
`Invalid`

## Notes
A stack follows the Last In, First Out (LIFO) principle, which makes it suitable for checking matching brackets.