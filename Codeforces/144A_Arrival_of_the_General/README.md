# 144A - Arrival of the General

## Problem

Given `n` soldiers standing in a line, find the minimum number of swaps needed to move:

- The tallest soldier to the **first position**
- The shortest soldier to the **last position**

## Approach

- Find the index of the **first maximum** element using `max_element()`.
- Find the index of the **last minimum** element using reverse iterators and `min_element()`.
- Calculate the number of swaps based on the positions of the tallest and shortest soldiers.

If the tallest soldier is already before the shortest soldier, moving them does not interfere.

Otherwise, moving the tallest soldier first shifts the shortest soldier one position, so we subtract one from the total swaps.

## C++ Concepts Used

- `vector`
- `max_element()`
- `min_element()`
- Reverse iterators
- Index calculation using iterators

## Complexity

- **Time:** `O(n)`
- **Space:** `O(n)`

## Solution

See [`solution.cpp`](./solution.cpp).