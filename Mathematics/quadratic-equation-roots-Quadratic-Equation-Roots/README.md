# Quadratic Equation Roots

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

Quadratic Equation Roots
Solved

Difficulty: BasicAccuracy: 12.78%Submissions: 270K+Points: 1

Given a quadratic equation ax2 + bx + c = 0, find its roots. If the equation has real roots, then return floor value of each root in decreasing order, If the roots are imaginary return -1, the driver code will print Imaginary.
Examples:
Input: a = 1, b = -2, c = 1
Output: [1, 1]
Explanation: Roots of equation x2-2x+1 are 1 and 1.
Input: a = 1, b = -7, c = 12
Output: [4, 3]
Explanation: Roots of equation x2 - 7x + 12 are 4 and 3.

Constraints:
-1000 ≤ a, b, c ≤ 1000

Expected Complexities

Time Complexity: O(1)
Auxiliary Space: O(1)

Topic Tags

Mathematics

Related Articles

Program To Find The Roots Of Quadratic Equation

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed110 / 110
Attempts : Correct / Total4 / 10Accuracy : 40%

Time Taken0.03

You get marks only for the first correct submission if you solve the problem without viewing the full solution.

Python3
C (gcc 5.4)
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

import math

class Solution:
def quadraticRoots(self, a, b, c):
d = b * b - 4 * a * c

if d < 0:
return [-1]

root1 = math.floor((-b + math.sqrt(d)) / (2 * a))
root2 = math.floor((-b - math.sqrt(d)) / (2 * a))

return sorted([root1, root2], reverse=True)

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed110 / 110
Attempts : Correct / Total4 / 10Accuracy : 40%

Time Taken0.03

You get marks only for the first correct submission if you solve the problem without viewing the full solution.

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Quadratic Equation Roots](https://www.geeksforgeeks.org/problems/quadratic-equation-roots/1)
