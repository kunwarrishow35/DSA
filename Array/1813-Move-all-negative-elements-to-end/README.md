# Move all negative elements to end

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

Move all negative elements to end
Solved

Difficulty: EasyAccuracy: 56.24%Submissions: 261K+Points: 2

Given an unsorted array arr[ ] having both negative and positive integers. Place all negative elements at the end of the array without changing the order of positive elements and negative elements.
Note: Don't return any array, just in-place on the array.
Examples:
Input : arr[] = [1, -1, 3, 2, -7, -5, 11, 6 ]
Output : [1, 3, 2, 11, 6, -1, -7, -5]
Explanation: By doing operations we separated the integers without changing the order.
Input : arr[] = [-5, 7, -3, -4, 9, 10, -1, 11]
Output : [7, 9, 10, 11, -5, -3, -4, -1]

Constraints:
1 ≤ arr.size() ≤ 106
-109 ≤ arr[i] ≤ 109

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(n)

Topic Tags

Arrays

Related Articles

Move Ve Elements End Order Extra Space Allowed

Discussions ( 711 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

xiadra2fiz1 day agoSep 15, 2026 21:54 (GMT +5:30)

Believe in God...9.5  ....// Not optimal solution.. exceeded time limit...

int n = arr.size() ; int i =0 ;
while(i < n){
if(arr[i] >= 0){
i++;
} else {
int j = i+1;
while(j <n && arr[j] < 0){
j++;
}
if(j == n) break ;

int x = arr[j] ;
for(int k = j;k>i;k--){
arr[k] = arr[k-1] ;
}
arr[i] = x ;
i++;
}
}

___________________________________-

//////  Using an vector........ // Use this approach..
// vector<int> ans ;
// for(int i=0;i<arr.size();i++){
//     if(arr[i] >= 0) ans.push_back(arr[i]) ;
// }
// for(int i=0;i<arr.size();i++){
//     if(arr[i] < 0) ans.push_back(arr[i]) ;
// }
// arr = ans ;

0

Reply

Aman Kumar2 weeks agoSep 01, 2026 14:36 (GMT +5:30)

class Solution {
public void segregateElements(int[] arr) {
// code here

int[] arr1= new int[arr.length];

int k=0;
for(int i=0;i<arr.length;i++){

if(arr[i]>=0){

arr1[k]=arr[i];

k++;

}

}
for(int i=0;i<arr.length;i++){
if(arr[i]<0){
arr1[k]=arr[i];
k++;
}
}

for(int i=0;i<arr.length;i++){

arr[i]=arr1[i];

}

}
}

0

Reply

MirzaCode Beg2 weeks agoAug 30, 2026 15:29 (GMT +5:30)

class Solution:
def segregateElements(self, arr):
positive_list = []
negative_list = []
for num in arr:
if num >= 0:
positive_list.append(num)
else:
negative_list.append(num)

positive_list.extend(negative_list)

arr[:] = positive_list

0

Reply

sumatew7a1 month agoAug 18, 2026 15:58 (GMT +5:30)

class Solution {
segregateElements(arr) {
// code here
for(let num of arr){
if(num>=0){
pos.push(num)
}
}

for(let num of arr){
if(num<0){
pos.push(num)
}
}
for (let i = 0; i < arr.length; i++) {
arr[i] = pos[i];
}
return arr
}
}

0

Reply

Anonymous_Geek1 month agoJul 30, 2026 18:23 (GMT +5:30)

class Solution {
public:
void segregateElements(vector<int>& arr) {
// code here
int n=arr.size();
vector<int>temp;
for(int i=0;i<n;i++){if(arr[i]>=0){temp.push_back(arr[i]);}}
for(int i=0;i<n;i++){if(arr[i]<0){temp.push_back(arr[i]);}}
arr=temp;
}
};

0

Reply

Anonymous_Geek1 month agoJul 30, 2026 18:23 (GMT +5:30)

class Solution {
public:
void segregateElements(vector<int>& arr) {
// code here
int n=arr.size();
vector<int>ans;
for(int i=0;i<n;i++){if(arr[i]>=0){ans.push_back(arr[i]);}}
for(int i=0;i<n;i++){if(arr[i]<0){ans.push_back(arr[i]);}}
for(int i=0;i<n;i++){arr[i]=ans[i];}
}
};

0

Reply

Anonymous_Geek2 months agoJul 17, 2026 10:45 (GMT +5:30)

class Solution {
public void segregateElements(int[] arr) {
// code here
int[] temp = new int[arr.length];
int k =0;
for(int i=0;i<arr.length;i++){
if(arr[i] >= 0){
temp[k++] = arr[i];
}
}
for(int i=0;i<arr.length;i++){
if(arr[i]<0){
temp[k++] = arr[i];
}
}
for(int i=0;i<arr.length;i++){
arr[i] = temp[i];
}
}
}

0

Reply

Anonymous_Geek2 months agoJul 04, 2026 18:59 (GMT +5:30)

class Solution {

public:

void segregateElements(vector<int>& arr) {

// code here

/*APPROACH - 1

int n = arr.size();

vector<int>ans;

for (int i = 0; i<n; i++) {if (arr[i] >= 0) {ans.push_back(arr[i]); }}

for (int i = 0; i<n; i++) {if (arr[i]<0) {ans.push_back(arr[i]); }}

for (int i = 0; i<n; i++) {arr[i] = ans[i]; } */

int n = arr.size();

vector<int>temp;

for (int i = 0; i<n; i++) {if (arr[i] >= 0) {temp.push_back(arr[i]); }}

for (int i = 0; i<n; i++) {if (arr[i]<0) {temp.push_back(arr[i]); }}

arr = temp;

}

};

0

Reply

MOHAMED IRFAN A2 months agoJun 29, 2026 11:45 (GMT +5:30)

class Solution {
public void segregateElements(int[] arr) {
int n = arr.length;
int[] temp = new int[n];
int index = 0;
for (int i = 0; i < n; i++) {
if (arr[i] >= 0) {
temp[index++] = arr[i];
}
}
for (int i = 0; i < n; i++) {
if (arr[i] < 0) {
temp[index++] = arr[i];
}
}
for (int i = 0; i < n; i++) {
arr[i] = temp[i];
}
}
}

0

Reply
(Show 1 Replies)

SHUBHANG  S RAO2 months agoJun 26, 2026 11:00 (GMT +5:30)

class Solution {

public:

void segregateElements(vector<int>& arr) {

/*APPROACH - 1

int n = arr.size();

vector<int>ans;

for (int i = 0; i<n; i++) {if (arr[i] >= 0) {ans.push_back(arr[i]); }}

for (int i = 0; i<n; i++) {if (arr[i]<0) {ans.push_back(arr[i]); }}

for (int i = 0; i<n; i++) {arr[i] = ans[i]; } */

int n = arr.size();

vector<int>temp;

for (int i = 0; i<n; i++) {if (arr[i] >= 0) {temp.push_back(arr[i]); }}

for (int i = 0; i<n; i++) {if (arr[i]<0) {temp.push_back(arr[i]); }}

arr = temp;

}

};

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:46

Time Taken0.84

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
12

class Solution:
def segregateElements(self, arr):
pos = []
neg = []

for i in range(len(arr)):
if arr[i] >= 0:
pos.append(arr[i])
else:
neg.append(arr[i])

arr[:] = pos + neg

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:46

Time Taken0.84

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Move all negative elements to end](https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1)
