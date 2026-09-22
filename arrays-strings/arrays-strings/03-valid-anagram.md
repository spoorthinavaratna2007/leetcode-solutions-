# Valid Anagram

**Problem:** Valid Anagram  
**Difficulty:** Easy  
**Platform:** LeetCode

## Problem Link

https://leetcode.com/problems/valid-anagram/

## Approach

I used a character frequency counting approach.

I created a count array of size 256 and initialized all values to zero.

For every character in the first string, I increased its count by 1. For every character in the second string, I decreased its count by 1.

If all character counts become zero, both strings contain the same characters with the same frequencies, so they are anagrams.

## Complexity

- Time Complexity: O(n)
- Space Complexity: O(1)

## Local Test Cases

### Test Case 1 - Typical Case

Input:
str1 = "anagram"
str2 = "nagaram"

Output:
Valid Anagram

### Test Case 2 - Edge Case

Input:
str1 = "rat"
str2 = "car"

Output:
Not an Anagram

## Notes

- The strings must have the same length.
- Character frequency is used to determine whether the strings are anagrams.
- The solution uses a fixed-size count array.