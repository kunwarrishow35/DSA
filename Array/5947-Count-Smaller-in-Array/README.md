# Count Smaller in Array

## Problem

CoursesSale

Tutorials

Practice

Jobs

Switch to Light Mode

Menu

Back to Explore Page

Ask A DoubtMy Doubts

FREQUENTLY ASKED QUESTIONS

ProblemEditorialSubmissionsComments

Count Smaller in Array
Solved

Difficulty: BasicAccuracy: 54.54%Submissions: 157K+Points: 1Average Time: 20m

Given an unsorted array arr[]. Find the count of elements less than or equal to the given element x.

Examples:

Input: x = 9, arr[] = [10, 1, 2, 8, 4, 5]
Output: 5
Explanation: The 5 elements are 1, 2, 8, 4 and 5.

Input: x = 2, arr[] = [1, 2, 2, 5, 7, 2, 9]
Output: 4
Explanation: The 4 elements are 1, 2, 2 and 2.

Constraints:
1 <= arr.size() <= 105
1 <= ai <= 105
0 <= x <= 105

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Topic Tags

Arrays

Related Articles

Count Smaller In An Array

Discussions ( 352 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Asish Amitansu Rout2 weeks agoSep 01, 2026 06:52 (GMT +5:30)

Traverse the array, if found elements less than given number increase the counter by one

0

Reply

Nandini Singarajupalle2 weeks agoAug 29, 2026 22:09 (GMT +5:30)

class Solution:
def countOfElements(self, x, arr):
count=0
for i in arr:
if x>=i:
count+=1
return count

0

Reply

Sachin Kumar3 weeks agoAug 23, 2026 22:12 (GMT +5:30)

class Solution {
public:
int countOfElements(int x, vector<int> &arr) {
// code here
int count = 0;

for (int i=0; i<arr.size(); i++) {
if (arr[i] <= x) {
count++;
}
}
return count;
}
};

0

Reply

DAYAPULI SRINIVASULA RAO1 month agoAug 10, 2026 12:01 (GMT +5:30)

class Solution:
def countOfElements(self, x, arr):
# code here
count = 0
for  i in arr:
if x>=i:
count=count+1
return count

2

Reply

Amodinee Nagrale3 months agoJun 04, 2026 00:44 (GMT +5:30)

class Solution {
public:
int countOfElements(int x, vector<int> &arr) {
// code here
int count=0;
for(int i=0;i<arr.size();i++){
if(arr[i]<=x){
count++;
}
}
return count;
}
};

0

Reply

Farhan ahmad7 months agoFeb 01, 2026 22:59 (GMT +5:30)

class Solution {
public int countOfElements(int x, List<Integer> arr) {
int count = 0;
for(int ele : arr){
if(ele <= x){
count++;
}
}
return count;
}
}

0

Reply

Arvinth Sn8 months agoJan 15, 2026 21:09 (GMT +5:30)

lass Solution {
public int countOfElements(int x, List<Integer> arr) {
// Code here
int count = 0;

for(int i : arr){
if(i <= x){
count++;
}
}
return count;
}
}

0

Reply

Jatin Kumar8 months agoJan 12, 2026 17:52 (GMT +5:30)

class Solution {
public int countOfElements(int x, List<Integer> arr) {
// Code here
int count=0;
for(int i=0;i<arr.size();i++)
{
if(arr.get(i)<=x)
{
count++;
}
}
return count;
}
}

0

Reply

Amit Maurya8 months agoJan 07, 2026 19:29 (GMT +5:30)

class Solution {
public int countOfElements(int x, List<Integer> arr) {
int count=0;
for(int i=0;i<arr.size();i++)
{
if(arr.get(i)<=x)
{
count++;
}
}
return count;

}
}

1

Reply

Soumya Tiwari8 months agoJan 04, 2026 10:21 (GMT +5:30)

class Solution {
public int countOfElements(int x, List<Integer> arr) {
// Code here
int count = 0;
for(int i =0;i<arr.size();i++){
if(arr.get(i)<=x){
count=count+1;
}
}

return count;
}
}

0

Reply
(Show 1 Replies)

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:22

Time Taken0.04

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

class Solution:
def countOfElements(self, x, arr):

count = 0
for i in arr:
if i<=x:
count = count+1
return count

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:22

Time Taken0.04

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Count Smaller in Array](https://www.geeksforgeeks.org/problems/count-of-smaller-elements5947/1)
