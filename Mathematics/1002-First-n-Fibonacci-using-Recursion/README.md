# First n Fibonacci using Recursion

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

First n Fibonacci using Recursion
Solved

Difficulty: BasicAccuracy: 29.92%Submissions: 290K+Points: 1

Given a number n, return an array containing the first n Fibonacci numbers.

The first two Fibonacci numbers are 0 and 1.

Each subsequent Fibonacci number is obtained by adding the previous two numbers.

Examples:

Input: n = 5
Output: [0, 1, 1, 2, 3]
Explanation: The first 5 Fibonacci numbers are 0, 1, 1, 2, 3.

Input: n = 7
Output: [0, 1, 1, 2, 3, 5, 8]
Explanation: The first 7 Fibonacci numbers are 0, 1, 1, 2, 3, 5, 8.

Input: n = 2
Output: [0, 1]
Explanation: The first 2 Fibonacci numbers are 0 and 1.

Constraints:
1 ≤ n ≤ 30

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(n)

Company Tags

InfosysWiproTCSAccenture

Topic Tags

MathematicsRecursion

Related Articles

Program To Print First N Fibonacci Numbers

Discussions ( 710 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Anonymous_Geek18 hours agoSep 25, 2026 18:08 (GMT +5:30)

class Solution {
public:
int F(int n) {
if (n == 0) return 0;
if (n == 1) return 1;

return F(n - 1) + F(n - 2);
}

vector<int> fibonacciNumbers(int n) {

vector<int> ans;

for (int i = 0; i < n; i++) {
ans.push_back(F(i));
}

return ans;
}
};

0

Reply

92goural9pp19 hours agoSep 25, 2026 17:30 (GMT +5:30)

class Solution {
public:
int ans(int n){
if(n==0)return 0;
else if(n==1) return 1;
else return ans(n-1)+ans(n-2);
}
vector<int> fibonacciNumbers(int n) {
// code here
vector<int>arr;
for(int i=0;i<n;i++){
arr.push_back(ans(i));
}
return arr;
}
};

0

Reply

Aditya Soni2 weeks agoSep 08, 2026 23:37 (GMT +5:30)

class Solution:
def fibo(self, n: int, res: list[int]) -> list[int]:
if n==2:
res.append(int(0))
res.append(int(1))
else:
self.fibo(n-1,res)
res.append(res[-1]+res[-2])
return res

def fibonacciNumbers(self, n: int) -> list[int]:
# code here
if n==1:
return [0]
elif n==2:
return [0,1]
return self.fibo(n,[])

0

Reply

Jatin Kumar2 weeks agoSep 08, 2026 11:29 (GMT +5:30)

class Solution {
public:
vector<int> fibonacciNumbers(int n) {
vector<int> ans;

if (n <= 0)
return ans;

ans.push_back(0);

if (n == 1)
return ans;

ans.push_back(1);

for (int i = 2; i < n; i++) {
ans.push_back(ans[i - 1] + ans[i - 2]);
}

return ans;
}
};

0

Reply

pratyush agrawal2 months agoJul 23, 2026 11:13 (GMT +5:30)

class Solution {
public:

int F(int n) {
if (n == 0) return 0;
if (n == 1) return 1;

return F(n - 1) + F(n - 2);
}

vector<int> fibonacciNumbers(int n) {

vector<int> ans;

for (int i = 0; i < n; i++) {
ans.push_back(F(i));
}

return ans;
}
};

0

Reply

Anonymous_Geek2 months agoJul 20, 2026 06:49 (GMT +5:30)

class Solution:
def fib(self,n):
if n == 0:
return 0
if n == 1:
return 1

return self.fib(n-1)+self.fib(n-2)

def fibonacciNumbers(self,n):
ans = []

for i in range(n):
ans.append(self.fib(i))

return ans

0

Reply

Gurukiran Nagod3 months agoJun 06, 2026 17:14 (GMT +5:30)

def fibonacciNumbers(self, n):
if n == 1:
return [0]

res = [0, 1]

for i in range(2, n):
# Sum the TWO PREVIOUS elements
next_val = res[i - 1] + res[i - 2]
res.append(next_val)

# Return OUTSIDE the loop
return res

0

Reply

Shubham(Edited)19/04/2026, 11:52
5 months agoApr 19, 2026 11:52 (GMT +5:30)

Java Recursive Solution:

class Solution {
public static int[] fibonacciNumbers(int n) {
int[] ans = new int[n];
ans[0] = 0;
if(n > 1){
ans[1] = 1;
}

for(int i = 2; i < n; i++){
ans[i] = fibbonaci(i);
}
return ans;
}

public static int fibbonaci(int n){
if(n == 0 || n == 1){
return n;
}
return fibbonaci(n - 1) + fibbonaci(n - 2);
}
}

0

Reply

Gaurav  Dungriyal6 months agoMar 29, 2026 18:42 (GMT +5:30)

Easiest Solution Using Java.
class Solution {

class Solution {
// Function to return list containing first n fibonacci numbers.
public static int[] fibonacciNumbers(int n) {
int[] fib=new int[n];
fib[0]=0;
if(n==1) return fib;
fib[1]=1;

for(int i=2;i<n;i++){
fib[i]=fib[i-1]+fib[i-2];
}
return fib;
}
}

2

Reply

Sri Arun Kumar Voorella6 months agoMar 23, 2026 19:50 (GMT +5:30)

class Solution {
// Function to return list containing first n fibonacci numbers.
public static int[] fibonacciNumbers(int n) {
// Your code here
int fqi[] = new int[n];
int num1 = 0, num2 =1;
int sum = 0;

for(int i =0 ;i< n;i++){
fqi[i] = num1;
sum = num1 +num2;
num1 = num2;
num2 = sum;

}
return fqi;
}
}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed30 / 30
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:66

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
10
11
12
13
14
15

class Solution:
def fibonacciNumbers(self, n: int) -> list[int]:
# code here
result = [0, 1]
if n == 1:
return [0]
elif n==2:
return result
else:
for i in range(2, n):
result.append(result[i-1]+result[i-2])

return result

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed30 / 30
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:66

Time Taken0.03

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[First n Fibonacci using Recursion](https://www.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1)
