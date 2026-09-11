# Nth Fibonacci Number

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

Nth Fibonacci Number
Solved

Difficulty: BasicAccuracy: 22.3%Submissions: 425K+Points: 1

Find the n-th Fibonacci number for a given non-negative integer n.
The Fibonacci sequence is defined as:

F(0) = 0

F(1) = 1

F(n) = F(n - 1) + F(n - 2) for n ≥ 2

Examples :

Input: n = 5
Output: 5
Explanation: The 5th Fibonacci number is 5.

Input: n = 0
Output: 0
Explanation: The 0th Fibonacci number is 0.

Input: n = 1
Output: 1
Explanation: The 1st Fibonacci number is 1.

Constraints:
0 ≤ n ≤ 45

Expected Complexities

Time Complexity: O(log n)
Auxiliary Space: O(log n)

Company Tags

AmazonMicrosoftOYO RoomsSnapdealMakeMyTripGoldman SachsMAQ SoftwareAdobe

Topic Tags

MathematicsFibonacci

Related Interview Experiences

Makemytrip Interview Experience Set 11 Developer Position

Related Articles

Cpp Program For Fibonacci NumbersProgram For Nth Fibonacci Number

Discussions ( 746 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

David Loskota3 years agoAug 14, 2023 03:59 (GMT +5:30)

Fibonacci number iteration vs recursion:

It's safer to take the iterative approach, as it is easily solved at O(n) time with O(1) space.
Recursive formula alone

fib(n) = fib(n-1) + fib(n-2)

leads to exponential complexity without extra measures (around O(1.6^n), 1.6 meaning golden ratio). That's because the formula will do many duplicate calls.

fib(n) = fib(n-1) + fib(n-2)
//second level
fib(n-1) = fib(n-2) + fib(n-3)
fib(n-2) = fib(n-3) + fib(n-4)
//third level
fib(n-2) = fib(n-3) + fib(n-4)
fib(n-3) = fib(n-4) + fib(n-5)
fib(n-3) = fib(n-4) + fib(n-5)
fib(n-4) = fib(n-5) + fib(n-6)

How to solve that? Dynamic programming.
Make a container with random access (such as allocating an array or using vector) to save all Fibonacci numbers along the way to the base case and before going deeper in recursion, check your array for pre-computed numbers. This reduces exponential time complexity down to O(n). The downside is, compared to iterative approach, we need O(n) space for saving array and stack space for recursive calls. But wait...
Having array with saved results can be beneficial in both iterative and recursive approach (note: it does not apply to the problem given here). If we use it in our program and we're calling our Fibonacci function often, we're computing the same numbers over and over again. It's pretty similar problem to solving recursion above. Well, you can set up an array such that it is not deleted when function ends, serving as a cache memory. Then, for unknown numbers Fibonacci function will extend our array, while known numbers will be returned immediately - amortized O(1) time complexity.

C++ solution without recursion
Time complexity: O(n)
Space complexity: O(1)

int nthFibonacci(int n){
if (n == 0)
return 0;
if (n == 1 || n == 2)
return 1;
int baseF = 1;
int baseS = 1;
const int mod = 1e9 + 7;
for (int i = 3; i <= n; ++i) {
int tmp = baseF + baseS;
baseF = baseS;
baseS = tmp % mod;
}
return baseS;
}

10

Reply

yuvakishore Varanasi10 hours agoSep 11, 2026 07:56 (GMT +5:30)

Discussion Guidelines<button aria-label="Dismiss discussion guidelines" type="button">×</button>

Please avoid posting complete solutions or full code in the comments.

Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

so many peoples send complete solution in comment section
please avoid this type of activities

because:--- students not think problem , immedieatly see the answer so stop .

0

Reply

ROHIT GHORAI3 days agoSep 07, 2026 19:33 (GMT +5:30)

Java solution with Timecomplexity: n(logn)

class Solution {
static int nthFibonacci(int n) {
return nthFibonacci(n, new int[n]);
}
static int nthFibonacci(int n, int[] arr) {
if (n == 0 || n == 1) return n;
if (arr[n-1] != 0) return arr[n-1];
arr[n-1] = nthFibonacci(n - 1, arr) + nthFibonacci(n-2, arr);
return arr[n-1];
}
}

0

Reply

Aryan Kumar2 months agoJul 08, 2026 12:06 (GMT +5:30)

class Solution {
public:
int nthFibonacci(int n) {
// code here

// base case
if(n == 0 ) return 0;
if(n == 1) return 1;

return (nthFibonacci(n-1) + nthFibonacci(n-2));
}
};

1

Reply

Anonymous_Geek2 months agoJun 14, 2026 21:15 (GMT +5:30)

class Solution {
public:
int nthFibonacci(int n) {
// code here
return (int)round( (pow((1 + sqrt(5))/2,n)-pow((1 - sqrt(5))/2,n))/sqrt(5));
}
};

One line code using Binet's Formula. If you don't know about it , Just Google / ChatGPT it , simple formula .

0

Reply

saipadmasri yadavalli3 months agoJun 12, 2026 21:33 (GMT +5:30)

java codee                                                                                                     class Solution {
public int nthFibonacci(int n) {
// code here
int a=0;
int b=1;
int c=0;
for(int i=1;i<=n;i++){
c=a+b;
a=b;
b=c;
}

return a;
}
}

0

Reply

Abhimanyu kumar3 months agoJun 10, 2026 15:04 (GMT +5:30)

class Solution {
public int nthFibonacci(int n) {
// code here
//Base-Case:
if(n==0 || n==1){
return n;
}
return nthFibonacci(n-1)+nthFibonacci(n-2);
}

}

0

Reply

Komal3 months agoJun 09, 2026 15:32 (GMT +5:30)

class Solution {
public:
int nthFibonacci(int n) {
if (n == 0) return 0;
if (n == 1) return 1;

int a = 0;
int b = 1;
int c;

for (int i = 2; i <= n; i++) {
c = a+ b;
a = b;
b = c;
}
return b;

}
};

0

Reply

Tarun P3 months agoMay 19, 2026 22:20 (GMT +5:30)

PYTHON

class Solution:

def nthFibonacci(self, n: int) -> int:

# code here

p=0

q=1

while(n>0):        #the loop runs until n becomes 0

r=p+q

p=q

q=r

n -=1

return p

0

Reply

Radhika Garg(Edited)10/05/2026, 00:08
4 months agoMay 10, 2026 00:08 (GMT +5:30)

IN Java                                                                                                            class Solution {
public int nthFibonacci(int n) {
// code here
if(n<=1){
return n;
}
return nthFibonacci(n-1)+nthFibonacci(n-2);
}
}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed46 / 46
Attempts : Correct / Total1 / 2Accuracy : 50%

Points Scored 1 / 1Your Total Score:7

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
8
9
10
11
12
13
14
15
16
17
18

int nthFibonacci(int n) {
// code here
if(n<=1){
return n;
}

int a = 0;
int b = 1;
int c;
for(int i = 2; i<=n; i++){
c = a+b;
a = b;
b = c;
}
return b;

}

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed46 / 46
Attempts : Correct / Total1 / 2Accuracy : 50%

Points Scored 1 / 1Your Total Score:7

Time Taken0.01

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Nth Fibonacci Number](https://www.geeksforgeeks.org/problems/nth-fibonacci-number1335/1)
