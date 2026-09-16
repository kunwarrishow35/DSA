# Sum Except First and Last

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

Sum Except First and Last
Solved

Difficulty: BasicAccuracy: 34.83%Submissions: 130K+Points: 1

You are given an array arr of numbers. Return the sum of all the elements except the first and last elements.

Examples:

Input: arr[] = [5, 24, 39, 60, 15, 28, 27, 40, 50, 90]
Output: 283
Explanation: The sum of all the elements except the first and last element is 283.

Input: arr[] = [5, 10, 1, 11]
Output: 11
Explanation: The sum of all the elements except the first and last element is 11.

Input: arr[] = [5, 10]
Output: 0
Explanation: The sum of all the elements except the first and last element is 0.

Constraints:
2<=arr.size()<=105
2<=arr[i]<=105

Expected Complexities

Time Complexity: O(n log n)
Auxiliary Space: O(1)

Company Tags

AmazonMicrosoft

Topic Tags

Arrays

Related Articles

Sum Except First And Last

Discussions ( 433 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Shoaib Ahmed2 weeks agoAug 30, 2026 20:05 (GMT +5:30)

class Solution {
public:
int sumExceptFirstLast(vector<int>& arr) {
int sum = 0;
int size = arr.size();

if(size == 1)
return -arr[0];

for(int i = 1; i < size - 1; i++)
{
sum += arr[i];
}

return sum;
}
};

Easy Implemetation

0

Reply

DAYAPULI SRINIVASULA RAO1 month agoAug 10, 2026 10:58 (GMT +5:30)

class Solution:
def sumExceptFirstLast(self,arr):
# code here
arr.pop()
arr.pop(0)
return sum(arr)

0

Reply

Sri Arun Kumar Voorella5 months agoMar 23, 2026 19:36 (GMT +5:30)

class Solution {
int sumExceptFirstLast(int[] arr) {
int sum=0;
for(int i=1;i<arr.length-1;i++){
sum=sum+arr[i];
}
return sum;
}
}

1

Reply

Vijaykumar V6 months agoMar 20, 2026 13:57 (GMT +5:30)

class Solution {
sumExceptFirstLast(arr) {
// code here
let count = 0;
if(arr.length<=2){
count = 0;
}

for(let i=1; i<arr.length-1; i++){
count=arr[i]+count;
}

return count;
}
}

0

Reply

Ivan Romero6 months agoMar 20, 2026 01:57 (GMT +5:30)

int sumExceptFirstLast(int[] arr) {
if (arr == null || arr.length < 3)
return 0;
int sum = 0;
for (int num : arr)
sum += num;
return sum - arr[0] - arr[arr.length - 1];
}

0

Reply

Tina Florip6 months agoMar 17, 2026 21:10 (GMT +5:30)

// your code here
int sum=0;
for (int i=1;i<arr.length-1;i++){
sum=sum+arr[i];
}
return sum;

0

Reply

Kaushik Kumar6 months agoFeb 26, 2026 09:55 (GMT +5:30)

class Solution {
int sumExceptFirstLast(int[] arr){
int sum=0;
for (int i=1;i<arr.length-1;i++){
sum=sum+arr[i];
}
return sum;
}
}

0

Reply

247Y1A05Q3 RAPOLU CHARAN REDDY6 months agoFeb 25, 2026 10:07 (GMT +5:30)

class Solution {
int sumExceptFirstLast(int[] arr) {
int i = 1;
int sum = 0;
while(i < arr.length - 1){
sum = sum + arr[i];
i++;
}
return sum;

}
}

2

Reply

YAMJALA AKHIL YADAV6 months agoFeb 19, 2026 10:56 (GMT +5:30)

class Solution {
int sumExceptFirstLast(int[] arr) {
int sum=0;
for(int i=1;i<arr.length-1;i++){
sum=sum+arr[i];
}
return sum;
}
}

0

Reply

guhan umashankar7 months agoFeb 12, 2026 15:36 (GMT +5:30)

class Solution {
int sumExceptFirstLast(int[] arr) {
int i = 1;
int sum = 0;
while(i < arr.length - 1){
sum = sum + arr[i];
i++;
}
return sum;

}
}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:32

Time Taken0.04

Python3
C (gcc 5.4)
C++ (17)
Java (21)
Python3
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
def sumExceptFirstLast(self,arr):
# code here
return sum(arr)-arr[0]-arr[-1]

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:32

Time Taken0.04

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Sum Except First and Last](https://www.geeksforgeeks.org/problems/max-length-chain/1)
