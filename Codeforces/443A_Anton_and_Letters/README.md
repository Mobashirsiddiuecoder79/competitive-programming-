# 443A - Anton and Letters
## Codeforces Problem
- **Problem Number:** 443A
- **Problem Name:** Anton and Letters
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/443/A
## Problem Description
Anton received a string containing lowercase English letters, commas, spaces, and curly braces.
The task is to determine the number of **distinct lowercase English letters** present in the given set.
Each letter should be counted only once, even if it appears multiple times.
## Example
For the input:
{a, b, c, a}
The distinct letters are:
a, b, c
Therefore, the answer is:
3
## Approach
The solution uses an `unordered_set<char>` to store all distinct lowercase English letters.
The input is read character by character:
1. Read the first character.
2. Continue reading characters until the closing curly brace `}` is encountered.
3. If the current character is a lowercase English letter, insert it into the `unordered_set`.
4. Since a set stores only unique elements, duplicate letters are automatically ignored.
5. After processing the entire input, the size of the set gives the number of distinct letters.
## Algorithm
1. Create an empty `unordered_set<char>`.
2. Read characters from the input.
3. Continue until `}` is encountered.
4. For every character:
   - Check whether it is a lowercase English letter.
   - If yes, insert it into the set.
5. Print the size of the set.
## Time Complexity
O(n) average time, where n is the number of characters processed.
Each character is processed once, and insertion into an `unordered_set` takes O(1) average time.
## Space Complexity
O(k) average space, where k is the number of distinct lowercase letters.
Since there are only 26 lowercase English letters:
O(26) = O(1)
## C++ Solution
The complete implementation is available in `solution.cpp`.
The solution uses `unordered_set<char>` to efficiently store and count distinct lowercase letters.
## Key C++ Concept Used
### unordered_set
`unordered_set` is used because it automatically maintains unique elements.
For example:
unordered_set<char> st;
st.insert('a');
st.insert('b');
st.insert('a');
The set contains only:
a, b
Therefore:
st.size()
returns the number of distinct characters.
## Solution
See `solution.cpp`.