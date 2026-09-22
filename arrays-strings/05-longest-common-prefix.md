# Longest Common Prefix

## Problem Link

https://leetcode.com/problems/longest-common-prefix/

## Problem

Given an array of strings, find the longest common prefix shared by all the strings.

## Approach

I use the first string as the reference string.

I compare each character of the first string with the corresponding character of every other string.

If the characters are different, or if any string ends, I stop and return the prefix found so far.

## Complexity

- Time Complexity: O(n × m)
- Space Complexity: O(m)

where `n` is the number of strings and `m` is the length of the shortest string.

## Local Test Cases

### Test Case 1 - Typical Case

Input:

Array = ["flower", "flow", "flight"]

Output:

"fl"

### Test Case 2 - Edge Case

Input:

Array = ["dog", "racecar", "car"]

Output:

""

## Notes

- The prefix must occur at the beginning of every string.
- I tested both a case with a common prefix and a case with no common prefix.