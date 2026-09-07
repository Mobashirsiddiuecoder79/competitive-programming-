```markdown
# 580A - Kefa and First Steps

## Codeforces Problem
- **Problem Number:** 580A
- **Problem Name:** Kefa and First Steps
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/580/A

## Problem

Kefa has a sequence of `n` days, where each day has a number representing the number of friends he made that day.

The task is to find the length of the longest contiguous non-decreasing subsegment of the sequence.

A subsegment is non-decreasing if every element is greater than or equal to the previous element.

## Approach
1. Read the number of days `n`.
2. Initialize:
   - `cnt` to store the current non-decreasing subsegment length.
   - `mx` to store the maximum length found.
   - `pre` to store the previous value.
3. Read each value one by one.
4. If the current value is greater than or equal to `pre`, increase `cnt`.
5. Otherwise, reset `cnt` to `1`.
6. Update `pre` with the current value.
7. Update `mx` with the maximum of `mx` and `cnt`.
8. Print `mx`.

## Example

For:
n = 5

Sequence:
1 2 2 3 1

The longest non-decreasing subsegment is:

2 2 3

Length:
3

Output:
3

## C++ Concepts Used
- `while` loop
- Conditional statements
- `max()` function
- Comparing consecutive elements
- Variables

## Complexity
- **Time:** `O(n)`
- **Space:** `O(1)`

## Solution
See `solution.cpp`.
```
