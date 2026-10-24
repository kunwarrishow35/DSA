# One Line Code for Java : -

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

Concatenate and Reverse
Solved

Difficulty: BasicAccuracy: 60.84%Submissions: 42K+Points: 1

Given two strings s1 and s2 as input, concatenate two strings and then reverse the joined string.

Examples:

Input: s1 = "Geeks" , s2 = "forGeeks"
Output: "skeeGrofskeeG"
Explanation: Concatenating s1 and s2 to get "GeeksforGeeks" then reversing it to "skeeGrofskeeG".

Input: s1 = "Practice" , s2 = "Geeks"
Output: "skeeGecitcarP"
Explanation: Concatenating s1 and s2 to get "PracticeGeeks" then reversing it to"skeeGecitcarP".

Constraints:
1 ≤ |s1| ≤103
1 ≤ |s2| ≤103

Expected Complexities

Time Complexity: O(|s1| + |s2|)
Auxiliary Space: O(|s1| + |s2|)

Topic Tags

StringsJava

Related Articles

String Class In Java

Discussions ( 279 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

PATHIREDDI VARA KALYAN3 months agoJun 30, 2026 16:10 (GMT +5:30)

class Solution {
static String conRevstr(String s1, String s2) {
String s3=s1+s2;
StringBuilder s4=new StringBuilder(s3);
s4.reverse();
return s4.toString();
}
}

1

Reply

DAYAPULI SRINIVASULA RAO5 months agoMay 24, 2026 19:19 (GMT +5:30)

class Solution:
def conRevstr(self, s1: str, s2: str) -> str:
# code here
return (s1 + s2)[::-1]

1

Reply

Rutik Jadhav(Edited)03/04/2026, 00:36
6 months agoApr 03, 2026 00:33 (GMT +5:30)

One Line Code for Java : -
class Solution {
static String conRevstr(String S1, String S2) {
// code here
return new StringBuilder(S1.concat(S2)).reverse().toString();
}
}

0

Reply

Chanalu Vaishnavi7 months agoMar 26, 2026 12:26 (GMT +5:30)

// User function template for Java

class Solution {
static String conRevstr(String S1, String S2) {
String res=S1+S2;
StringBuilder sb=new StringBuilder(res);
sb.reverse();
return sb.toString();
}
}

0

Reply

Sai Vishnu Vardhan Bathini7 months agoMar 03, 2026 09:39 (GMT +5:30)

For Java21 Platform

class Solution
{
static String conRevstr(String s1, String s2)
{
String con = s1 + s2;
int n = con.length();
String result = "";

for(int i=n-1; i>=0; i--)
result += con.charAt(i);

return result;
}
}

0

Reply

Anonymous_Geek8 months agoFeb 12, 2026 14:48 (GMT +5:30)

Python

class Solution:
def conRevstr (ob, S1, S2):

s = S1+S2
res = ''

for i in range(len(s) - 1, -1, -1):
res += s[i]

return res

0

Reply

Anonymous_Geek9 months agoJan 13, 2026 14:16 (GMT +5:30)

res=S1+S2
return res[::-1]

0

Reply

Md Musharraf Qurishi9 months agoJan 03, 2026 19:35 (GMT +5:30)

// User function template for Java

class Solution {
static String conRevstr(String S1, String S2) {
// code here
String c = S1+S2;
StringBuilder sb = new StringBuilder(c);
return sb.reverse().toString();//using inbuilt function;
}
}

0

Reply

Lavanya R9 months agoDec 30, 2025 22:31 (GMT +5:30)

class Solution {
static String conRevstr(String S1, String S2) {
// code here
String c = S1+S2;
StringBuffer sb = new StringBuffer(c);
return sb.reverse().toString();
}
}

0

Reply

Akshaya sri Dameruppula10 months agoDec 27, 2025 10:57 (GMT +5:30)

class Solution:
def conRevstr (ob, S1, S2):
# code here
S3=S1+S2
return S3[::-1]

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed100 / 100
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:115

Time Taken0.02

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
def conRevstr(self, s1: str, s2: str) -> str:
# code here
new = s1+s2
return new[::-1]

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed100 / 100
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:115

Time Taken0.02

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[One Line Code for Java : -](https://www.geeksforgeeks.org/problems/java-strings-set-15112/1)
