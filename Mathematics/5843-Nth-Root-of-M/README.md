# Nth Root of M

## Problem

Courses

Tutorials

Practice

Jobs

Switch to Light Mode

Menu

Back to Explore Page

Ask A DoubtMy Doubts

FREQUENTLY ASKED QUESTIONS

ProblemEditorialSubmissionsComments

Nth Root of M
Solved

Difficulty: MediumAccuracy: 25.06%Submissions: 304K+Points: 4Average Time: 15m

You are given 2 numbers n and m, the task is to find n√m (nth root of m). If the root is not integer then return -1.

Examples :

Input: n = 3, m = 8
Output: 2
Explanation: 23 = 8

Input: n = 3, m = 9
Output: -1
Explanation: 3rd root of 9 is not integer.

Input: n = 4, m = 16
Output: 2
Explanation: 24 = 16

Constraints:
1 ≤ n ≤ 9
0 ≤ m ≤ 20

Expected Complexities

Time Complexity: O(n log m)
Auxiliary Space: O(1)

Company Tags

DirectiAccenture

Topic Tags

MathematicsBinary Search

Related Interview Experiences

Directi Interview Set 3

Related Articles

N Th Root Number

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed100 / 100
Attempts : Correct / Total2 / 9Accuracy : 22%

Time Taken0.03

You get marks only for the first correct submission if you solve the problem without viewing the full solution.

Python3
C++ (17)
Java (21)
Python3
C#
Javascript (Node v22)

Editor Settings
Font Size
Theme

Choose Your Preferred font For The Code Editor
12px13px14px15px16px18px20px22px

1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30

class Solution:

def power(self, x, y):
result = 1
for i in range(y):
result *= x
return result

def nthRoot(self, n, m):
# code here
left = 0
right = m

while left<=right:
mid = left + (right - left) // 2
power1 = self.power(mid, n)
if power1 == m:
return mid
elif power1<m:
left = mid+1
else:
right = mid-1

return -1

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed100 / 100
Attempts : Correct / Total2 / 9Accuracy : 22%

Time Taken0.03

You get marks only for the first correct submission if you solve the problem without viewing the full solution.

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Nth Root of M](https://www.geeksforgeeks.org/problems/find-nth-root-of-m5843/1)
