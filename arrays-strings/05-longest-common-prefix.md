# Longest Common Prefix

## Problem
Given an array of strings, find the longest common prefix shared by all the strings.

## Approach
- Start with the first string as the reference.
- Compare each character with the corresponding character in the other strings.
- If the characters are different or any string ends, stop.
- Store the matching characters as the common prefix.

## Time Complexity
O(n × m)

where n is the number of strings and m is the length of the shortest string.

## Space Complexity
O(m)

## Local Test Cases

### Test Case 1
Input:
`["flower","flow","flight"]`

Output:
`"fl"`

### Test Case 2
Input:
`["dog","racecar","car"]`

Output:
`""`

## Notes
The common prefix must be present at the beginning of every string.