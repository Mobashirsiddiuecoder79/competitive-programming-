# 791A - Bear and Big Brother

## Codeforces Problem
- **Problem Number:** 791A
- **Problem Name:** Bear and Big Brother
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/791/A

## Problem
Limak and Bob are two brothers.
- Limak initially weighs `a` kilograms.
- Bob initially weighs `b` kilograms.
Every year:
- Limak's weight becomes three times its previous weight.
- Bob's weight becomes two times its previous weight.
The task is to find the number of years after which Limak becomes **strictly heavier** than Bob.

## Approach
Start with the initial weights `a` and `b`.
While `a <= b`:
1. Multiply Limak's weight by `3`.
2. Multiply Bob's weight by `2`.
3. Increase the year counter by `1`.
When `a > b`, the counter gives the answer.

## Example
For:
a = 4
b = 7
After 1 year:
Limak = 12
Bob = 14
After 2 years:
Limak = 36
Bob = 28
Therefore, the answer is:
2

## C++ Concepts Used
- Variables
- While loop
- Arithmetic operations
- Comparison operators
- Counting iterations

## Complexity
- **Time:** `O(years)`
- **Space:** `O(1)`

## Solution
See `solution.cpp`.