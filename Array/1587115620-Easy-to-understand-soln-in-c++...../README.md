# Easy to understand soln in c++.....

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

First Occurrence in Sorted
Solved

Difficulty: EasyAccuracy: 44.32%Submissions: 755K+Points: 2Average Time: 20m

Given a sorted array arr[] and an integer k, find the position(0-based indexing) at which k is present in the array using binary search. If k doesn't exist in arr[] return -1.

Note: If multiple occurrences are there, please return the smallest index.

Examples:

Input: arr[] = [1, 2, 3, 4, 5], k = 4
Output: 3
Explanation: 4 appears at index 3.

Input: arr[] = [11, 22, 33, 44, 55], k = 445
Output: -1
Explanation: 445 is not present.

Input: arr[] = [1, 1, 1, 1, 2], k = 1
Output: 0
Explanation: 1 appears at index 0.

Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 106
1 ≤ k ≤ 106

Expected Complexities

Time Complexity: O(log n)
Auxiliary Space: O(1)

Company Tags

InfosysOracleWiproLinkedinQualcommTCSCognizantAccenture

Topic Tags

ArraysSearchingDivide and Conquer

Related Interview Experiences

Qualcomm Interview Experience Set 9 Experienced Linkedin Invite

Related Articles

Find First Occurrence In Sorted

Discussions ( 1184 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

VINIT KUMAR2 months agoAug 18, 2026 21:48 (GMT +5:30)

int n=arr.length;
int lo=0,hi=n-1,idx=-1;
while(lo<=hi) {
int  mid=(lo+hi)/2;
if(arr[mid]>k) {
hi=mid-1;
}
else if(arr[mid]<k) {
lo=mid+1;

}
else {
idx=mid;
hi=mid-1;
}
}
return idx;
}

0

Reply

Sai Vishnu Vardhan Bathini2 months agoAug 17, 2026 10:54 (GMT +5:30)

For Python3 Platform

class Solution:
def firstSearch(self, arr, k):
left, right = 0, len(arr)-1

while left <= right:
mid = (left + right)//2

if arr[mid] == k:
for index in range(mid):
if arr[index] == k:
return index
return mid
elif arr[mid] < k:
left = mid + 1
else:
right = mid - 1

return -1

0

Reply

Jayavardhan Adari3 months agoJul 21, 2026 15:49 (GMT +5:30)

class Solution:
def firstSearch(self, arr, k):
for i in range(len(arr)):
if arr[i]==k:
return i
return -1

0

Reply

ASHISH3 months agoJul 05, 2026 17:51 (GMT +5:30)

int firstSearch(vector<int> &arr, int k) {
int i=0,j=arr.size()-1;int ans=-1;
while(i<=j){
int mid=i+(j-i)/2;
if(arr[mid]==k){
ans=mid;
j=mid-1;
}

else if(arr[mid]<k)
i=mid+1;
else
j=mid-1;

}
return ans;
}

0

Reply

Shelly Garg3 months agoJun 27, 2026 09:51 (GMT +5:30)

class Solution:
def firstSearch(self, arr, k):
# Code Here
l=0
r=len(arr)-1
while l<=r:
mid=(l+r)//2
if arr[mid]==k:
for i in range(0,mid):
if arr[i]==k:
return i
return mid
elif arr[mid]>k:
r=mid-1
else:
l=mid+1
return -1

0

Reply

Anonymous_Geek4 months agoJun 02, 2026 00:00 (GMT +5:30)

class Solution:
def firstSearch(self, arr, k):
# Code Here
l=0
r=len(arr)-1
while l<=r:
mid=(l+r)//2
if arr[mid]==k:
for i in range(0,mid):
if arr[i]==k:
return i
return mid
elif arr[mid]>k:
r=mid-1
else:
l=mid+1
return -1

0

Reply

Chetan Bhatt4 months agoMay 29, 2026 00:41 (GMT +5:30)

Easy to understand soln in c++.....
int firstSearch(vector<int> &arr, int k) {
// code here
int lo=0,hi=arr.size()-1;

int ari=-1;
while(lo<=hi)//binary search
{
int mid=lo+(hi-lo)/2;
if(arr[mid]==k)
{
ari=mid;
hi=mid-1;//keep searching left side
}

else if(arr[mid]<k) lo=mid+1;

else hi=mid-1;
}

return ari;

}

0

Reply

ABDUL RAFI N(Edited)28/05/2026, 20:53
4 months agoMay 28, 2026 20:52 (GMT +5:30)

// BINARY SEARCH
class Solution {
public int firstSearch(int[] arr, int k) {
// Code Here
int low=0,high=arr.length-1;
while(low<=high){
int mid=(low+high)/2;
if(arr[mid]<k){
low=mid+1;
}else if(arr[mid]>k){
high=mid-1;
}else if(arr[mid]==k){
if(mid>0&&arr[mid-1]==k){
high=mid-1;
continue;
}
return mid;
}
}
return -1;
}
}

0

Reply
(Show 1 Replies)

Pradeep kumar P5 months agoMay 16, 2026 10:26 (GMT +5:30)

class Solution {
public int firstSearch(int[] arr, int k) {
// Code Here
for(int i=0;i<arr.length;i++){
if(arr[i]==k){
return i;

}
}
return -1;
}
}

2

Reply
(Show 1 Replies)

Divyanshu Bhati5 months agoMay 06, 2026 11:56 (GMT +5:30)

class Solution {
public int firstSearch(int[] arr, int k) {
for(int i=0;i<arr.length;i++){
if(arr[i] == k)
return i;
}
return -1;
}
}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1117 / 1117
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:123

Time Taken0.11

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

class Solution:
def firstSearch(self, arr, k):
# Code Here
for i in range(len(arr)):
if arr[i] == k:
return i
return -1

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1117 / 1117
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:123

Time Taken0.11

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Easy to understand soln in c++.....](https://www.geeksforgeeks.org/problems/binary-search-1587115620/1)
