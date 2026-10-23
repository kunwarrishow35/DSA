# Count Uppercase characters

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

Count Uppercase characters

Difficulty: BasicAccuracy: 71.16%Submissions: 36K+Points: 1

Given a string s, count the total number of uppercase English letters present in it.
Examples:
Input: s = "ckjkUUYII"
Output: 5
Explanation: The uppercase characters present in the string are 'U', 'U', 'Y', 'I', and 'I'.

Input: s = "abcd"
Output: 0
Explanation: There are no uppercase characters present in the string.

Constraints:
1 ≤ s.size() ≤ 105

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Topic Tags

Strings

Related Articles

Count Of Camel Case Characters Present In A Given String

Discussions ( 236 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Himanshu Poswal1 week agoOct 09, 2026 18:22 (GMT +5:30)

class Solution:
def countCamelCase(self, s: str) -> int:
# code here
count=0
for i in range(len(s)):
if s[i]==s[i].upper():
count+=1
else:
continue
return(count)

0

Reply

Ehmed Fayaz2 months agoAug 15, 2026 22:26 (GMT +5:30)

class Sol {
int countCamelCase(String s) {
// your code here
int count=0;
for(int i=0;i<s.length();i++)
{
char ch = s.charAt(i);
if(Character.isUpperCase(ch))
{
count++;
}
}
return count;
}
}

0

Reply

Amit Maurya9 months agoJan 19, 2026 20:05 (GMT +5:30)

public static boolean isCamel(char ch){
return ch>='A' && ch<='Z';
}
int countCamelCase(String s) {
int count=0;
for(int i=0;i<s.length();i++){
if(isCamel(s.charAt(i))){
count++;
}
}
return count;

}

1

Reply

rahul mehta9 months agoJan 17, 2026 20:47 (GMT +5:30)

def countCamelCase (self,s):
# your code here
count=0
for char in s:
if 'A'<=char<='Z':
count+=1
return count

0

Reply

Sai Vishnu Vardhan Bathini9 months agoJan 06, 2026 17:59 (GMT +5:30)

For Python3 Platform

class Solution:
def countCamelCase(self, s):
count = 0

for i in s:
if(i.isupper()):
count += 1

return count

0

Reply

Akshaya sri Dameruppula10 months agoDec 26, 2025 17:53 (GMT +5:30)

class Solution:
def countCamelCase (self,s):
# your code here
ct=0
for i in s:
if i.isupper():
ct=ct+1
return ct

0

Reply

Beesu Naga Durga Neelasa1 year agoOct 19, 2025 17:52 (GMT +5:30)

// User function Template for Java

class Sol {
int countCamelCase(String s) {
// your code here

if(s.length() == 0)
{
return -1;
}
//int n = (int)
int count=0;
for(int i=0;i<s.length();i++)
{
if(s.charAt(i) >= 65 && s.charAt(i) <=90)
{
count++;
}
}
return count;
}
}

0

Reply

Mohan Krishna Kadappu1 year agoSep 02, 2025 09:32 (GMT +5:30)

#User function Template for python3

class Solution:
def countCamelCase (self,s):
# your code here
camel_case_count = 0

for char in s:
if ord(char)>=65 and ord(char)<=90:
camel_case_count += 1
else:
continue
return camel_case_count

0

Reply

Akanksha Yadav1 year agoAug 10, 2025 22:22 (GMT +5:30)

class Solution {
public:
int countCamelCase(string s) {
int cnt = 0;
for(char ch : s){
if(ch >= 65 && ch <= 91){
cnt++;
}
}
return cnt;
}
};

OR

class Solution {
public:
int countCamelCase(string s) {
int cnt = 0;
for(char ch : s){
if(ch >= 'A' && ch <= 'Z'){
cnt++;
}
}
return cnt;
}
};

0

Reply

Nishant Kumar1 year agoJun 15, 2025 22:41 (GMT +5:30)

#Python

def countCamelCase (self,s):
camel_case = 0
for char in s:
if char.isupper():
camel_case += 1
return camel_case

Python

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom Input
Problem Solved Successfully
Suggest Feedback

Test Cases Passed65 / 65
Attempts : Correct / TotalYou can see all your attempts in submission tabAccuracy : 100%

Points Scored You can see the score in submission tab
Time Taken0.35

Calculating score…

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

class Solution:
def countCamelCase(self, s: str) -> int:
# code here
count = 0
for ch in s:
if ch.isupper():
count+=1
return count

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom Input
Problem Solved Successfully
Suggest Feedback

Test Cases Passed65 / 65
Attempts : Correct / TotalYou can see all your attempts in submission tabAccuracy : 100%

Points Scored You can see the score in submission tab
Time Taken0.35

Calculating score…

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Count Uppercase characters](https://www.geeksforgeeks.org/problems/find-the-camel3348/1)
