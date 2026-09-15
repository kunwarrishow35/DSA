# Sum of Array

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

Sum of Array
Solved

Difficulty: BasicAccuracy: 80.38%Submissions: 271K+Points: 1

Given an integer array arr[], return the sum of all elements of arr.
Examples:
Input: arr[] = [1, 2, 3, 4]
Output: 10
Explanation: 1 + 2 + 3 + 4 = 10.

Input: arr[] = [1, 3, 3]
Output: 7
Explanation: 1 + 3 + 3 = 7.

Constraints:
0 ≤ arr.size() ≤ 105
0 ≤ arr[i] ≤ 104

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Topic Tags

Arrays

Related Articles

Program Find Sum Elements Given Array

Discussions ( 83 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Sumit Toppo1 hour agoSep 15, 2026 19:30 (GMT +5:30)

from functools import reduce

class Solution:

def arraySum(self, arr):

# code here

ans=reduce(lambda x,y:x+y,arr)

return ans

0

Reply

Rohit Kumar Giri1 week agoSep 08, 2026 09:16 (GMT +5:30)

class Solution {
public int arraySum(int arr[]) {
int sum = 0;
for(int i=0; i < arr.length; i++){
sum +=arr[i];

}
return sum;
}
}

0

Reply

Aditya Maurya1 week agoSep 05, 2026 11:01 (GMT +5:30)

class Solution {
public int arraySum(int arr[]) {
// code here
int sum = 0;
int i ;
for ( i=0 ; i<arr.length ; i++){
sum = sum + arr[i];
}
return sum;
}
}

0

Reply

Ashish Kumar1 week agoSep 05, 2026 02:17 (GMT +5:30)

class Solution {
public:
int arraySum(vector<int>& arr) {
int sum = 0;
for(int i=0; i<arr.size(); i++) {
sum += arr[i];
}
return sum;

}
};

0

Reply

Shubhi Patel2 weeks agoAug 31, 2026 21:48 (GMT +5:30)

class Solution {
public int arraySum(int arr[]) {
// code here
int sum=0;
for(int i=0;i<arr.length;i++){
sum+=arr[i];
}
return sum;
}
}

2

Reply

Sankeerthana2 weeks agoAug 26, 2026 20:47 (GMT +5:30)

class Solution {
public int arraySum(int arr[]) {
// code here
int sum=0;
for(int i=0;i<arr.length;i++){
sum+=arr[i];
}
return sum;
}
}

0

Reply

Anonymous_Geek(Edited)26/08/2026, 14:48
2 weeks agoAug 26, 2026 14:46 (GMT +5:30)

JAVASCRIPT SOLUTION:                                                                        class Solution {
arraySum(arr) {
// code here
return arr.reduce((arr,acc)=>arr+acc);
}
}

1

Reply

Dinal Patel3 weeks agoAug 25, 2026 20:01 (GMT +5:30)

class Solution {

public int arraySum(int arr[]) {

int sum=0;

for(int i=0;i<arr.length;i++){

sum += arr[i];

}

return sum;

}

}

0

Reply

Manish kumar Verma3 weeks agoAug 23, 2026 18:47 (GMT +5:30)

class Solution {
public:
int arraySum(vector<int>& arr) {
int sum = 0;
for(auto i : arr){
sum += i;
}
return sum;

}
};

0

Reply

Priyanshu Keshari1 month agoAug 10, 2026 23:04 (GMT +5:30)

class Solution {
public:
int arraySum(vector<int>& arr) {
// code here
int n=arr.size();
int sum=0;
for(int i=0; i<n; i++){
sum=sum+arr[i];
}
return sum;
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

Points Scored 1 / 1Your Total Score:18

Time Taken0.08

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
def arraySum(self, arr):
# code here
return sum(arr)

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:18

Time Taken0.08

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Sum of Array](https://www.geeksforgeeks.org/problems/sum-all-array-elements/1)
