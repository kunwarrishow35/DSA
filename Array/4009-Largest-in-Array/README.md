# Largest in Array

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

Largest in Array
Solved

Difficulty: BasicAccuracy: 67.48%Submissions: 662K+Points: 1Average Time: 20m

Given an array arr[]. The task is to find the largest element and return it.
Examples:
Input: arr[] = [1, 8, 7, 56, 90]
Output: 90
Explanation: The largest element of the given array is 90.
Input: arr[] = [5, 5, 5, 5]
Output: 5
Explanation: The largest element of the given array is 5.
Input: arr[] = [10]
Output: 10
Explanation: There is only one element which is the largest.

Constraints:
1 ≤ arr.size() ≤ 106
0 ≤ arr[i] ≤ 106

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Company Tags

InfosysOracleWiproMorgan Stanley

Topic Tags

Arrays

Related Articles

Java Program For Program To Find Largest Element In An ArrayProgram To Find Largest Element In An Array

Discussions ( 1354 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Utkarsh Goel(Edited)09/09/2026, 11:42
3 days agoSep 09, 2026 11:38 (GMT +5:30)

Java Solution with explanation :

class Solution {
public static int largest(int[] arr) {
// code here
//Time complexity - O(n)
int ans = Integer.MIN_VALUE;
int n = arr.length;
for(int i=0;i<n;i++){
ans = Math.max(ans,arr[i]);
}
return ans;
}
}

Intialize a ans variable with minimum value so that any value greater than that should become the answer.
loop through the array and check each element as it is greater than ans value if it is than assign that to ans variable.
at last return the ans.

If you like it just follow me.

0

Reply

Anonymous_Geek3 days agoSep 08, 2026 19:10 (GMT +5:30)

this section should be treated as a discussion section, I dont know why everybody is bosting their solutions

1

Reply
(Show 1 Replies)

Abhishek Kumar Singh6 days agoSep 06, 2026 00:37 (GMT +5:30)

class Solution {
public:
int largest(vector<int> &arr) {
int n = arr.size();
int max_no = arr[0];
for (int i = 1; i < n; i++) {
if (arr[i] > max_no) {
max_no = arr[i];
}
}
return max_no;
}
};

0

Reply

Santhosh Kumar1 week agoSep 05, 2026 10:35 (GMT +5:30)

class Solution {
public static int largest(int[] arr) {
// code here
int large = arr[0];
for(int i=0;i<arr.length;i++){
if(arr[i]>large){
large =arr[i];
}
} return large;
}
}

0

Reply

Bhanu Shree1 week agoSep 02, 2026 13:29 (GMT +5:30)

arr = list(map(int, input().split()))
print(max(arr)) this is also correct code but not passing test cases.

0

Reply
(Show 1 Replies)

Shubhi Patel1 week agoAug 31, 2026 21:51 (GMT +5:30)

class Solution {
public static int largest(int[] arr) {
// code here
int max=arr[0];
for(int i=0;i<arr.length;i++){
if(arr[i]>max){
max=arr[i];
}
}
return max;
}
}

0

Reply

Tejas H B1 week agoAug 29, 2026 14:22 (GMT +5:30)

class Solution:
def largest(self, arr):
n=len(arr)
largest=arr[0]
for i in range(n):
if arr[i]>largest:
largest=arr[i]
return largest

0

Reply

Sankeerthana2 weeks agoAug 26, 2026 20:42 (GMT +5:30)

class Solution {
public static int largest(int[] arr) {
// code here
int max=arr[0];
for(int i=0;i<arr.length;i++){
if(arr[i]>max){
max=arr[i];
}
}
return max;
}
}

0

Reply

Sakshi Gupta2 weeks agoAug 26, 2026 16:45 (GMT +5:30)

brute force :-

class Solution {
public static int largest(int[] arr) {
int n = arr.length;
Arrays.sort(arr);       //time complexity o(n log n)
return arr[n-1];
}
}

optimal:-

class Solution {
public static int largest(int[] arr) {
int largest=arr[0];
for(int i=0;i<arr.length;i++){
if(largest < arr[i])
largest = arr[i];
}                                //time complexity(o(n))
return largest;
}
}

0

Reply

Dinal Patel2 weeks agoAug 25, 2026 00:33 (GMT +5:30)

Java solution

class Solution {

public static int largest(int[] arr) {

int max=arr[0];

for (int i=0;i<arr.length;i++){

if(arr[i]>max) max=arr[i];

}

return max;

}

}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:13

Time Taken0.85

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

class Solution:
def largest(self, arr):
# code here

arr.sort()
return arr[-1]

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:13

Time Taken0.85

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Largest in Array](https://www.geeksforgeeks.org/problems/largest-element-in-array4009/1)
