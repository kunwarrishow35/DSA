# Find element at a given Index

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

Find element at a given Index
Solved

Difficulty: BasicAccuracy: 70.56%Submissions: 101K+Points: 1Average Time: 20m

Given an array arr[] of integers and an index i(0-based index). Return the element present at the index i in the array.

Examples:

Input: i = 2 , arr[] = [10, 20, 30, 40, 50]
Output: 30
Explanation: The value of arr[2] is 30 .

Input: i = 4 , arr[] = [10, 20, 30, 40, 50, 60, 70]
Output: 50
Explanation: The value of the arr[4] is 50 .

Constraints:
1 ≤ arr.size() ≤ 106
0 ≤ i ≤ arr.size() - 1
1 ≤ arr[i] ≤ 109

Expected Complexities

Time Complexity: O(1)
Auxiliary Space: O(1)

Topic Tags

ArraysCPP

Discussions ( 199 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Sankeerthana2 weeks agoAug 30, 2026 22:45 (GMT +5:30)

class Solution {
public int findElementAtIndex(int i, int[] arr) {
// code here
return arr[i];
}
}

0

Reply

Shubhangi Shinde3 weeks agoAug 21, 2026 14:30 (GMT +5:30)

class Solution {
public int findElementAtIndex(int i, int[] arr) {
// code here
int res = 0;
for(int j = 0;j<arr.length;j++){
res  = arr[i];
}
return res;
}
}

0

Reply

Om Pathak4 weeks agoAug 19, 2026 09:41 (GMT +5:30)

class Solution {
public int findElementAtIndex(int i, int[] arr) {
// code here
return arr[i];
}
}

1

Reply
(Show 1 Replies)

SumanKalyan Routh4 weeks agoAug 17, 2026 20:09 (GMT +5:30)

guys just write : return arr.at(i);
and it will run perfectly . no need for loops .

1

Reply

Anurag Maurya1 month agoAug 02, 2026 16:58 (GMT +5:30)

class Solution {
public:
int findElementAtIndex(int i, vector<int> &arr) {
// code here
int n = arr.size();
for(int j = 0; j<n; j++){
if(j == i){
return arr[j];
}
}
return 0;
}
};

0

Reply

Ehmed Fayaz1 month agoAug 01, 2026 23:53 (GMT +5:30)

class Solution {
public int findElementAtIndex(int j, int[] arr) {
// code here
int req=0;
for(int i=0;i<arr.length;i++)
{
if(i==j)
{
req= arr[i];
}
}
return req;
}
}

0

Reply

Uday Sehrawat2 months agoJul 09, 2026 18:22 (GMT +5:30)

class Solution {
public int findElementAtIndex(int i, int[] arr) {
// code here
return arr[i];

}
}

1

Reply

VISHNU SREE VIDYA KOTTURU3 months agoJun 11, 2026 04:16 (GMT +5:30)

class Solution {
public int findElementAtIndex(int i, int[] arr) {
// code here
return arr[i];
}
}

0

Reply

Rajdeep Saha3 months agoMay 28, 2026 20:34 (GMT +5:30)

class Solution {
public:
int findElementAtIndex(int i, vector<int> &arr) {
return arr.at(i);
}
};

0

Reply

Hemant Mohane5 months agoApr 08, 2026 23:46 (GMT +5:30)

class Solution {
public:
int findElementAtIndex(int key, vector<int> &arr) {
return arr[key];
}
};

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1010 / 1010
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:33

Time Taken0.13

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

class Solution:
def findElementAtIndex(self, i, arr):
# code here
return arr[i]

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1010 / 1010
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:33

Time Taken0.13

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Find element at a given Index](https://www.geeksforgeeks.org/problems/c-array-print-an-element-set-25933/1)
