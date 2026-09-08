```markdown id="p7k2xm"
# 2259A - Moo Language School

## Codeforces Problem
- **Problem Number:** 2259A
- **Problem Name:** Moo Language School
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/2259/A

## Problem

There are `n` students divided into groups of size `k`.

Each student is represented by either:
- `0` — the student does not know the required language.
- `1` — the student knows the required language.

For every group of `k` students, the school can build a class if the required condition is satisfied.

The task is to count the number of groups that can be built.

## Approach
1. Read the number of test cases `x`.
2. For each test case, read `n` and `k`.
3. Divide the `n` students into groups of size `k`.
4. Traverse the students one by one while keeping track of the position inside the current group using `ind`.
5. If a `0` appears before the end of a group, mark the group as already handled.
6. If the last student of a group is `1` and no `0` has appeared in that group, increase `cnt`.
7. Reset the group state after every `k` students.
8. Print the number of valid groups.

## Example

For:
n = 6
k = 3

Students:
0 0 1 1 1 1

The groups are:

0 0 1
1 1 1

Only the second group satisfies the condition.

Output:
1

## C++ Concepts Used
- `while` loop
- Character input
- Boolean variables
- Conditional statements
- Counter variables
- Group-wise processing

## Complexity
- **Time:** `O(n)` per test case
- **Space:** `O(1)`

## Solution
See `solution.cpp`.
```
