# Delete Alternate Characters

## Problem

Courses

DSA / Placements
DA / Data Science & AI
Development
DevOps Course
GATE Prep
All Courses

Tutorials

Practice

Jobs

Switch to Light Mode

Menu

Back to Explore Page

Ask A DoubtMy Doubts

FREQUENTLY ASKED QUESTIONS

ProblemEditorialSubmissionsComments

Delete Alternate Characters
Solved

Difficulty: BasicAccuracy: 68.99%Submissions: 46K+Points: 1

Given a string s as input. Delete the characters at odd indices of the string and return the modified string.

Examples :
Input: s = "Geeks"
Output: "Ges"
Explanation: Deleted "e" at index 1 and "k" at index 3.

Input: s = "GeeksforGeeks"
Output: "GesoGes"
Explanation: Deleted e, k, f, r, e, k at index 1, 3, 5, 7, 9, 11.

Constraints:
1 ≤ s.size() ≤ 1000

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(n)

Topic Tags

StringsJava

Related Articles

Remove Odd Indexed Characters From A Given String

Discussions ( 295 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

David M(Edited)25/09/2026, 01:38
4 weeks agoSep 25, 2026 01:38 (GMT +5:30)

Python 3def delAlternate (self, s):
# code here
# Slicing solution
return s[0:len(s):2]

0

Reply

keshav nandwal1 month agoSep 13, 2026 21:24 (GMT +5:30)

class Solution {
public:
string delAlternate(string s) {
// code here
int n = s.size();
int j = 0;
for (int i = 0; i<n; ++i) {
if (!(i&1)) {
swap(s[i], s[j++]);
}
}
return s.substr(0, j);
}
};

0

Reply

MD AAKHIL2 months agoAug 19, 2026 20:35 (GMT +5:30)

class Solution {
static String delAlternate(String s) {
// code here
int n=s.length();
String str="";
for(int i=0;i<s.length();i++){
if(i%2==0){
str=str+s.charAt(i);
}
}
return str;
}
}

0

Reply

Shubham Kumar2 months agoAug 05, 2026 20:17 (GMT +5:30)

class Solution {
static String delAlternate(String s) {
// code here
StringBuilder sb = new StringBuilder("");
for(int i = 0; i<s.length(); i++){
if(i%2 ==0){
sb.append(s.charAt(i)+ "");

}

}
return sb.toString();
}
}

0

Reply

Jeeva3 months agoJul 10, 2026 22:56 (GMT +5:30)

class Solution {
static String delAlternate(String s) {
// code here
String str = "";
char[] arr = s.toCharArray();
for(int i = 0; i < arr.length; i++){
if(i % 2 == 0){
str += arr[i];
}
}
return str;
}
}

0

Reply

Vrinda6 months agoApr 10, 2026 21:34 (GMT +5:30)

class Solution {
delAlternate(S) {
// code here
let g="";
for(let i=0;i<S.length;i++)
{
if(i%2===0)
{
g=g+S[i]+"";
}
}
return g;
}
}

0

Reply

Pradipta Mandal6 months agoApr 08, 2026 23:09 (GMT +5:30)

class Solution:
def delAlternate (ob, S):
# code here
return S[::2]

0

Reply

Manish Kumar Pal7 months agoMar 28, 2026 12:24 (GMT +5:30)

// User function template for Java

class Solution {
static String delAlternate(String S) {
// code here
String sumChar = "";
for(int i = 0; i < S.length(); i++){
if(i%2==0){
sumChar += S.charAt(i);
}
}
return sumChar;
}
}

1

Reply

Chanalu Vaishnavi7 months agoMar 25, 2026 13:58 (GMT +5:30)

// User function template for Java

class Solution {
static String delAlternate(String S) {
// code here
StringBuilder sb=new StringBuilder();
for(int i=0;i<S.length();i++)
if(i%2==0)
sb.append(S.charAt(i));
return sb.toString();
}
}

0

Reply

Prinson Jose J7 months agoMar 22, 2026 11:26 (GMT +5:30)

#User function Template for python3
class Solution:
def delAlternate (ob, S):
# code here
list_str2 = []
for i in range(len(S)):
if i % 2 == 0:
list_str2.append(S[i])

s2 = ''.join(list_str2)
return s2

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed213 / 213
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:112

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

class Solution:
def delAlternate (self, s):
# code here
i = 0
res = ''
while i < len(s):
res+=s[i]
i+=2
return res

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed213 / 213
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:112

Time Taken0.03

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Delete Alternate Characters](https://www.geeksforgeeks.org/problems/java-delete-alternate-characters4036/1)
