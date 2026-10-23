# First Occurence

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

First Occurence
Solved

Difficulty: BasicAccuracy: 46.9%Submissions: 269K+Points: 1Average Time: 20m

Given two strings txt and pat, return the 0-based index of the first occurrence of the substring pat in txt. If pat is not found, return -1.
Examples :
Input: txt = "GeeksForGeeks", pat = "Fr"
Output: -1
Explanation: "Fr" is not present in the string "GeeksForGeeks" as substring.
Input: txt = "GeeksForGeeks", pat = "For"
Output: 5
Explanation: "For" is present as substring in "GeeksForGeeks" from index 5 (0 based indexing).

Input: txt = "GeeksForGeeks", pat = "gr"
Output: -1
Explanation: "gr" is not present in the string "GeeksForGeeks" as substring.

Constraints:
1 ≤ s1.size(), s2.size() ≤ 1000

Expected Complexities

Time Complexity: O(n^2)
Auxiliary Space: O(1)

Company Tags

AmazonMicrosoftFacebookQualcomm

Topic Tags

StringsPattern SearchingDesign-Patternimplementation

Related Interview Experiences

Qualcomm Interview Set 2Qualcomm Interview Experience Set 7 Off Campus

Related Articles

Check String Substring Another

Discussions ( 937 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Kartik Borse3 weeks agoSep 26, 2026 22:34 (GMT +5:30)

class Solution {

int firstOccurence(String txt, String pat) {

// code here

StringBuilder sb = new StringBuilder(txt ) ;

return txt.indexOf(pat );

}

}

0

Reply

Tushar Vatsa3 weeks agoSep 26, 2026 11:45 (GMT +5:30)

class Solution {
int firstOccurence(String txt, String pat) {
char[] mainString = txt.toCharArray();
char[] newString = pat.toCharArray();
int finalIndex = -1;
if(txt.length() < pat.length()){
return -1;
}
for(int i = 0; i < mainString.length ; i++){
if(mainString[i] == newString[0]){
int doesExist = 1;
int newIndex = 0;
int mainIndex = i;
for(int j = 0 ; j < newString.length ; j++){
if(mainString[mainIndex] != newString[newIndex])
doesExist = -1;
newIndex++;
mainIndex++;
}
if(doesExist == 1){
finalIndex = i;
break;
}
}
}

return finalIndex;

}
}

0

Reply

Aman Kumar1 month agoSep 09, 2026 15:44 (GMT +5:30)

class Solution {

int firstOccurence(String txt, String pat) {

// code here

int n=txt.length();

int m= pat.length();

if(m>n){

return -1;

}

for (int i = 0; i<=n-m; i++) {

int j;

for (j = 0; j<m; j++) {

if (txt.charAt(i + j) != pat.charAt(j))

break;

}

if (j == pat.length()) {

return i;

}

}

return -1;

}

}

0

Reply

sumatew7a2 months agoAug 13, 2026 12:36 (GMT +5:30)

class Solution {
firstOccurence(txt, pat) {
// code here
let val = txt.includes(pat);
if(val){
val = txt.indexOf(pat)
return val
}
return -1
}
}

0

Reply

Vishw Vishwas2 months agoAug 03, 2026 20:12 (GMT +5:30)

class Solution:
def firstOccurence(self,txt,pat):
#code here
if pat in txt:
return txt.index(pat);

else:
return -1

0

Reply

shubham singh2 months agoJul 25, 2026 17:41 (GMT +5:30)

/**
* @param {string} s
* @param {string} x
* @returns {number}
*/
class Solution {
firstOccurence(txt, pat) {
// code here
// return  txt.indexOf(pat)
let n = txt.length;
let m = pat.length;
// let txt
for(let i =0;i<=n-m;i++){
if(txt.slice(i,i+m)==pat)
return i
}
return -1;
// return txt.indexOf(pat)
}
}

0

Reply

Mohammed jilani3 months agoJul 19, 2026 20:01 (GMT +5:30)

class Solution {
int firstOccurence(String txt, String pat) {
if(txt.contains(pat)){
int b=txt.indexOf(pat);
return b;
}
else{
return -1;
}

}
}

1

Reply

swaroop FF3 months agoJun 26, 2026 17:39 (GMT +5:30)

#python code (Is Doing in Python Good?)
class Solution:
def firstOccurence(self,txt,pat):
l = []*len(pat)
l2 = list(pat)
for i in range(len(txt)):
l.append(txt[i])
if len(l) == len(pat):
if l == l2:
return i - len(pat) +1
else:
l.pop(0)
return -1

0

Reply

edigas4 months agoJun 13, 2026 05:51 (GMT +5:30)

#pythoncode
def firstOccurence(self,txt,pat):
#code here
for i in range(len(txt)):
if txt[i]==pat[0]:
sstr=txt[i:i+len(pat)]
if sstr==pat:
return i
return -1

0

Reply

Shrinath L R(Edited)13/05/2026, 20:45
5 months agoMay 13, 2026 20:44 (GMT +5:30)

char[] a = txt.toCharArray();
char[] b = pat.toCharArray();

for (int i = 0; i <= a.length - b.length; i++) {

int j;

for (j = 0; j < b.length; j++) {

if (a[i + j] != b[j]) {
break;
}
}

if (j == b.length) {
return i;
}
}

return -1;

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total1 / 3Accuracy : 33%

Points Scored 1 / 1Your Total Score:91

Time Taken0.03

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

class Solution:
def firstOccurence(self,txt,pat):
#code here
k = len(pat)
for i in range(len(txt)-k+1):
if txt[i:i+k] == pat:
return i
return -1

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total1 / 3Accuracy : 33%

Points Scored 1 / 1Your Total Score:91

Time Taken0.03

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[First Occurence](https://www.geeksforgeeks.org/problems/implement-strstr/1)
