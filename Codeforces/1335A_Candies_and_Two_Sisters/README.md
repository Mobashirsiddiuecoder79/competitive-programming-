# 1335A - Candies and Two Sisters
## Codeforces Problem
- **Problem Number:** 1335A
- **Problem Name:** Candies and Two Sisters
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/1335/A
## Problem Description
Alice and Bob have `n` candies and want to divide them between themselves.

Alice must receive **strictly more candies** than Bob, and both must receive at least one candy.

The task is to determine the number of possible ways to divide the candies satisfying these conditions.
## Example
For:
n = 7

The possible valid divisions are:
4 3
5 2
6 1

Therefore, the answer is:
3
## Approach
The number of valid divisions depends on whether `n` is odd or even.

1. If `n` is odd, the number of valid ways is `n / 2`.
2. If `n` is even, an equal division is possible, but it is not valid because Alice must receive strictly more candies than Bob.
3. Therefore, for an even `n`, the answer is `n / 2 - 1`.
4. The solution checks whether `n` is odd using the bitwise AND operator `(n & 1)`.
## Algorithm
1. Read the number of test cases.
2. For each test case, read `x`.
3. Check whether `x` is odd using `(x & 1)`.
4. If `x` is odd, print `x / 2`.
5. Otherwise, print `x / 2 - 1`.
6. Repeat for all test cases.
## Time Complexity
O(t), where `t` is the number of test cases.

Each test case is processed in constant time.
## Space Complexity
O(1).

Only a constant amount of extra space is used.
## C++ Solution
The complete implementation is available in `solution.cpp`.

The solution uses integer division and the bitwise AND operator to calculate the number of valid divisions.
## Key C++ Concept Used
### Bitwise AND Operator
The expression `(x & 1)` is used to check whether a number is odd or even.

For example:

```text
7 & 1 = 1
8 & 1 = 0

If (x & 1) is 1, the number is odd. Otherwise, it is even.

Solution

See solution.cpp.