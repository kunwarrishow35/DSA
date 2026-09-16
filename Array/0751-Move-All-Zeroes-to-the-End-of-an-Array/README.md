# Move All Zeroes to the End of an Array

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

Move All Zeroes to End
Solved

Difficulty: EasyAccuracy: 45.51%Submissions: 485K+Points: 2Average Time: 15m

You are given an array arr[] of non-negative integers. You have to move all the zeros in the array to the right end while maintaining the relative order of the non-zero elements. The operation must be performed in place, meaning you should not use extra space for another array.
Examples:
Input: arr[] = [1, 2, 0, 4, 3, 0, 5, 0]
Output: [1, 2, 4, 3, 5, 0, 0, 0]
Explanation: There are three 0s that are moved to the end.

Input: arr[] = [10, 20, 30]
Output: [10, 20, 30]
Explanation: No change in array as there are no 0s.

Input: arr[] = [0, 0]
Output: [0, 0]
Explanation: No change in array as there are all 0s.

Constraints:
1 ≤ arr.size() ≤ 105
0 ≤ arr[i] ≤ 105

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Company Tags

PaytmAmazonMicrosoftSamsungSAP LabsLinkedinBloombergNPCI

Topic Tags

Arrays

Related Interview Experiences

Paytm Interview Experience Set 9Samsung Bangalore Internship Interview Experience 2018Samsung R D Bangalore Internship Experience 2018

Related Articles

Move Zeroes End Array

