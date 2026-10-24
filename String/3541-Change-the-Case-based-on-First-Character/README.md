# Change the Case based on First Character

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

Change the Case based on First Character
Solved

Difficulty: BasicAccuracy: 57.73%Submissions: 42K+Points: 1

Given a string s, the task is to change the complete string to uppercase or lowercase depending on the case of the first character.

Examples:

Input: s = "abCD"
Output: "abcd"
Explanation: The first letter (a) is lowercase. Hence, the complete string is made lowercase.

Input: s = "Abcd"
Output: "ABCD"
Explanation: The first letter (A) is uppercase. Hence, the complete string is made uppercase.

Constraints:
1<=|s|<=104

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Company Tags

Oracle

Topic Tags

Strings

Related Interview Experiences

Oracle Interview Experience Set 47 Campus

Related Articles

Convert Alternate Characters String Upper Case

Discussions ( 195 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Manav Kumar1 month agoAug 26, 2026 16:51 (GMT +5:30)

class Solution {
String modify(String s) {

StringBuilder sb = new StringBuilder();

for(char i : s.toCharArray()){

if(Character.isUpperCase(s.charAt(0))){

sb.append(Character.toUpperCase(i));
}else{

sb.append(Character.toLowerCase(i));
}
}
return sb.toString();
}
}

0

Reply

Satish Mewada3 months agoJul 15, 2026 09:43 (GMT +5:30)

class Solution {
public:
string modify(string& s) {
if (islower(s[0])) {
for (char &ch : s) {
ch = tolower(ch);
}
} else {
for (char &ch : s) {
ch = toupper(ch);
}
}
return s;
}
};

0

Reply

Aman   Verma8 months agoFeb 03, 2026 11:03 (GMT +5:30)

// User function Template for Java

class Solution {
String modify(String s) {

if(Character.isUpperCase(s.charAt(0))){
return s.toUpperCase();
}

return s.toLowerCase();
}

}

0

Reply

Dipanshu Adhikari9 months agoJan 26, 2026 17:51 (GMT +5:30)

// Java Code
class Solution {
String modify(String s) {
char ch = s.charAt(0);
if(Character.isUpperCase(ch)){
return s.toUpperCase();
}
return s.toLowerCase();
}
}

0

Reply

KIRUTHIKA U9 months agoJan 06, 2026 19:56 (GMT +5:30)

string modify(string& s) {
// your code here
int n=s.length();
string re="";
re+=s[0];
for(int i=1;i<n;i++)
{
if(s[0]>='A' && s[0]<='Z')
{

if(s[i]>='a' && s[i]<='z')
re+=(s[i]-32);
else
re+=s[i];
}
if(s[0]>='a' && s[0]<='z')
{

if(s[i]>='A' && s[i]<='Z')
re+=(s[i]+32);
else
re+=s[i];
}
}
return re;
}

0

Reply

Akshaya sri Dameruppula10 months agoDec 27, 2025 20:37 (GMT +5:30)

class Solution:
def modify(self, s):
# code here
if(s[0].islower()):
S=s.lower()
elif(s[0].isupper()):
S=s.upper()
return S

0

Reply

Sai Vishnu Vardhan Bathini11 months agoOct 31, 2025 13:49 (GMT +5:30)

For Python3 Platform

class Solution:
def modify(self, s):
if(s[0].isupper()):
return s.upper()
else:
return s.lower()

2

Reply

Beesu Naga Durga Neelasa1 year agoOct 19, 2025 17:52 (GMT +5:30)

// User function Template for Java

class Solution {
String modify(String s) {

if(s.length() == 0)
{
return "";
}
int n = (int)s.charAt(0);
if(n >= 65 && n <= 90)
{
return s.toUpperCase();
}
else
{
return s.toLowerCase();
}
}
}

0

Reply

Hemlata1 year agoSep 19, 2025 11:59 (GMT +5:30)

Change the String in Java

// User function Template for Java

class Solution {
String modify(String s) {
if(s.length()==0){
return"";
}
int n = (int)s.charAt(0);
if(n>=65 && n<= 90){
return s.toUpperCase();
}else{
return s.toLowerCase();
}
}
}

0

Reply

Manish1 year agoSep 02, 2025 06:16 (GMT +5:30)

Python soltuion

class Solution:
def modify(self, s):
# code here
res =''
for i in range(len(s)):

if s[0].islower():

res = res + s.lower()
break

else:
res = res + s.upper()
break

return res

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed220 / 220
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:114

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
11
12
13

class Solution:
def modify(self, s):
# code here
flag = 0
if s[0].isupper():
flag = 1
if flag == 0:
s = s.lower()
else:
s = s.upper()

return s

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed220 / 220
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:114

Time Taken0.03

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Change the Case based on First Character](https://www.geeksforgeeks.org/problems/change-the-string3541/1)
