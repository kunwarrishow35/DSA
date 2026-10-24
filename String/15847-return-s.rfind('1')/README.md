# return s.rfind('1')

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

Last Index of One
Solved

Difficulty: BasicAccuracy: 49.01%Submissions: 125K+Points: 1Average Time: 20m

Given a string s consisting only of '0' and '1', find the last index at which '1' occurs. If '1' is not present in the string, return -1.
Examples:
Input: s = "01001"
Output: 4
Explanation: Last index of  1 in given string is 4.

Input: s = "0"
Output: -1
Explanation: Since, 1 is not present, so output is -1.

Constraints:
1 ≤ s.size() ≤ 106

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Company Tags

InMobi

Topic Tags

SearchingStrings

Related Interview Experiences

Inmobi Interview Experience Set 5 Through College Test

Related Articles

Last Index Of One

Discussions ( 381 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

LAL JI SINGH3 weeks agoOct 02, 2026 08:38 (GMT +5:30)

public int lastIndex(String s) {
int idx = -1;
for(int i=0;i<s.length();i++){
if(s.charAt(i)=='1'){
idx = i;
}
}
return idx;
}

0

Reply

Anonymous_Geek1 month agoSep 16, 2026 19:49 (GMT +5:30)

class Solution {
public:
int lastIndex(string &s) {

int n = s.length();
for (int i= n-1 ; i >= 0; i--){
if(s[i] == '1'){
return i;
}
}
return -1;

}
};

0

Reply

Ashutosh Kumar1 month agoSep 15, 2026 12:05 (GMT +5:30)

class Solution {
public:
int lastIndex(string &s) {
// code here
for(int i = s.size() -1;i>=0;i--){
if(s.at(i) == '1'){
return i;
}
}
return -1;

}
};

0

Reply

Kanchi Guru Goutham2 months agoJul 30, 2026 19:15 (GMT +5:30)

class Solution:
def lastIndex(self, s: str) -> int:
# code here
listed = []
if '1' in s:
for i in range(len(s)):
if s[i] == '1':
listed.append(i)
return max(listed)
return -1

0

Reply

shubham singh3 months agoJul 25, 2026 19:08 (GMT +5:30)

/**
* @param {string} S
* @returns {number}
*/

class Solution {
lastIndex(S) {
// code here
for(let i =S.length-1;i>=0;i--){
if(S[i]=="1")
return i;
}
return -1;
}
}

0

Reply

Shambhuraje Jagadale3 months agoJul 08, 2026 13:07 (GMT +5:30)

return s.rfind('1')

1

Reply

SHUBHANG  S RAO3 months agoJun 27, 2026 09:39 (GMT +5:30)

class Solution {
public:
int lastIndex(string s) {
/* APPROACH-1
for(int i=s.size()-1;i>=0;i--){
if(s[i]=='1'){return i;}
}
return -1; */

int index=-1;
for(int i=0;i<s.size();i++){
if(s[i]=='1'){index=i;}
}
return index;
}
};

0

Reply

Adithya Gugloth6 months agoApr 07, 2026 09:55 (GMT +5:30)

class Solution {
public int lastIndex(String s) {
for (int i = s.length() - 1; i >= 0; i--) {
if (s.charAt(i) == '1') {
return i;
}
}
return -1;
}
}

0

Reply

VINIT KUMAR6 months agoApr 04, 2026 22:52 (GMT +5:30)

class Solution {
public int lastIndex(String s) {
for(int i=s.length()-1;i>=0;i--) {
if(s.charAt(i)=='1') {
return i;
}
}
return -1;
}
}

0

Reply

Anonymous_Geek7 months agoMar 17, 2026 08:09 (GMT +5:30)

class Solution {
public int lastIndex(String s) {
return s.lastIndexOf('1');
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

Points Scored 1 / 1Your Total Score:106

Time Taken0.03

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

class Solution:
def lastIndex(self, s: str) -> int:
# code here

for i in range(len(s)-1, -1, -1):
if s[i] == '1':
return i
return -1

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1120 / 1120
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:106

Time Taken0.03

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[return s.rfind('1')](https://www.geeksforgeeks.org/problems/last-index-of-15847/1)
