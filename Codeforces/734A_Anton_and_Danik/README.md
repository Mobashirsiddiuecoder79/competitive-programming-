734A - Anton and Danik

Problem

Anton and Danik play a game consisting of n games.

* If Anton wins a game, the string contains A.
* If Danik wins a game, the string contains D.

Determine who wins the most games.

If both win the same number of games, print Friendship.

Approach

1. Read n and the string s.
2. Count the number of A characters.
3. The number of D characters is n - countA.
4. Compare the two counts:
    * If countA > countD, print Anton.
    * If countA < countD, print Danik.
    * Otherwise, print Friendship.

Example

For:

n = 6
s = AAAAAA

Anton wins all 6 games.

Output:

Anton

C++ Concepts Used

* Strings
* Loops
* Character comparison
* Counting

Complexity

* Time: O(n)
* Space: O(n) for the input string

Solution

See solution.cpp.