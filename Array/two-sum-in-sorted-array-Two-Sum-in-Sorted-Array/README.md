# Two Sum in Sorted Array

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

Two Sum in Sorted Array
Solved

Difficulty: EasyAccuracy: 49.95%Submissions: 15K+Points: 2

You are given a 1-based indexed integer array arr[] that is sorted in non-decreasing order, along with an integer target. Your task is to find two elements in the array such that their sum is equal to target. If such a pair exists, return the indices of the two elements in increasing order. If no such pair exists, return [-1, -1].
Note: If your answer is correct then the driver code will print "true" otherwise "false".

Examples:

Input: arr[] = [2, 7, 11, 15], target = 9
Output: [1, 2]
Explanation: Since arr[0] + arr[1] = 2 + 7 = 9 equals the target, return their 1-based indices : [1, 2]

Input: arr[] = [1, 3, 4, 6, 8, 11], target = 10
Output: [3, 4]
Explanation: Since arr[2] + arr[3] = 4 + 6 = 10 equals the target, return their 1-based indices : [3, 4]

Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ arr[i], target ≤ 106

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Topic Tags

two-pointer-algorithmArrays

Related Articles

Pair With Given Sum In Sorted Array Two Sum Ii

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1120 / 1120
Attempts : Correct / Total2 / 5Accuracy : 40%

Time Taken0.19

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

class Solution:
def twoSum(self, arr, target):
i = 0
j = len(arr) - 1

while i < j:
total = arr[i] + arr[j]

if total == target:
return [i + 1, j + 1]

elif total < target:
i += 1

else:
j -= 1

return [-1, -1]

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1120 / 1120
Attempts : Correct / Total2 / 5Accuracy : 40%

Time Taken0.19

You get marks only for the first correct submission if you solve the problem without viewing the full solution.

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Two Sum in Sorted Array](https://www.geeksforgeeks.org/problems/two-sum-in-sorted-array/1)
