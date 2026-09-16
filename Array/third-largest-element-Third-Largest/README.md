# Third Largest

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

Third Largest
Solved

Difficulty: EasyAccuracy: 45.04%Submissions: 223K+Points: 2Average Time: 15m

Given an array, arr[] of positive integers. Find the third largest element in it. Return -1 if the third largest element is not found.
Examples:
Input: arr[] = [2, 4, 1, 3, 5]
Output: 3
Explanation: The third largest element in the array [2, 4, 1, 3, 5] is 3.
Input: arr[] = [10, 2]
Output: -1
Explanation: There are less than three elements in the array, so the third largest element cannot be determined.

Input: arr[] = [5, 5, 5]
Output: 5
Explanation: In the array [5, 5, 5], the third largest element can be considered 5, as there are no other distinct elements.

Constraints:
1 ≤ arr.size(), arr[i] ≤ 105

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Company Tags

AmazonMicrosoftMakeMyTrip

Topic Tags

Arrays

Related Interview Experiences

Makemytrip Sdet Intern Interview Experience On Campus

Related Articles

Third Largest Element Array Distinct Elements

Discussions ( 760 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Sriratchaka1 week agoSep 03, 2026 23:04 (GMT +5:30)

class Solution:
def thirdLargest(self,arr):
# code here
l=arr[0]
sl=-1
tl=-1
if len(arr)>=3:
for i in range(1,len(arr)):
if arr[i]>=l:
tl=sl
sl=l
l=arr[i]
elif arr[i]<=l and arr[i]<=sl and arr[i]>=tl:
if arr[i]>=tl:
tl=arr[i]
else:
i+=1
elif arr[i]>=sl and arr[i]<=l:
tl=sl
sl=arr[i]
elif (l==sl) and (l==tl):
return l
return tl
if len(arr)<3:
return tl

0

Reply

Laxmikant Hatkar1 month agoJul 31, 2026 20:24 (GMT +5:30)

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
int thirdLargest(vector<int> &arr) {

int n = arr.size();

if(n < 3)
return -1;

int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
int max1_idx = -1, max2_idx = -1;

for(int i = 0; i < n; i++) {
if(arr[i] > max1) {
max1 = arr[i];
max1_idx = i;
}
}

for(int i = 0; i < n; i++) {
if(i == max1_idx)
continue;

if(arr[i] > max2) {
max2 = arr[i];
max2_idx = i;
}
}

for(int i = 0; i < n; i++) {
if(i == max1_idx || i == max2_idx)
continue;

if(arr[i] > max3) {
max3 = arr[i];
}
}

return max3;
}
};

0

Reply

Rohit Kumar2 months agoJul 09, 2026 23:04 (GMT +5:30)

class Solution {
public:
int thirdLargest(vector<int> &arr) {
// code here
if(arr.size() < 3) return -1;

int first=INT_MIN, second=INT_MIN, third=INT_MIN;

for(int i=0; i<arr.size(); i++){
if(arr[i] > first){
third=second;
second=first;
first=arr[i];
}
else if(arr[i] > second){
third=second;
second=arr[i];
}
else if(arr[i] > third){
third=arr[i];
}
}
return third;

}
};

2

Reply

Manikandan B2 months agoJul 09, 2026 19:45 (GMT +5:30)

class Solution {
public int thirdLargest(List<Integer> arr) {
Collections.sort(arr);

if (arr.size() < 3)
return -1;

return arr.get(arr.size() - 3);
}
}

0

Reply

VALLURI MOHAN CHANDU2 months agoJun 30, 2026 11:25 (GMT +5:30)

class Solution {
public:
int thirdLargest(vector<int> &arr) {
// code here
int n = arr.size();
sort(arr.begin(),arr.end());
if(n < 3){
return -1;
}
return arr[n-3];

}
};

0

Reply

sweta rajhans3 months agoMay 27, 2026 19:15 (GMT +5:30)

Time complexity - O(N)
Space complexity - O(1)

class Solution {
int thirdLargest(int arr[]) {
// code here
Queue<Integer> queue = new PriorityQueue<>();
for(int n : arr){
queue.offer(n);
if(queue.size()>3){
queue.remove();
}
}
if(queue.size()<3){
return -1;
}
return queue.peek();
}
}

0

Reply

Abhishek Kumar(Edited)27/04/2026, 23:11
4 months agoApr 27, 2026 23:11 (GMT +5:30)

Using PriorityQueue :

int thirdLargest(int arr[]) {
// code here
if(arr.length<3) return -1;
PriorityQueue<Integer> pq = new PriorityQueue<>();
for(int i=0; i<arr.length; i++){
pq.add(arr[i]);
if(pq.size()>3){
pq.poll();
}
}
return pq.peek();
}

0

Reply

Payal Hasmukh Makwana5 months agoMar 28, 2026 02:51 (GMT +5:30)

Using three variable - O(n) time and O(1) space

class Solution {
public:
int thirdLargest(vector<int> &arr) {
int n = arr.size();
if(n==1 || n == 2) return -1;

int maxi = INT_MIN, smaxi = INT_MIN, tmaxi = INT_MIN;

for(int i = 0; i < n; i++){
if(arr[i] > maxi){
tmaxi = smaxi;
smaxi = maxi;
maxi = arr[i];
}
else if(arr[i] > smaxi){
tmaxi = smaxi;
smaxi = arr[i];
}
else if(arr[i] > tmaxi){
tmaxi = arr[i];
}
}
return tmaxi;
}
};

1

Reply

Kevin Roy6 months agoFeb 27, 2026 04:34 (GMT +5:30)

class Solution:
def thirdLargest(self,arr):
# code here
first=sec=third=float("-inf")

if len(arr)<3:
return -1

for i in range(len(arr)):
if arr[i]>first:
third=sec
sec=first
first=arr[i]
elif arr[i]>sec:
third=sec
sec=arr[i]
elif arr[i]>third:
third=arr[i]
return third

0

Reply

KAVIYA K6 months agoFeb 20, 2026 13:11 (GMT +5:30)

class Solution {
int thirdLargest(int arr[]) {
// code here
int n=arr.length;
int f=Integer.MIN_VALUE;
int s=Integer.MIN_VALUE;
int t=Integer.MIN_VALUE;
for(int i=0;i<n;i++){
if(arr[i]>=f){
t=s;
s=f;
f=arr[i];
}
else if(arr[i]>=s){
t=s;
s=arr[i];
}
else if(arr[i]>=t){
t=arr[i];
}
}
return t;
}
}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1121 / 1121
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:40

Time Taken0.21

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

class Solution:
def thirdLargest(self,arr):
# code here
new = sorted(arr)
if len(arr) < 3:
return -1
else:
return new[-3]

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1121 / 1121
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:40

Time Taken0.21

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Third Largest](https://www.geeksforgeeks.org/problems/third-largest-element/1)
