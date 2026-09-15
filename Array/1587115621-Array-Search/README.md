# Array Search

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

Array Search
Solved

Difficulty: BasicAccuracy: 40.95%Submissions: 764K+Points: 1Average Time: 15m

Given an array, arr[] of n integers, and an integer element x, find whether element x is present in the array. Return the index of the first occurrence of x in the array, or -1 if it doesn't exist.
Examples:
Input: arr[] = [1, 2, 3, 4], x = 3
Output: 2
Explanation: For array [1, 2, 3, 4], the element to be searched is 3. Since 3 is present at index 2, the output is 2.
Input: arr[] = [10, 8, 30, 4, 5], x = 5
Output: 4
Explanation: For array [10, 8, 30, 4, 5], the element to be searched is 5 and it is at index 4. So, the output is 4.

Input: arr[] = [10, 8, 30], x = 6
Output: -1
Explanation: The element to be searched is 6 and it is not present, so we return -1.

Constraints:
1 ≤ arr.size() ≤ 106
0 ≤ arr[i] ≤ 106
0 ≤ x ≤ 105

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Topic Tags

ArraysSearching

Related Articles

Cpp Program For Linear SearchJava Program For Linear SearchLinear Search

Discussions ( 944 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

harshitkauspph54 days agoSep 11, 2026 11:20 (GMT +5:30)

class Solution:
def search(self, arr, x):
# code here
for i, val in enumerate(arr):
if val == x:
return i

return -1

0

Reply

Anonymous_Geek4 days agoSep 11, 2026 03:05 (GMT +5:30)

import java.lang.reflect.Array;
class Solution {
public int search(int arr[], int x) {
// code here

for(int i=0; i<arr.length; i++){
if(arr[i] == x){
return i;
}
}

return -1;

}
}

0

Reply

Anonymous_Geek3 weeks agoAug 24, 2026 15:51 (GMT +5:30)

class Solution {
public:
int search(vector<int>& arr, int x) {
// code here
for (int i=0;i<arr.size();i++){
if (arr[i] == x)
return i;
}
return -1;
}
};

0

Reply

K Venkata ramanna3 weeks agoAug 24, 2026 15:48 (GMT +5:30)

class Solution {
public:
int search(vector<int>& arr, int x) {
// code here
int n = arr.size();
for( int i=0;i<n; i++){
if(arr[i]==x) return i;
}
return -1;
}
};

0

Reply

Anonymous_Geek1 month agoJul 30, 2026 17:55 (GMT +5:30)

class Solution {
public:
int search(vector<int>& arr, int x) {

int n=arr.size();
int index=-1;
for(int i=0;i<n;i++){
if(arr[i]==x){index=i;break;}
}
return index;
}
};

0

Reply

Anonymous_Geek1 month agoJul 30, 2026 17:52 (GMT +5:30)

class Solution {
public:
int search(vector<int>& arr, int x) {

int n=arr.size();
for(int i=0;i<n;i++){
if(arr[i]==x){return i;}
}
return -1;

}
};

1

Reply

Anonymous_Geek1 month agoJul 29, 2026 20:57 (GMT +5:30)

import java.util.*;
class Solution{
public static int search(int arr[], int x) {
int n= arr.length;
for(int i=0;i<n;i++){
if(arr[i]==x)
return i;
}
return -1;

}
public static void main (String[] args){
Scanner scn= new Scanner(System.in);
int n=scn.nextInt();
int arr[]=new int[n];
int x=scn.nextInt();
System.out.println(search(arr,x));
}
}

1

Reply

TUSHAR SINGH1 month agoJul 28, 2026 01:46 (GMT +5:30)

class Solution {

public:

int search(vector<int>& arr, int x) {

// code here

for (int i = 0 ; i<arr.size() ; i++) {

if (arr[i] == x) {

return i;

}

}

return - 1;

}

};

0

Reply

Sanskar Shrivastava1 month agoJul 24, 2026 12:14 (GMT +5:30)

c++ soln
class Solution {
public:
int search(vector<int>& arr, int x) {
// code here
for(int i=0;i<arr.size();i++){
if(arr[i] == x){
return i;
}
}
return -1;
}
};

0

Reply

skelet2he91 month agoJul 23, 2026 03:20 (GMT +5:30)

class Solution {
public:
int search(vector<int>& arr, int x) {
// code here
for(int i=0;i<arr.size();i++){
if(arr[i] == x){
return i;
}
else if (i==(arr.size()-1) && arr[i] != x){
return -1;
}
}
}
};

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:25

Time Taken0.4

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

class Solution:
def search(self, arr, x):
# code here
for i in range(len(arr)):
if arr[i]==x:
return i
break

return -1

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:25

Time Taken0.4

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Array Search](https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1)
