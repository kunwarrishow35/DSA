# Binary Substrings with Corners as 1

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

Binary Substrings with Corners as 1
Solved

Difficulty: BasicAccuracy: 53.99%Submissions: 109K+Points: 1Average Time: 20m

Given a binary string s, count the number of substrings that start and end with 1.
Examples:
Input: s = "1111"
Output: 6
Explanation: There are 6 substrings from the given string. They are "11", "11", "11", "111", "111", "1111".
Input: s = "01101"
Output: 3
Explanation: There are 3 substrings from the given string. They are "11", "101", "1101".
Constraints:
1 ≤ |s| ≤ 104

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Company Tags

FlipkartAmazon

Topic Tags

Strings

Related Interview Experiences

Flipkart Interview Experience Set 17 For Sde Ii

Related Articles

Given Binary String Count Number Substrings Start End 1

Discussions ( 284 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

keshav nandwal1 month agoSep 13, 2026 17:04 (GMT +5:30)

class Solution {
public:
int binarySubstring(string& s) {
// code here
int cnt1 = 0;
for (char bit:s) {
if (bit == '1')cnt1++;
}
return (cnt1*(cnt1 - 1))/2;
}
};

0

Reply

Aman Kumar1 month agoSep 10, 2026 13:25 (GMT +5:30)

class Solution {
public int binarySubstring(String s) {
// code here
int countSubString=0;

for(int i =0;i<s.length();i++){

if(s.charAt(i)=='1'){
countSubString++;
}

}

int binarySub= (countSubString*(countSubString-1))/2;

return binarySub;
}
}

0

Reply

Sarika Kumar1 month agoAug 27, 2026 19:14 (GMT +5:30)

class Solution:
def binarySubstring(self, s):
count = 0
for i in range(len(s)):
for j in range(i+1, len(s)):
if s[i] == '1'and s[j] == '1':
count+=1
return count

0

Reply

Pooja S3 months agoJul 07, 2026 18:23 (GMT +5:30)

class Solution {
public int binarySubstring(String s) {
// code here
int n=s.length();
int co=0;

for(int i=0;i<n;i++){
if(s.charAt(i)=='1'){
co++;
}
}
int sum=0;
co--;
while(co>0){
sum+=co;
co--;
}return sum;
}
}

0

Reply

Anamik5 months agoApr 30, 2026 15:19 (GMT +5:30)

import math

class Solution:
def binarySubstring(self, s):
return math.comb(s.count('1'),2)

0

Reply

Adithya Gugloth6 months agoApr 07, 2026 10:05 (GMT +5:30)

class Solution {
int binarySubstring(String s) {
int ones = 0;

for (int i = 0; i < s.length(); i++) {
if (s.charAt(i) == '1') {
ones++;
}
}

return ones * (ones - 1) / 2;
}
}

0

Reply
(Show 1 Replies)

Alok singh7 months agoMar 24, 2026 00:57 (GMT +5:30)

class Solution {
public:
int binarySubstring(string& s) {
// code here
int count = 0;
int n  = s.size();
for(int i = 0;i<n;i++){
if(s[i]=='1'){
for(int j = i+1;j<n;j++){
if(s[j]=='1'){
count++;
}
}
}

}
return count;

}
};

0

Reply

Anonymous_Geek7 months agoMar 12, 2026 00:09 (GMT +5:30)

// C++ Solution

class Solution {
public:
int binarySubstring(string& s) {
// code here
if(s.size()<2){
return 0;
}
long count =0;
for(int i=0;i<s.size();i++){
if(s[i]=='1'){
count++;
}
}
return (count*(count-1))/2;
}
};

1

Reply

Manvith Ajay Peta7 months agoMar 03, 2026 11:46 (GMT +5:30)

class Solution {
public int binarySubstring(String s) {
// code here
int ones=0;
for(char c: s.toCharArray()){
if(c=='1')ones++;
}
return ones*(ones-1)/2;
}
}

0

Reply

THODUPUNOORI SAI ESHWAR7 months agoFeb 28, 2026 15:40 (GMT +5:30)

class Solution {
public int binarySubstring(String s) {
// code here
int ones=0;
for(char c: s.toCharArray()){
if(c=='1')ones++;
}
return ones*(ones-1)/2;
}
}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1120 / 1120
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:96

Time Taken0.04

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
15
16
17
18
19
20
21
22
23

class Solution:
def binarySubstring(self, s):
# 1. Count the total number of '1's in the string
n = s.count('1')

# 2. Calculate pairs using the combination formula (nC2)
# Using integer division '//' to return a whole number
return (n * (n - 1)) // 2

# class Solution:
#     def binarySubstring(self, s):
#         count = 0

#         for i in range(len(s)):
#             for j in range(i + 1, len(s)):
#                 # Just check if the start index and end index are both '1'
#                 if s[i] == '1' and s[j] == '1':
#                     count += 1

#         return count

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1120 / 1120
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:96

Time Taken0.04

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Binary Substrings with Corners as 1](https://www.geeksforgeeks.org/problems/binary-string-1587115620/1)
