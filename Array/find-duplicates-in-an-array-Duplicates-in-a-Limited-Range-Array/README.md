# Duplicates in a Limited Range Array

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

Duplicates in a Limited Range Array
Solved

Difficulty: EasyAccuracy: 18.95%Submissions: 935K+Points: 2Average Time: 20m

Given an array arr[] of size n, containing elements from the range 1 to n, and each element appears at most twice, return an array of all the integers that appears twice.
Note: You can return the elements in any order but the driver code will print them in sorted order.
Examples:
Input: arr[] = [2, 3, 1, 2, 3]
Output: [2, 3]
Explanation: 2 and 3 occur more than once in the given array.
Input: arr[] = [3, 1, 2]
Output: []
Explanation: There is no repeating element in the array, so the output is empty.

Constraints:
1 ≤ arr.size() ≤ 106
arr[i] ≤ arr.size()

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Company Tags

PaytmZohoFlipkartAmazonD-E-ShawQualcomm

Topic Tags

Arrays

Related Interview Experiences

One97 Interview Experience Set 3 Backendnode Js Developer

Related Articles

Duplicates Elements In An Array

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total2 / 2Accuracy : 100%

Time Taken0.11

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
def findDuplicates(self, arr):
# code here
res = []
freq = {}
for i in arr:
freq[i] = freq.get(i, 0)+1

if freq[i] > 1:
res.append(i)
return res

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total2 / 2Accuracy : 100%

Time Taken0.11

You get marks only for the first correct submission if you solve the problem without viewing the full solution.

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Duplicates in a Limited Range Array](https://www.geeksforgeeks.org/problems/find-duplicates-in-an-array/1)
