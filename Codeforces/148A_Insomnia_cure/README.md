````markdown
# 148A - Insomnia Cure

## Codeforces Problem
- **Problem Number:** 148A
- **Problem Name:** Insomnia cure
- **Platform:** Codeforces
- **Problem Link:** https://codeforces.com/problemset/problem/148/A

## Problem

A princess counts `d` imaginary dragons.

Every:
- `k`-th dragon is punched.
- `l`-th dragon gets its tail shut.
- `m`-th dragon gets its paws trampled.
- `n`-th dragon is threatened.

A dragon is considered damaged if it is affected by at least one of these actions.

The task is to find the total number of damaged dragons.

## Approach
1. Read `k`, `l`, `m`, `n`, and `d`.
2. Iterate through all dragons from `1` to `d`.
3. For each dragon, check whether its number is divisible by `k`, `l`, `m`, or `n`.
4. If any condition is true, increase the damaged dragon count.
5. Print the final count.

## Example

For:

```text
k = 1
l = 2
m = 3
n = 4
d = 12
````

Every dragon is damaged because every number is divisible by `1`.

Output:

```text
12
```

## C++ Concepts Used

* `for` loop
* Modulo operator `%`
* Logical OR operator `||`
* Conditional statements
* Counting

## Complexity

* **Time:** `O(d)`
* **Space:** `O(1)`

## Solution

See `solution.cpp`.

```
```
