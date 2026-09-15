# Array Traversal

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

Array Traversal
Solved

Difficulty: BasicAccuracy: 69.26%Submissions: 169K+Points: 1

Given an array arr[] that contains integers. You need to print the elements of the array in a single line with a space between them.
Note: Don't add a new line at the end.
Examples:
Input: arr[] = [54, 43, 2, 1, 5]
Output: 54 43 2 1 5
Explanation: Just traverse and print the numbers.
Input: arr[] = [324, 5, 2, 2]
Output: 324 5 2 2
Explanation: Just traverse and print the numbers.

Constraints:
1 ≤ arr.size(), arr[i] ≤ 105

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Topic Tags

Arrays

Discussions ( 37 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Pandey Aayush Rajkumar1 week agoSep 08, 2026 18:58 (GMT +5:30)

class Solution {
public static void arrayTraversal(int[] arr) {
// Code here
// for(int i=0;i<arr.length;i++)
// {
//     System.out.print(arr[i]+" ");
// }

for(int num : arr)
{
System.out.print(num + " ");
}
}
}

0

Reply

Pandey Aayush Rajkumar1 week agoSep 08, 2026 18:57 (GMT +5:30)

here two methods to Traversdal Array

0

Reply

Aditya Maurya1 week agoSep 07, 2026 22:44 (GMT +5:30)

class Solution {
public static void arrayTraversal(int[] arr) {
// Code here
int i;
for (i = 0 ; i<arr.length ; i++){
System.out.print(arr[i] + " " );

}

}
}

0

Reply

Anurag Maurya1 month agoAug 02, 2026 15:42 (GMT +5:30)

void arrayTraversal(int numbers[], int size) {
// Code here
for(int i = 0; i<size;i++){
cout<<numbers[i]<<" ";
}
}

0

Reply

Lily1 month agoAug 01, 2026 14:16 (GMT +5:30)

class Solution {

public static void arrayTraversal(int[] arr) {

// Code here

int idx = 0;

while(arr.length != 0){

System.out.print(arr[idx] + " ");

idx++;

if(idx == arr.length) return;

}

}

}

0

Reply

Anonymous_Geek2 months agoJun 20, 2026 10:18 (GMT +5:30)

class Solution {
public static void arrayTraversal(int[] arr) {
// Code here
for(int  i = 0;i<arr.length;i++){
System.out.print(arr[i]+" ");
}
}
}

0

Reply

Manav Gupta3 months agoJun 04, 2026 01:14 (GMT +5:30)

void arrayTraversal(int numbers[], int size) {
// Code here
for(int i = 0 ; i < size ; i++){
cout << numbers[i] << " ";
}
}

0

Reply

Rajdeep Saha3 months agoMay 28, 2026 20:02 (GMT +5:30)

void arrayTraversal(int numbers[], int size) {
for(int i=0;i<size;i++)
cout<<numbers[i]<<" ";

}

0

Reply

Prateek Yadav4 months agoApr 30, 2026 08:04 (GMT +5:30)

class Solution {
public static void arrayTraversal(int[] arr) {
// Code here
for(int i = 0; i<arr.length; i++){
System.out.print(arr[i] +"");
}
}
}

0

Reply

JAI SHREE R4 months agoApr 28, 2026 12:38 (GMT +5:30)

void arrayTraversal(int numbers[], int size) {
// Code here
for(int i=0;i<size;i++){
cout<<numbers[i]<<" ";

}
}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed5 / 5
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:21

Time Taken0.02

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

class Solution:
def arrayTraversal(self, arr, size):
for i in arr:
print(i, end = " ")

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed5 / 5
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:21

Time Taken0.02

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Array Traversal](https://www.geeksforgeeks.org/problems/array-traversal/1)
