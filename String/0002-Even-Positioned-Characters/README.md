# Even Positioned Characters

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

Discussions ( 119 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Aman Kumar1 month agoSep 09, 2026 16:20 (GMT +5:30)

class Solution {
public static void utility(String s) {
// code here

int n=s.length();

for(int i=0;i<n;i+=2){

System.out.print(s.charAt(i));

}

}
}

0

Reply

Anonymous_Geek2 months agoAug 14, 2026 10:02 (GMT +5:30)

def utility(s):
#code here
# for i in s[::2]:     print(i,end="")

1

Reply

K Vijay kumar2 months agoAug 13, 2026 10:35 (GMT +5:30)

def utility(s):
#code here
# for i in s[::2]:
#     print(i,end="")
for i in range(len(s)):
if i%2==0:
print(s[i],end="")

1

Reply
(Show 2 Replies)

rajib mistry2 months agoAug 04, 2026 13:58 (GMT +5:30)

def utility(s):
#code here
n = len(s)
for i in range(n):

if i%2 == 0:
print(s[i],end= "")

1

Reply

GATTU JITHIN2 months agoAug 04, 2026 11:19 (GMT +5:30)

def utility(s):
#code here
for i in range(len(s)):
if i%2 ==0:
print(s[i],end="")

0

Reply

Anurag Maurya2 months agoAug 02, 2026 15:44 (GMT +5:30)

void utility(string s) {
// length of string is given by s.length()
// character at any index i is given by s[i]

// Write your code here
for(int i = 0; i<s.length();i++){
if(i%2==0){
cout<<s[i];
}
}
}

0

Reply

Ayush kumar(Edited)02/08/2026, 10:00
2 months agoAug 02, 2026 09:58 (GMT +5:30)

look all codes in comments are tough
Let me explain
for(int i=0; i< s.length();i++){
if(i%2==0){
S.o.p(s.charAt(i));
}
}

0

Reply

Kanchi Guru Goutham2 months agoAug 01, 2026 23:18 (GMT +5:30)

def utility(s):
#code here
for i in range(len(s)):
if i%2 ==0:
print(s[i],end="")

0

Reply

Lily2 months agoJul 29, 2026 14:33 (GMT +5:30)

class Solution {

public static void utility(String s) {

// code here

for(int i = 0;i < s.length();i++){

char ch = s.charAt(i);

if(i % 2 == 0){

System.out.print(ch);

}

}

}

}

1

Reply

shruti gupta3 months agoJul 11, 2026 20:29 (GMT +5:30)

in for loop increment value of i by 2 for the even indexes

1

Reply

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed99 / 99
Attempts : Correct / Total2 / 3Accuracy : 66%

Time Taken0.02

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

def utility(s):
# res = ""
# for i in range(0, len(s), 2):
#     res += s[i]
# print(res, end = "")

print(s[::2], end="")

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed99 / 99
Attempts : Correct / Total2 / 3Accuracy : 66%

Time Taken0.02

You get marks only for the first correct submission if you solve the problem without viewing the full solution.

Custom Input

## Problem Link

[Even Positioned Characters](https://www.geeksforgeeks.org/problems/for-loop-2/1)
