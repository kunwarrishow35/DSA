# Second Largest

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

Second Largest
Solved

Difficulty: EasyAccuracy: 26.72%Submissions: 1.7MPoints: 2Average Time: 15m

Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.
Note: The second largest element should not be equal to the largest element.
Examples:
Input: arr[] = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34.
Input: arr[] = [10, 5, 10]
Output: 5
Explanation: The largest element of the array is 10 and the second largest element is 5.
Input: arr[] = [10, 10, 10]
Output: -1
Explanation: The largest element of the array is 10 and the second largest element does not exist.

Constraints:
2 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 105

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Company Tags

SAP LabsRockstand

Topic Tags

ArraysSearching

Related Articles

Find Second Largest Element Array

Discussions ( 2315 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Himanshu Singh23 hours agoOct 23, 2026 22:02 (GMT +5:30)

int getSecondLargest(vector<int> &arr) {
// code here
if(arr.size() < 1)
return -1;
int largest = 0, second_largest = -1;
for(int i = 0; i < arr.size(); i++){
if(arr[i] > largest){
largest = arr[i];
}
}
for(int i = 0; i < arr.size(); i++)
if(arr[i] > second_largest && arr[i] != largest)
second_largest = arr[i];

return second_largest;
}

1

Reply

LAL JI SINGH1 week agoOct 16, 2026 21:17 (GMT +5:30)

public int getSecondLargest(int[] arr) {
// code here
int l = -1, sl = -1;
for(int i=0; i<arr.length ; i++){
if(arr[i]>l){
sl = l;
l = arr[i];
}else if(arr[i]<l && arr[i]>sl){
sl = arr[i];
}
}
return sl;
}

1

Reply

M Gnana Varshini2 weeks agoOct 05, 2026 09:56 (GMT +5:30)

import java.util.Arrays;

class Solution {

// function to find the second largest element
static int getSecondLargest(int[] arr) {
int n = arr.length;

// Sort the array in non-decreasing order
Arrays.sort(arr);

// start from second last element as last element is the largest
for (int i = n - 2; i >= 0; i--) {

// return the first element which is not equal to the
// largest element
if (arr[i] != arr[n - 1]) {
return arr[i];
}
}

// If no second largest element was found, return -1
return -1;
}

public static void main(String[] args) {
int[] arr = { 12, 35, 1, 10, 34, 1 };
System.out.println(getSecondLargest(arr));
}
}

1

Reply

ASHISH(Edited)28/09/2026, 17:14
3 weeks agoSep 28, 2026 17:14 (GMT +5:30)

//Java solution                                                                                                                class Solution {
public int getSecondLargest(int[] arr) {
// code here
int a = arr[0],b=-1;

for(int i=0;i<arr.length;i++){
if(arr[i]>a){
b=a;
a=arr[i];
}else if(arr[i]>b && arr[i]<a){
b=arr[i];
}
}

return b;
}
}

1

Reply

Adarsh singh4 weeks agoSep 26, 2026 20:04 (GMT +5:30)

class Solution {
public:
int getSecondLargest(vector<int> &arr) {

int largest = -INT_MIN;
bool slargestfound = false;
for(int i =0;i<arr.size();i++){
if(arr[i]>largest)
largest = arr[i];
}

int slargest = INT_MIN;
for(int i=0;i<arr.size();i++){
if(arr[i]!=largest){
slargest = max(slargest,arr[i]);
slargestfound = true;
}
}
if(slargestfound == true)
return slargest;

return -1;
}
};

0

Reply

Kanchi Guru Goutham4 weeks agoSep 26, 2026 11:51 (GMT +5:30)

class Solution:
def getSecondLargest(self, arr):
# code here
n = len(arr)
largest = arr[0]
slargest = -1
for i in range(1,n):
if arr[i] > largest:
slargest = largest
largest = arr[i]
elif arr[i] < largest and arr[i] > slargest:
slargest = arr[i]

return slargest

0

Reply

Pradeep Jangam4 weeks agoSep 25, 2026 17:11 (GMT +5:30)

class Solution {
public int getSecondLargest(int[] arr) {
int n=arr.length;
Arrays.sort(arr);
int lar=arr[n-1];
int sec=Integer.MIN_VALUE;
for(int i=n-2;i>=0;i--){
if( arr[i]!=lar){
sec=arr[i];
break;
}
}
if(sec!=Integer.MIN_VALUE){
return sec;
}
return -1;}
}

0

Reply

Amar Jit kushwaha1 month agoSep 21, 2026 11:33 (GMT +5:30)

class Solution {
public:
int getSecondLargest(vector<int> &arr) {
// code here
int ans = -1;
//largest number
for(int i=0; i<arr.size(); i++){
if(arr[i]>ans)
ans = arr[i];
}
int second = -1;
//second largest
for(int i=0; i<arr.size(); i++){
if(arr[i]!=ans)
second = max(second, arr[i]);
}
return second;
}
//return -1
};

0

Reply

Anonymous_Geek1 month agoSep 20, 2026 15:35 (GMT +5:30)

class Solution:
def getSecondLargest(self, arr):
largest = second = -1
for x in arr:
if x > largest:
second = largest
largest = x

elif x > second and x != largest:
second = x
return second

0

Reply

Tavva Bhargava Sai1 month agoSep 18, 2026 14:24 (GMT +5:30)

class Solution:
def getSecondLargest(self, arr):
a = list(set(arr))
a.sort()
if len(a) >1:
return a[-2]
else:
return -1

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1120 / 1120
Attempts : Correct / Total1 / 3Accuracy : 33%

Points Scored 2 / 2Your Total Score:119

Time Taken0.29

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
10
11
12
13
14

class Solution:
def getSecondLargest(self, arr):
# code here
maximum = second = float('-inf')
for i in arr:
if i>maximum:
second = maximum
maximum = i
elif i>second and i<maximum:
second = i
if second != float('-inf'):
return second
else:
return -1

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1120 / 1120
Attempts : Correct / Total1 / 3Accuracy : 33%

Points Scored 2 / 2Your Total Score:119

Time Taken0.29

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Second Largest](https://www.geeksforgeeks.org/problems/second-largest3735/1)
