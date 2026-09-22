# Reverse a String

**Problem:** Reverse a String  
**Difficulty:** Easy  
**Platform:** LeetCode

## Problem Link

https://leetcode.com/problems/reverse-string/

## Approach

I used the two-pointer approach.

One pointer starts from the beginning of the string and another pointer starts from the end.

I swap the characters at these positions and then move both pointers toward the center.

This continues until the two pointers meet.

## Complexity

- Time Complexity: O(n)
- Space Complexity: O(1)

## Local Test Cases

### Test Case 1 - Typical Case

Input:
"hello"

Output:
"olleh"

### Test Case 2 - Edge Case

Input:
"a"

Output:
"a"

## Notes

- The string is reversed in-place.
- The two-pointer approach avoids using another string.