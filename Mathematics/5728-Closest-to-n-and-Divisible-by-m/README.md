# Closest to n and Divisible by m

## Problem

Courses

Tutorials

Practice

Jobs

Switch to Dark Mode

Menu

Back to Explore Page

Ask A DoubtMy Doubts

FREQUENTLY ASKED QUESTIONS

ProblemEditorialSubmissionsComments

Closest to n and Divisible by m
Solved

Difficulty: BasicAccuracy: 15.77%Submissions: 162K+Points: 1

Given two integers n and m (m != 0). The problem is to find the number closest to n and divisible by m. If there is more than one such number, then output the one having the maximum absolute value.

Examples :

Input: n = 13, m = 4
Output: 12
Explanation: 12 is the Closest Number to 13 which is divisible by 4.

Input: n = -15, m = 6
Output: -18
Explanation: Both -12 and -18 are closest to -15 and divisible by 6, but -18 has the maximum absolute value. So, output is -18.

Constraints:
-105 ≤ n, m ≤ 105

Expected Complexities

Time Complexity: O(1)
Auxiliary Space: O(1)

Company Tags

Microsoft

Topic Tags

Mathematics

Related Interview Experiences

Microsoft Interview Experience Set 125 Campus Idc

Related Articles

Find Number Closest N Divisible M

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total3 / 4Accuracy : 75%

Time Taken0.04

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

class Solution:
def closestNumber(self, n, m):
# code here
num = n//m
x = num * m
y = (num + 1) * m

if abs(n-x) < abs(n-y):
return x
elif abs(n-x) > abs(n-y):
return y
else:
return max(x, y, key =abs)

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total3 / 4Accuracy : 75%

Time Taken0.04

You get marks only for the first correct submission if you solve the problem without viewing the full solution.

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Closest to n and Divisible by m](https://www.geeksforgeeks.org/problems/closest-number5728/1)
