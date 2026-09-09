#2248A-YouDelete,IDelete
##CodeforcesProblem
-**ProblemNumber:**2248A
-**ProblemName:**YouDelete,IDelete
-**Platform:**Codeforces
-**ProblemLink:**https://codeforces.com/problemset/problem/2248/A

##Problem
AliceandBobaregivenabinarystring`s`.
Theyperformtwooperations:
-Alicedeletesoneoccurrenceof`0`.
-Bobdeletesoneoccurrenceof`1`.
Theoperationsareperformedoneafteranother,andthetaskistodeterminetheresultingstringafterbothdeletions.

##Approach
1.Readthenumberoftestcases`n`.
2.Foreachtestcase,readthebinarystring`s`.
3.Findthefirstoccurrenceof`0`andremoveit.
4.Findthefirstoccurrenceof`1`fromtheremainingstringandremoveit.
5.Printtheresultingstring.
6.Theprocessisimplementedusing`string::erase()`.

##Example
For:
s=101
Firstremove`0`:
```text
11

Thenremove1:

1

Output:
1

##C++ConceptsUsed
-Strings
-whileloop
-string::erase()
-Charactercomparison
-Booleanvariables
-Conditionalstatements

##Complexity
-Time:O(n²)pertestcaseduetorepeatedstring::erase()
-Space:O(n)

##Solution
Seesolution.cpp.