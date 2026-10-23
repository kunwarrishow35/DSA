# Lowercase to Uppercase

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

Lowercase to Uppercase
Solved

Difficulty: BasicAccuracy: 74.85%Submissions: 42K+Points: 1

Given a string s containing only lowercase English letters, convert all its characters to uppercase and return the resulting string.
Examples:
Input: s = "geeks"
Output: GEEKS
Explanation: All lowercase characters are converted to their corresponding uppercase characters.
Input: s = "geeksforgeeks"
Output: GEEKSFORGEEKS
Explanation: Each lowercase character in the string is converted to uppercase.

Constraints:
1 ≤ s.size() ≤ 105
s consists only of lowercase English alphabets

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Topic Tags

Strings

Related Articles

Lower Case Upper Case Interesting Fact

Discussions ( 145 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Anonymous_Geek(Edited)21/03/2026, 14:06
7 months agoMar 21, 2026 14:06 (GMT +5:30)

1 line Java solution -

String to_upper(String str) {
// code here
return new StringBuilder(str.toUpperCase()).toString();
}

0

Reply

Shaik Jasmin7 months agoMar 09, 2026 09:58 (GMT +5:30)

char arr[]=new char[str.length()];

for ( int i=0;i<str.length();i++){
if(str.charAt(i)>='a' && str.charAt(i)<='z')
arr[i]=(char)(str.charAt(i)-32);
else
arr[i]=str.charAt(i);
}

String result =new String(arr);
return result;

0

Reply

Kausal Jain7 months agoMar 01, 2026 00:41 (GMT +5:30)

class Solution {
String to_upper(String str) {

char arr[]=new char[str.length()];

for ( int i=0;i<str.length();i++){
if(str.charAt(i)>='a' && str.charAt(i)<='z')
arr[i]=(char)(str.charAt(i)-32);
else
arr[i]=str.charAt(i);
}

String result =new String(arr);
return result;
}
}

0

Reply

Amit Maurya9 months agoJan 17, 2026 08:37 (GMT +5:30)

String to_upper(String str) {
StringBuilder sb=new StringBuilder();
for(int i=0;i<str.length();i++){
sb.append((char)(str.charAt(i)-32));
}
return sb.toString();

}

1

Reply

Beesu Naga Durga Neelasa1 year agoOct 19, 2025 17:55 (GMT +5:30)

// User function Template for Java
class Solution {
String to_upper(String str) {
// code here

if(str.charAt(0) >= 65 || str.charAt(0) <= 90)
{
return str.toUpperCase();

}
return str.toLowerCase();
}
}

0

Reply

Sai Vishnu Vardhan Bathini1 year agoOct 19, 2025 15:25 (GMT +5:30)

For Python3 Platform

class Solution:
def to_upper(self, str):
return str.upper()

1

Reply
(Show 1 Replies)

Disha Saha1 year agoSep 21, 2025 15:16 (GMT +5:30)

// User function Template for Java
class Solution {
String to_upper(String str) {
// code here
return str.toUpperCase();
}
}

0

Reply

Hemant Shinde1 year agoSep 01, 2025 23:07 (GMT +5:30)

#User function Template for python3
class Solution:
def to_upper(self, str):
# code here
return str.upper()

0

Reply

Ayush singh1 year agoAug 25, 2025 13:29 (GMT +5:30)

class Solution {
String to_upper(String str) {
// code here
return str.toUpperCase();
}
}

1

Reply

Akanksha Yadav1 year agoAug 09, 2025 22:44 (GMT +5:30)

string to_upper(string str) {
for(int i=0; i<str.size(); i++){
str[i] = str[i] - 'a' + 'A';
}
return str;
}

OR

string to_upper(string str) {
for(int i=0; i<str.size(); i++){
str[i] = toupper(str[i]);
}
return str;
}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:101

Time Taken0.04

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

class Solution:
def toUpper(self, s: str) -> str:
# code here

return s.upper()

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:101

Time Taken0.04

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Lowercase to Uppercase](https://www.geeksforgeeks.org/problems/lower-case-to-upper-case3410/1)
