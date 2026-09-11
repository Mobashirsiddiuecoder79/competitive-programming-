# 208A - Dubstep
## Codeforces Problem
- **Problem Number:** 208A
- **Problem Name:** Dubstep
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/208/A
## Problem Description
A remix of a song contains the original words separated by the substring `WUB`.

The task is to restore the original song by replacing each sequence of `WUB` with a single space and removing unnecessary spaces from the beginning and end.

## Example
For:
WUBWEWUBAREWUBTHEWUBCHAMPIONSWUBMYWUBFRIEND

The restored song is:
WE ARE THE CHAMPIONS MY FRIEND

## Approach
The solution processes the string from left to right.

1. Check whether the current position contains the substring `WUB`.
2. If `WUB` is found, add a space only when the answer is not empty and does not already end with a space.
3. Move the index forward by 3 positions.
4. Otherwise, add the current character to the answer and move forward by one position.
5. Remove the trailing space, if one exists.
6. Print the restored string.

## Algorithm
1. Read the input string `s`.
2. Initialize an empty string `ans`.
3. Traverse `s` using an index `i`.
4. If `s.substr(i, 3)` is `WUB`:
   - Add a space if required.
   - Increase `i` by 3.
5. Otherwise:
   - Add `s[i]` to `ans`.
   - Increase `i` by 1.
6. Remove the trailing space from `ans` if necessary.
7. Print `ans`.

## Time Complexity
O(n), where `n` is the length of the input string.

Each character is processed while traversing the string.

## Space Complexity
O(n), where `n` is the length of the input string.

The result string stores the restored song.

## C++ Solution
The complete implementation is available in `solution.cpp`.

The solution uses string traversal, substring comparison, and `string::back()` to reconstruct the original song.

## Key C++ Concept Used
### String Processing
The solution uses `substr()` to check whether the current part of the string is `WUB`.

It also uses `back()` to check the last character of the result and avoid consecutive spaces.

## Solution
See `solution.cpp`.