# Concatenate a List of Characters

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

Concatenate a List of Characters
Solved

Difficulty: BasicAccuracy: 63.69%Submissions: 33K+Points: 1

Given an array arr[] of lower case English characters as strings, merge all of them into a string. Note that the size of every string in the input array is 1 only.

Examples:

Input: arr[] = ["g", "e", "e", "k", "s", "f", "o", "r", "g", "e", "e", "k", "s"]
Output: geeksforgeeks
Explanation: combined all the characters to form a single string.

Input: arr[] = ["e", "e", "b", "a"]
Output: eeba
Explanation: combined all the characters to form a single string.

Constraints:
1 ≤ |arr| ≤ 105
1 ≤ |arr[i]| ≤ 1

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(n)

Topic Tags

Strings

Related Articles

Python Convert List Characters String

Discussions ( 149 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

DAYAPULI SRINIVASULA RAO3 months agoJul 13, 2026 12:54 (GMT +5:30)

return ''.join(arr)

1

Reply

Amit Maurya9 months agoJan 17, 2026 14:31 (GMT +5:30)

class Solution {
public String chartostr(char arr[], int N) {
StringBuilder sb=new StringBuilder();
for(int i=0;i<N;i++){
sb.append(arr[i]);
}
return sb.toString();
}
}

1

Reply

Akshaya sri Dameruppula10 months agoDec 27, 2025 10:50 (GMT +5:30)

class Solution:
def chartostr(self, arr,N):
# code here
s=""
for i in arr:
s+=i
return s

0

Reply

Sai Vishnu Vardhan Bathini11 months agoOct 31, 2025 21:30 (GMT +5:30)

For Python3 Platform

class Solution:
def chartostr(self, arr, N):
return "".join(arr)

1

Reply

VIGNESWAR R1 year agoAug 29, 2025 18:23 (GMT +5:30)

This is Java..!!

class Solution {
public String chartostr(char arr[], int N) {
return new String(arr);
}
}

0

Reply

Akanksha Yadav1 year agoAug 09, 2025 22:09 (GMT +5:30)

class Solution {
public:
string chartostr(char arr[], int n) {
string ans = "";
int i = 0;
while(i < n){
ans += arr[i];
i++;
}
return ans;
}
};

0

Reply

Anonymous_Geek1 year agoJun 26, 2025 16:21 (GMT +5:30)

cvvdfvfdvdfvdfv

0

Reply

Ramesh1 year agoJun 26, 2025 16:21 (GMT +5:30)

Javscript code Here!!

class Solution {
chartostr(arr, n) {
let rameshMCA = arr.join("");
return rameshMCA;

}
}

0

Reply

Ramesh1 year agoJun 26, 2025 16:19 (GMT +5:30)

//Javascript Code here!!!

class Solution {
chartostr(arr, n) {
let answersJune = arr.join("");
return answersJune;
// code here

}
}

0

Reply

Nishant Mishra1 year agoJun 02, 2025 11:02 (GMT +5:30)

def chartostr(self, arr,N):
res=['' if i==' ' else i for i in arr]
return ''.join(res)

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:103

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

class Solution:
def charToStr(self, arr):
# code here
return "".join(arr)

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:103

Time Taken0.04

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Concatenate a List of Characters](https://www.geeksforgeeks.org/problems/convert-a-list-of-characters-into-a-string5142/1)