Discussions ( 1292 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Gevendra Verma(Edited)25/06/2026, 12:44
2 years agoOct 31, 2023 00:06 (GMT +5:30)

Day 67 me itna pyaar aur motivate krne ke liye bahut bahut dhanyawaad doston maza aagya

Move All Zeroes to the End of an Array
When working with arrays in programming, one common task is to rearrange the elements to meet specific criteria. In this article, we'll explore a simple yet useful problem: moving all the zeroes to the end of an array while preserving the order of non-zero elements. We will provide you with a Python solution and explain the intuition behind it, its implementation, a dry run with examples, and discuss the time and space complexity.

Introduction

Imagine you have an array of positive integers, and you want to reorganize it so that all the zeroes are placed at the end of the array. The order of non-zero elements should remain unchanged. This task can be tackled in various ways, but we'll focus on an efficient, in-place solution that uses a Python class.

Intuition

The intuition behind this problem is straightforward. We need to keep track of the non-zero elements and place them in their correct positions while shifting all the zeroes to the end of the array. To do this, we'll use a two-pointer approach: one pointer to track non-zero elements and another to iterate through the array.

Approach

We can implement the desired functionality using the following Python code:

class Solution:
def pushZerosToEnd(self, arr):
pos = 0
n = len(arr)

for i in range(n):
if arr[i] != 0:
arr[pos], arr[i] = arr[i], arr[pos]
pos+=1

Dry Run

Let's dry run the code with a couple of examples to understand how it works:

Example :

n = 5

arr = [3, 5, 0, 0, 4]

Initially, pos = 0

First loop (i=0):

- arr[0] = 3

- pos = 0

Second loop (i=1):

- array[1] = 5

- pos = 1

Third loop (i=2):

- arr[2] = 0 (zero, so skip)

Fourth loop (i=3):

- arr[3] = 0 (zero, so skip)

Fifth loop (i=4):

- arr[4] = 4

- pos = 3

- arr[3], arr[4] = arr[4], arr[3]

Fill the remaining positions with zeros

array = [3, 5, 4, 0, 0]

The final array is [3, 5, 4, 0, 0], and non-zero elements are preserved in order.

Time and Space Complexity

The time complexity of this solution is O(n), where n is the length of the input array. This is because we iterate through the array only once.

The space complexity is O(1) since we perform the operation in-place, without using any additional data structures.

Conclusion

Moving all zeroes to the end of an array is a common problem that can be efficiently solved using a two-pointer approach. The provided Python code accomplishes this task, preserving the order of non-zero elements. By understanding the intuition, approach, and dry run examples, you should now be well-equipped to tackle similar array manipulation problems.

रात को ही उठके हमने करी कॉडिंग
फिर बनाया गीक्स फॉर गीक्स का आर्टिकल
फिर बनाया ड्राई रन और gif
हो गए सरे टास्क कम्पलीट बोलो जय श्री राम
इतनी मेहनत के लिए उपवोट तो बनता है यारो

147

Reply
(Show 6 Replies)

xiadra2fiz2 days agoSep 14, 2026 00:12 (GMT +5:30)

Believe in God... 5

class Solution {
public:
void pushZerosToEnd(vector<int>& arr) {

int k = 0 ;
for(int i=0;i<arr.size();i++){
if(arr[i] != 0){
swap(arr[i], arr[k]);
k++;
}
}
return ;
}
};

0

Reply

Himanshu2 weeks agoSep 02, 2026 18:18 (GMT +5:30)

class Solution:

def pushZerosToEnd(self, arr):

# code here

i = 0

for j in range(len(arr)):

if arr[j] != 0:

arr[i],arr[j] = arr[j],arr[i]

i += 1

0

Reply

Aman Kumar2 weeks agoSep 01, 2026 01:15 (GMT +5:30)

class Solution {

void pushZerosToEnd(int[] arr) {
// code here
int k=0;
for(int i=0;i<arr.length;i++){

if(arr[i] !=0){

int temp = arr[i];
arr[k]=temp;
k++;
}

}
for(int i=k;i<arr.length;i++){
arr[i]=0;
}

}
}

0

Reply

Athul3 weeks agoAug 26, 2026 10:24 (GMT +5:30)

class Solution:

def pushZerosToEnd(self, arr):

# code here

non_zero = [num for num in arr if num != 0]

zeros = len(arr) - len(non_zero)

arr[:] = non_zero + [0] * zeros

0

Reply

Jyoti Kumari(Edited)10/08/2026, 23:07
1 month agoAug 10, 2026 23:07 (GMT +5:30)

class Solution {
void pushZerosToEnd(int[] arr) {
int n=arr.length;
int idx=0;
for(int i=0;i<n;i++){
if(arr[i]!=0){
arr[idx]=arr[i];
idx++;
}
}
while(idx<n){
arr[idx]=0;
idx++;
}

// code here

}
}

0

Reply

Jyoti Kumari1 month agoAug 10, 2026 23:07 (GMT +5:30)

class Solution {
void pushZerosToEnd(int[] arr) {
int n=arr.length;
int idx=0;
for(int i=0;i<n;i++){
if(arr[i]!=0){
arr[idx]=arr[i];
idx++;
}
}
while(idx<n){
arr[idx]=0;
idx++;
}

// code here

}
}

0

Reply

Jyoti Kumari1 month agoAug 10, 2026 23:07 (GMT +5:30)

class Solution {
void pushZerosToEnd(int[] arr) {
int n=arr.length;
int idx=0;
for(int i=0;i<n;i++){
if(arr[i]!=0){
arr[idx]=arr[i];
idx++;
}
}
while(idx<n){
arr[idx]=0;
idx++;
}

// code here

}
}

0

Reply

mohitparmajmi71 month agoAug 08, 2026 14:35 (GMT +5:30)

class Solution {
public:
void pushZerosToEnd(vector<int>& a) {
int j = -1;
for(int i = 0; i<a.size(); i++){
if(a[i] == 0 && j == -1){
j = i;
}
if(a[i] != 0 && j != -1){
a[j++] = a[i];
}
}
while(j<a.size() && j != -1){
a[j] = 0;
j++;
}
}
};

0

Reply

Laxmikant Hatkar1 month agoAug 06, 2026 23:03 (GMT +5:30)

class Solution {
public:
void pushZerosToEnd(vector<int>& arr) {
// code here
int j=0;
for(int i=0;i<arr.size();i++){
if(arr[i]!=0){
swap(arr[i],arr[j]);
j++;

}
}
}
};

1

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:38

Time Taken0.91

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
14
15
16
17

class Solution:
def pushZerosToEnd(self, arr):
# code here
i = j = 0
while(j<len(arr)):
if arr[j] == 0:
j = j+1
else:
temp = arr[j]
arr[j] = arr[i]
arr[i] = temp

i = i+1
j = j+1

return arr

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:38

Time Taken0.91

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Move All Zeroes to the End of an Array](https://www.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1)
