# First Letter of Every Word

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

First Letter of Every Word
Solved

Difficulty: BasicAccuracy: 71.6%Submissions: 54K+Points: 1

Given a string s, the task is to create a string with the first letter of every word in the string. The string s contains lower case English alphabets and its words have a single space between them.

Examples:

Input: s = "geeks for geeks"
Output: gfg
Explanation:
First word starts at index 0, take 'g'
After first space, next word starts with 'f'
After second space, next word starts with 'g'

Input: s = "bad is good"
Output: big

Constraints:
1 ≤ |s| ≤ 105

Expected Complexities

Time Complexity: O(|S|)
Auxiliary Space: O(|S|)

Company Tags

Amazon

Topic Tags

Strings

Related Articles

Cpp Program To Print The First Letter Of Each Word Of A StringPrint First Letter Word String Using RegexString Containing First Letter Every Word Given String Spaces

Discussions ( 408 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Nikhil(Edited)17/09/2026, 07:19
1 month agoSep 17, 2026 07:19 (GMT +5:30)

## Python code

class Solution:

def firstAlphabet(self, s):

return ''.join(word[0] for word in s.split())

0

Reply

keshav nandwal1 month agoSep 13, 2026 21:58 (GMT +5:30)

class Solution {
public:
string firstAlphabet(string &s) {
// code here
int n = s.size();
string ans = "";
for (int i = 0; i<n; ++i) {
if (i == 0 || s[i - 1] == ' ') {
ans += s[i];
}
}
return ans;
}
};

0

Reply

Sankeerthana1 month agoSep 08, 2026 19:08 (GMT +5:30)

class Solution {
String firstAlphabet(String s) {
// code here
String ans="";
for(int i=0;i<s.length();i++){
if(i==0)
ans+=s.charAt(i);
if(s.charAt(i)==' ')
ans=ans+s.charAt(i+1);
}
return ans;
}
}

0

Reply

Manav Kumar1 month agoAug 26, 2026 16:03 (GMT +5:30)

class Solution {
String firstAlphabet(String s) {
// code here
StringBuilder sb = new StringBuilder();

sb.append(s.charAt(0));

for(int i = 1 ; i < s.length() ; i++){

if(s.charAt(i) == ' ' && i < s.length()-1){

sb.append(s.charAt(i+1));
}
}

return sb.toString();
}
};

0

Reply

Ankit Gupta2 months agoAug 11, 2026 11:43 (GMT +5:30)

class Solution {
String firstAlphabet(String s) {

String res = "" + s.charAt(0);
for(int i=1;i<s.length();i++){
if(s.charAt(i)==' ')
res+=s.charAt(i+1);
}
return res;

}
};

0

Reply

DAYAPULI SRINIVASULA RAO5 months agoMay 24, 2026 14:36 (GMT +5:30)

#User function Template for python3

class Solution:

def firstAlphabet(self, s):

# code here

l=s.split()

str1=''

for i in l:

x=i[0]

str1=str1+x

return str1

2

Reply

Swagger5 months agoMay 16, 2026 20:45 (GMT +5:30)

flag = False

output = s[0]

for i in range(len(s)):

if(flag == True):

output += s[i]

flag = False

if(s[i]== " "):

flag = True

return output

0

Reply

Adithya Gugloth6 months agoApr 07, 2026 09:55 (GMT +5:30)

class Solution {
String firstAlphabet(String S) {
String res = "" + S.charAt(0);
for (int i = 1; i < S.length(); i++)
if (S.charAt(i - 1) == ' ')
res += S.charAt(i);
return res;
}
}

0

Reply

VINIT KUMAR6 months agoApr 04, 2026 23:09 (GMT +5:30)

class Solution {
String firstAlphabet(String S) {
String[] words =S.split(" ");
String result=" ";
for(String word : words) {
result +=word.charAt(0);
}
return result;
}
}

0

Reply

Anonymous_Geek7 months agoMar 28, 2026 15:47 (GMT +5:30)

#User function Template for python3

class Solution:

def firstAlphabet(self, S):

# code here

arr=S.split()

l=len(arr)

b=''

for i in range(0,l):

b=b+(arr[i][0])

return b

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed210 / 210
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:110

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
6
7

class Solution:
def firstAlphabet(self, s):
# code here
res = ''
for ch in s.split():
res += ch[0]
return res

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed210 / 210
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:110

Time Taken0.04

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[First Letter of Every Word](https://www.geeksforgeeks.org/problems/print-first-letter-of-every-word-in-the-string3632/1)
