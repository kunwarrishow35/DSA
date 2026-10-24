# Check if All Characters Same

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

Check if All Characters Same
Solved

Difficulty: BasicAccuracy: 42.82%Submissions: 44K+Points: 1

Given a string, check if all its characters are the same or not.

Examples:

Input: s = "geeks"
Output: false
Explanation: The string contains different character 'g', 'e', 'k' and 's'.

Input: s = "gggg"
Output: true
Explanation: The string contains only one character 'g'.

Constraints:
1 ≤ s.size() ≤ 104
s contains only lowercase English characters.

Expected Complexities

Time Complexity: O(|s|)
Auxiliary Space: O(1)

Topic Tags

Strings

Related Articles

Quick Way Check Characters String

Discussions ( 195 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Madasamy S3 months agoJul 10, 2026 23:17 (GMT +5:30)

class Sol {
Boolean check(String s) {
for (int i = 0; i < s.length(); i++) {
if (s.charAt(i) != s.charAt(0)) {
return false;   // found a character different from the first
}
}
return true;            // all characters matched the first one
}
}

0

Reply

Abhimanyu kumar6 months agoApr 10, 2026 16:52 (GMT +5:30)

class Sol {
Boolean check(String s) {
// your code here
for(int i=0;i<s.length()-1;i++){
if(s.charAt(i)!=s.charAt(i+1)){
return false;
}
}
return true;
}
}

0

Reply

Adithya Gugloth6 months agoApr 07, 2026 10:06 (GMT +5:30)

class Sol {
Boolean check(String s) {
for(int i=0;i<s.length()-1;i++){
if(s.charAt(i)!=s.charAt(i+1)){
return false;
}
}
return true;

}
}

0

Reply

RAJNATH SINGH6 months agoApr 04, 2026 12:01 (GMT +5:30)

class Sol {
Boolean check(String s) {
for(int i=0;i<s.length()-1;i++){
if(s.charAt(i)!=s.charAt(i+1)){
return false;
}
}
return true;

}
}

0

Reply

CHARAN7 months agoMar 26, 2026 12:02 (GMT +5:30)

class Sol {
Boolean check(String s) {
for(int i=0;i<s.length()-1;i++){
if(s.charAt(i)!=s.charAt(i+1)){
return false;
}
}
return true;

}
}

0

Reply

Manvith Ajay Peta7 months agoMar 03, 2026 11:49 (GMT +5:30)

class Sol {
Boolean check(String s) {
for(int i=0;i<s.length()-1;i++){
if(s.charAt(i)!=s.charAt(i+1)){
return false;
}
}
return true;

}
}

0

Reply

Mokshith Kumar7 months agoFeb 27, 2026 14:58 (GMT +5:30)

JAVA SOLUTION :                                                                                                                      class Sol {
Boolean check(String s) {
for(int i=0;i<s.length()-1;i++){
if(s.charAt(i)!=s.charAt(i+1)){
return false;
}
}
return true;

}
}

0

Reply

CHARAN Reddy8 months agoFeb 26, 2026 13:47 (GMT +5:30)

class Sol {
Boolean check(String s) {
for(int i=0;i<s.length()-1;i++){
if(s.charAt(i)!=s.charAt(i+1)){
return false;
}
}
return true;

}
}

1

Reply

247Y1A66J5 PADDA TARUN8 months agoFeb 06, 2026 14:58 (GMT +5:30)

class Sol {
Boolean check(String s) {
for(int i=0;i<s.length()-1;i++){
if(s.charAt(i)!=s.charAt(i+1)){
return false;
}
}
return true;

}
}

0

Reply

Amit Maurya9 months agoJan 17, 2026 11:28 (GMT +5:30)

class Sol {
Boolean check(String s) {
for(int i=0;i<s.length()-1;i++){
if(s.charAt(i)!=s.charAt(i+1)){
return false;
}
}
return true;

}
}

1

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:113

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

class Solution:
def allCharactersSame (self, s):
# code here
for i in s:
if i != s[0]:
return False
return True

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:113

Time Taken0.03

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Check if All Characters Same](https://www.geeksforgeeks.org/problems/check-string1818/1)
