# Factorial

## Problem

Courses

Tutorials

Practice

Jobs

Switch to Dark Mode

Menu

Back to Explore Page

Ask A DoubtMy Doubts

FREQUENTLY ASKED QUESTIONS

ProblemEditorialSubmissionsComments

Factorial
Solved

Difficulty: BasicAccuracy: 40.58%Submissions: 288K+Points: 1

Given a positive integer, n. Find the factorial of n.

Examples :

Input: n = 5
Output: 120
Explanation: 1 x 2 x 3 x 4 x 5 = 120

Input: n = 4
Output: 24
Explanation: 1 x 2 x 3 x 4 = 24

Constraints:
0 ≤ n ≤ 12

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Company Tags

Morgan StanleySamsungFactSetMAQ SoftwareWipro

Topic Tags

Mathematics

Related Articles

Program For Factorial Of A Number

Discussions ( 411 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Janu Ahirwar3 days agoSep 07, 2026 15:51 (GMT +5:30)

int factorial(int n) {

int fact = 1;

for (int i = 1; i <= n; i++) {

fact = fact * i;

}

return fact;

}

0

Reply

Sylvester6 days agoSep 04, 2026 17:00 (GMT +5:30)

class Solution:
def factorial(self, n: int) -> int:
# code here
if n == 0:
return 1
return n * self.factorial(n - 1)

0

Reply

Sylvester6 days agoSep 04, 2026 16:58 (GMT +5:30)

class Solution {

factorial(n) {

// code here

if (n == 0) {

return 1;

}

return  n * this.factorial(n - 1);

}

}

0

Reply

Harshit Singhal1 week agoSep 03, 2026 15:39 (GMT +5:30)

python

0

Reply

Suman1 week agoAug 30, 2026 14:38 (GMT +5:30)

int factorial(int n) {
// code here
int fact =1;
for(int i=n; i>1;i--){
fact = fact*i;
}

return fact;

}

0

Reply

MADHAVI PORTE2 weeks agoAug 27, 2026 12:28 (GMT +5:30)

// code here
int fact = 1;
for(int i=1; i<=n; i++){
fact = fact*i;

}
return fact;

0

Reply

Vivek Singh2 weeks agoAug 26, 2026 13:36 (GMT +5:30)

class Solution {
int factorial(int n) {
int fact = 1;
for(int i=1; i<=n; i++) {
fact *= i;
}
return fact;
}

}

0

Reply

Anonymous_Geek2 weeks agoAug 26, 2026 12:24 (GMT +5:30)

int factorial(int n) {
int fact = 1;

for (int i = 1; i <= n; i++) {
fact = fact * i;
}

return fact;
}

0

Reply

Anonymous_Geek2 weeks agoAug 26, 2026 10:54 (GMT +5:30)

test

0

Reply

ai9hx37kczb3 weeks agoAug 21, 2026 11:59 (GMT +5:30)

class Solution {
public:
int factorial(int n) {
int fact=1;
for (int i=1; i<=n; i++){
fact = fact * i;
}
return fact;
}
};

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1130 / 1130
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:4

Time Taken0.01

C (gcc 5.4)
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

int factorial(int n) {
if (n == 0 || n == 1)
return 1;

return n * factorial(n - 1);
}

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1130 / 1130
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:4

Time Taken0.01

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Factorial](https://www.geeksforgeeks.org/problems/factorial5739/1)
