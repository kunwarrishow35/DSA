# Sum Of Digits

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

Sum Of Digits
Solved

Difficulty: EasyAccuracy: 67.08%Submissions: 133K+Points: 2

Given a positive number n. Find the sum of all the digits of n.

Examples:

Input: n = 687
Output: 21
Explanation: Sum of 687's digits: 6 + 8 + 7 = 21

Input: n = 12
Output 3
Explanation: Sum of 12's digits: 1 + 2 = 3

Constraints:
1 <= n <= 105

Expected Complexities

Time Complexity: O(log n)
Auxiliary Space: O(1)

Company Tags

Drishti-Soft

Topic Tags

Number Theory

Related Articles

Program For Sum Of The Digits Of A Given Number

Discussions ( 182 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Ashish Kumar1 week agoSep 05, 2026 02:16 (GMT +5:30)

class Solution {
public:
int sumOfDigits(int n) {
// code here
int sum = 0;

while(n>0) {
int digit = n%10;
sum += digit;
n = n/10;
}
return sum;
}
};

0

Reply

shakil hossain1 week agoSep 02, 2026 14:02 (GMT +5:30)

sumOfDigits(n) {
// code here
const str = String(n).slice("")
let total = 0;
for(let i = 0; i < str.length; i++){
total = total + parseInt(str[i])
}
return total
}

0

Reply

Chirag Dangi2 weeks agoAug 24, 2026 16:10 (GMT +5:30)

int sumOfDigits(int n) {
if (n == 0)
return 0;
return (n % 10) + sumOfDigits(n / 10);}

0

Reply

Chirag Dangi2 weeks agoAug 24, 2026 16:10 (GMT +5:30)

int sumOfDigits(int n) {
if (n == 0)
return 0;
return (n % 10) + sumOfDigits(n / 10);}

0

Reply

Chirag Dangi2 weeks agoAug 24, 2026 16:10 (GMT +5:30)

int sumOfDigits(int n) {
if (n == 0)
return 0;
return (n % 10) + sumOfDigits(n / 10);}

0

Reply

Amodinee Nagrale3 weeks agoAug 19, 2026 22:20 (GMT +5:30)

class Solution {
public:
int sumOfDigits(int n) {
// code here
int lastdig;
int sum=0;

while(n>0){
lastdig=n%10;
sum=sum+lastdig;
n=n/10;
}
return sum;
}
};

0

Reply

Priyanshu Keshari1 month agoAug 10, 2026 23:09 (GMT +5:30)

class Solution {
public:
int sumOfDigits(int n) {
// code here
int sum=0;
while(n>0){
int ld=n%10;
sum+=ld;
n/=10;
}
return sum;
}

};

0

Reply

DUBEYJI4 months agoMay 13, 2026 12:32 (GMT +5:30)

class Solution {
static int sumOfDigits(int n) {
// code here
int sum = 0;
while(n !=0){
sum += n % 10;
n = n /10;
}
return sum; }
}

0

Reply

somil  sharma4 months agoMay 13, 2026 12:32 (GMT +5:30)

class Solution {
static int sumOfDigits(int n) {
int sum =  0;
while(n  != 0){
sum += n % 10;
n  = n /10;
}
return  sum;
}
}

0

Reply

Anonymous_Geek4 months agoMay 13, 2026 08:27 (GMT +5:30)

Code Method 1 : LOOP

class Solution {
static int sumOfDigits(int n) {
// code here
int sum = 0;
while(n != 0){
sum += n % 10;
n = n / 10;
}
return sum;

}
}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed260 / 260
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:16

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
9

class Solution:
def sumOfDigits(self, n):
sum = 0

while n > 0:
sum += n % 10
n = n // 10

return sum

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed260 / 260
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:16

Time Taken0.03

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Sum Of Digits](https://www.geeksforgeeks.org/problems/sum-of-digits1742/1)
