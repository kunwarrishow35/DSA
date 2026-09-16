# Palindrome Array

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

Palindrome Array
Solved

Difficulty: BasicAccuracy: 43.54%Submissions: 93K+Points: 1

Given an array arr[], the task is to find whether the arr is palindrome or not.  An array is said to be palindrome if its reverse array matches the original array.

Examples:

Input: arr = [1, 2, 3, 2, 1]
Output: true
Explanation: If we reverse, we get [1, 2, 3, 2, 1] which is the same as before. So, the answer is true.

Input: arr = [1, 2, 3, 4, 5]
Output: false
Explanation:  If we reverse it, we get [5, 4, 3, 2, 1] which is the not same as before. So, the answer false.

Constraints:
1 ≤ arr.size() ≤ 106
1 ≤ arr[i] ≤ 109

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Topic Tags

Arrays

Related Articles

Program To Check If An Array Is Palindrome Or Not

Discussions ( 354 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

dorathexplora(Edited)07/09/2026, 23:18
1 week agoSep 07, 2026 23:18 (GMT +5:30)

Brute force: Make a duplicate array, reverse it and check , if count = arr.length then true
//optimal

class Solution {
public static boolean isPalindrome(int[] arr) {
// code here

int n=arr.length;

for(int i=0; i<n/2; i++){
if(arr[i]!=arr[n-i-1]){
return false;
}
}
return true;
}
}

0

Reply

Akanksha Gupta3 weeks agoAug 25, 2026 16:27 (GMT +5:30)

class Solution {
public:
bool isPalindrome(vector<int> &arr) {
int n = arr.size()-1;
int i = 0;
while(i<=n){
if(arr[i] != arr[n]){
return false;
}
i++;
n--;
}
return true;
}
};

0

Reply

Vikash Kumar bharti3 weeks agoAug 23, 2026 23:55 (GMT +5:30)

Java Solution:

class Solution {
public static boolean isPalindrome(int[] arr) {

int left=0;
int right=arr.length-1;

while(left<right){
if(arr[left++]!=arr[right--]){
return false;
}
}
return true;
}
}

1

Reply

codershani engineer3 weeks agoAug 23, 2026 23:12 (GMT +5:30)

class Solution {
public static boolean isPalindrome(int[] arr) {
// code here
int count=0;
for(int i = 0; i<arr.length/2; i++){
if(arr[i]==arr[arr.length-1-i]){
count++;

}
if(count==arr.length/2){
return true;
}
}
return false;
}
}

1

Reply

annu garg1 month agoAug 04, 2026 17:51 (GMT +5:30)

class Solution {
public static boolean isPalindrome(int[] arr) {

int left=0;
int right=arr.length-1;
while(left<=right)
{
if(arr[left]!=arr[right])
{
return false;
}
left++;
right--;
}
return true;
}
}

0

Reply

Ehmed Fayaz1 month agoAug 02, 2026 00:09 (GMT +5:30)

class Solution {
public static boolean isPalindrome(int[] arr) {
// code here
int left=0;
int right=arr.length-1;
while(left<=right)
{
if(arr[left]!=arr[right])
{
return false;
}
left++;
right--;
}
return true;
}
}

0

Reply

Vann Thaihour3 months agoJun 11, 2026 20:43 (GMT +5:30)

class Solution {
public:
bool isPalindrome(vector<int> &arr) {
// code here
int size=arr.size();
int count=0;
for(int i=0; i<size ; i++){
if(arr[i]==arr[size-1-i])
{
count++;
}
}
if(count==size){
return true;
}
return false;
}
};

0

Reply

Anonymous_Geek3 months agoJun 10, 2026 12:56 (GMT +5:30)

Python --

class Solution:
def isPalindrome(self, arr):
# code here
# [] = 0
# [1] = is a palindrome

n = len(arr)
reverse_arr = []

if n>0:
if n == 1:
return True
else:
for i in range(n-1,-1,-1):
reverse_arr.append(arr[i])

if arr == reverse_arr:
return True
else:
return False

0

Reply

Aum3 months agoJun 01, 2026 08:24 (GMT +5:30)

class Solution {
public static boolean isPalindrome(int[] arr) {
int left = 0;
int right = arr.length-1;

while (left < right){
if(arr[left] != arr[right]){
return false;
}
left++;
right--;
}

return true;
}
}

0

Reply

Vignesh Naik4 months agoMay 14, 2026 13:33 (GMT +5:30)

class Solution { public static boolean isPalindrome(int[] arr) { // code here int i = 0, j = arr.length - 1; while(i < j){ if(arr[i] != arr[j]) return false; i++; j--; } return true; } }

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1112 / 1112
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:35

Time Taken0.47

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
13

class Solution:
def isPalindrome(self, arr):
# code here
i = 0
j = len(arr)-1

while(i<j):
if arr[i] != arr[j]:
return False
i = i+1
j = j-1
return True

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1112 / 1112
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:35

Time Taken0.47

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Palindrome Array](https://www.geeksforgeeks.org/problems/perfect-arrays4645/1)
