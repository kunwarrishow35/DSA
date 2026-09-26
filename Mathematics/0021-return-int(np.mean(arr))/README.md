# return int(np.mean(arr))

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

Mean or Average of an Array
Solved

Difficulty: BasicAccuracy: 70.83%Submissions: 116K+Points: 1

Given an array arr[], return the floor value of the mean of its elements.

Examples:

Input: arr[] = [1, 3, 4, 2, 6, 5, 8, 7]
Output: 4
Explanation: Sum of the elements is 1 + 3 + 4 + 2 + 6 + 5 + 8 + 7 = 36, Mean = 36/8 = 4.5, floor(4.5) = 4.

Input: arr[] = [4, 4, 4, 4, 4]
Output: 4
Explanation: Sum of the elements is 4 + 4 + 4 + 4 + 4 = 20, Mean = 20/5 = 4

Constraints:
1 ≤ arr.size() ≤ 106
1 ≤ arr[i] ≤ 106

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Topic Tags

Mathematics

Related Articles

Program Average Array Iterative RecursiveProgram For Mean And Median Of An Unsorted Array

Discussions ( 119 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Aashuuu1 week agoSep 17, 2026 12:10 (GMT +5:30)

class Solution {
public static int findMean(int[] arr) {
// code here
int sum=0;
int mean=0;
for(int i=0; i<arr.length; i++){
sum+=arr[i];
mean=sum/arr.length;
}
return mean;
}
}

0

Reply

Abhishek Srivastava(Edited)16/09/2026, 11:40
1 week agoSep 16, 2026 11:38 (GMT +5:30)

class Solution {
public static int findMean(int[] arr) {
// code here
int sum =0;
int mean=0;
for(int i=0;i<arr.length;i++){
sum+=arr[i];
mean=sum/arr.length;

}
return mean;
}
};

or
class Solution {
public static int findMean(int[] arr) {
// code here
int sum =0;

for(int i=0;i<arr.length;i++){
sum+=arr[i];

}
return sum/arr.length;
}
};

0

Reply

Sumit Toppo1 week agoSep 15, 2026 19:53 (GMT +5:30)

from functools import reduce
class Solution:
def findMean(self, arr):
# code here
sum=reduce(lambda x,y:x+y, arr)
return sum//len(arr)

0

Reply

Sankeerthana1 month agoAug 26, 2026 20:36 (GMT +5:30)

class Solution {
public static int findMean(int[] arr) {
// code here
int n=arr.length;
int sum=0;
for(int i:arr){
sum+=i;
}
double avg=sum/n;
return (int) Math.floor(avg);
}
}

0

Reply

Amodinee Nagrale1 month agoAug 19, 2026 22:16 (GMT +5:30)

class Solution {
public:
int findMean(vector<int>& arr) {
// code here
int sumarr=0;
int mean=0;
for(int i=0;i<arr.size();i++){
sumarr=sumarr+arr[i];
mean=sumarr/arr.size();
}
return mean;
}
};

0

Reply

Ahamed Musthafa M1 month agoAug 07, 2026 20:14 (GMT +5:30)

class Solution:
def findMean(self, arr):
# code here
lenarr = len(arr)
sumarr = sum(arr)
result = sumarr//lenarr
return result

0

Reply

Akash Dey2 months agoJul 24, 2026 00:40 (GMT +5:30)

import math
class Solution:
def findMean(self, a):
s=0
for i in range(len(a)):
s=s+a[i];
avg=math.floor(s/len(a))
return avg

0

Reply

Shambhuraje Jagadale2 months agoJul 04, 2026 22:14 (GMT +5:30)

return int(np.mean(arr))

1

Reply

Ritika_v2 months agoJul 01, 2026 12:21 (GMT +5:30)

class Solution:
def findMean(self, arr):
s=0
for i in range(len(arr)):
s=s+arr[i]
m=s//len(arr)
return m

1

Reply

Punkesh Gupta3 months agoJun 26, 2026 18:01 (GMT +5:30)

class Solution:
def findMean(self, arr):
# code here
sum=0
for i in arr:
sum = sum + i
return int(sum/len(arr))

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed104 / 104
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:65

Time Taken0.05

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
def findMean(self, arr):
# code here
return (sum(arr)//len(arr))

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed104 / 104
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:65

Time Taken0.05

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[return int(np.mean(arr))](https://www.geeksforgeeks.org/problems/mean0021/1)
