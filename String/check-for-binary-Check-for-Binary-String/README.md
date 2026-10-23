# Check for Binary String

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

Check for Binary String
Solved

Difficulty: BasicAccuracy: 30.94%Submissions: 167K+Points: 1

Given a non-empty sequence of characters s, return true if sequence is Binary, else false.
Examples:
Input: s = "101"
Output: true
Explanation: Since string contains only '0' and '1', output is true.

Input: s = "75"
Output: false
Explanation: Since string contains digits other than '0' and '1', output is false.

Constraints:
1 ≤ s.size() ≤ 105

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Topic Tags

Strings

Related Articles

Check For Binary String

Discussions ( 333 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

HARSH MALIK1 week agoOct 09, 2026 12:19 (GMT +5:30)

class Solution:
def isBinary(self, s):
if s == "" or s == " ":
return False

for i in s :
if i in ['2' ,'3' ,'4' , '5' ,'6','7','8','9']:
return False
return True

1

Reply

Aman Kumar1 month agoSep 09, 2026 16:13 (GMT +5:30)

class Solution {
public boolean isBinary(String s) {
// code here
int n= s.length();

for(int i=0;i<n;i++)
{

char ch =s.charAt(i);

if(ch !='0' && ch !='1'){

return false;
}

}

return true;

}
}

0

Reply

Sachin Kumar1 month agoAug 26, 2026 09:49 (GMT +5:30)

class Solution {
public:
bool isBinary(string& s) {
// code here
for (int i = 0; i < s.length(); i++) {
if (s[i] != '1' && s[i] != '0') {
return false;
}
}
return true;
}
};

0

Reply

Shubham Kumar2 months agoAug 08, 2026 19:49 (GMT +5:30)

class Solution {
public boolean isBinary(String s) {
// code here
for(int i = 0; i<s.length(); i++){
if(s.charAt(i) != '1' && s.charAt(i) != '0'){
return false;
}
}
return true;
}
}

0

Reply

shubham singh2 months agoJul 25, 2026 17:58 (GMT +5:30)

class Solution {
isBinary(s) {
// code here

for(let i=0;i<s.length;i++){
if(s[i]!="1" && s[i]!="0")
return false;
}
return true;
}
}

0

Reply

Shivsingh chauhan3 months agoJul 15, 2026 15:01 (GMT +5:30)

class Solution {

public boolean isBinary(String s) {

// code here

for (int i = 0; i <= s.length() - 1; i++) {

char curr = s.charAt(i);

if (!(curr == '0' || curr == '1')) {

return false;

}

}

return true;

}

}

1

Reply
(Show 1 Replies)

raj5 months agoApr 28, 2026 23:09 (GMT +5:30)

hI

0

Reply
(Show 2 Replies)

Adithya Gugloth6 months agoApr 07, 2026 09:54 (GMT +5:30)

class Solution {
boolean isBinary(String s) {
// Your code here
for (int i = 0; i < s.length(); i++) {
if (s.charAt(i) != '0' && s.charAt(i) != '1') {
return false;
}
}
return true;
}
}

0

Reply

VINIT KUMAR6 months agoApr 04, 2026 22:39 (GMT +5:30)

class Solution {
boolean isBinary(String s) {
// Your code here
for(int i=0;i<s.length();i++) {
char ch=s.charAt(i);
if(ch !='0' && ch !='1') {
return false;
}
}
return true;
}
}

0

Reply

SNIGDHA KAPULA6 months agoApr 02, 2026 15:29 (GMT +5:30)

class Solution {
public:
bool isBinary(string& s) {
// Your code here
//string s = length.size();
for(int i= 0 ;i<s.size();i++){
if(s[i] != '0' && s[i] != '1'){
return false;
}
}
return true;
}
}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed102 / 102
Attempts : Correct / Total3 / 5Accuracy : 60%

Time Taken0.03

You get marks only for the first correct submission if you solve the problem without viewing the full solution.

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

class Solution:
def isBinary(self, s):
# code here
# for i in s:
#     if i != '0' and i != '1':
#         return False
# return True

return set(s).issubset({'0', '1'})

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed102 / 102
Attempts : Correct / Total3 / 5Accuracy : 60%

Time Taken0.03

You get marks only for the first correct submission if you solve the problem without viewing the full solution.

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Check for Binary String](https://www.geeksforgeeks.org/problems/check-for-binary/1)
