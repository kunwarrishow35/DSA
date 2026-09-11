# Today's GFG POTD Solution ✅ in O(1)

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

My Submissions
Refresh
Time (IST)StatusMarksLangTest CasesCode2026-09-11 12:27:28RunTime Error0
c0 / 5View2026-09-11 12:26:07Wrong0
c0 / 5View

Discussions ( 245 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Gurmeet Singh3 years agoJun 21, 2023 11:34 (GMT +5:30)

Today's GFG POTD Solution ✅ in O(1)

Simple Mathematical Formula ????
1+2+3+ --- +n =n*(n+1)/2

But n is in 10^7 so when we multiply n*(n+1) -> so it will be in long range so, multiply 1LL to handle that and at the end just do %mod

So, Sum=((n*1LL*(n+1))/2)%mod

I hope you get it ????

For More Such Solutions , Join Our Community⬇️

https://telegram.me/FastForward_Coders

Code :

#define mod (int)(1e9 + 7)
int sumOfNaturals(int n)
{
return ((n*1LL*(n+1))/2)%mod;
}

9

Reply
(Show 2 Replies)

Vidit Jain3 years agoJun 21, 2023 11:07 (GMT +5:30)

CORRECT SOLUTION WITH OR WITHOUT EXPANDING USING MODULUS PROPERTIES

Sum of the first 'n' natural numbers is calculated using the formula: 1 + 2 + 3 + ... + 'n' = (n * (n + 1)) / 2.

It's important to handle the value of (n*(n+1))/2 for larger values of n by casting the result to a long data type.

(a*b)%mod = ((a%mod)*(b%mod))%mod

(a/b)%mod = ((a%mod)*((modular inverse of b)%mod))%mod

WITH EXPANDING :

int sumOfNaturals(int n) {
// code here
int mod=1e9+7;
int ans = ((((long)n*(long)(n+1))%mod)*500000004)%mod;
// 500000004 -> Modular Inverse of 2
return ans;
}

WITHOUT EXPANDING :

int sumOfNaturals(int n) {
// code here
int mod=1e9+7;
long ans=(long)n*(long)(n+1);
ans/=2;
return ans%mod;
}

Follow my telegram channel for more such daily POTD solutions with approach

https://t.me/leetcodegfgdailysolution

10

Reply

GeeksforGeeks3 years agoJun 21, 2023 10:44 (GMT +5:30)

Hi Everyone,

Thank you for reporting the fault with the test cases.
As a result, we have updated the test cases accordingly in order to avoid any ambiguity.
Please try now.

Keep Coding :)

Regards
Practice Team
GeeksforGeeks

16

Reply
(Show 3 Replies)

Shwet Patel13 hours agoSep 10, 2026 22:46 (GMT +5:30)

import java.util.Scanner;

class GFG {
public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
int n = sc.nextInt();

// code here
int sum = n*(n + 1) / 2;

System.out.println(sum);
}
}

0

Reply

Sylvester1 week agoAug 31, 2026 17:21 (GMT +5:30)

n = int(input())

# code here
sum = 0
for i in range(1, n + 1):
sum += i

print(sum)

0

Reply

JAYPRATAP SINGH DOLIYA(Edited)19/08/2026, 23:26
3 weeks agoAug 19, 2026 23:25 (GMT +5:30)

n = int(input())
print(n*(n+1)//2)

0

Reply

Siddhant   Patel1 month agoJul 26, 2026 16:07 (GMT +5:30)

Time for a recursive approach:
class GFG {
public static int Sum(int n){
if(n == 0) return 0;
if(n == 1) return 1;

return n + Sum(n-1);
}
public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
int n = sc.nextInt();
System.out.print(Sum(n));
}
}

0

Reply

KK2 months agoJul 12, 2026 16:20 (GMT +5:30)

identify pattern and solve it by using loop it's take O(n) time but using formula n*(n+1)/2 it will take O(1) time

0

Reply

Aryan Kumar2 months agoJul 08, 2026 12:10 (GMT +5:30)

#include <iostream>
using namespace std;

int main() {
int n;
cin >> n;

// code here

int sum = 0;

for(int i=1; i<=n; i++){
sum += i;
}
cout<<sum;

return 0;
}

0

Reply

saipadmasri yadavalli3 months agoJun 12, 2026 21:15 (GMT +5:30)

import java.util.Scanner;

class GFG {
public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
int n = sc.nextInt();
int sum=0;
// code here
for(int i=1;i<=n;i++){
sum=sum+i;

}
System.out.println(sum+"");
}
}

0

Reply

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed5 / 5
Attempts : Correct / Total1 / 3Accuracy : 33%

Points Scored 1 / 1Your Total Score:3

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

#include <stdio.h>

int main() {
int n;
scanf("%d", &n);

int sum = n * (n + 1) / 2;
printf("%d", sum);

return 0;
}

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed5 / 5
Attempts : Correct / Total1 / 3Accuracy : 33%

Points Scored 1 / 1Your Total Score:3

Time Taken0.01

Custom Input

## Problem Link

[Today's GFG POTD Solution ✅ in O(1)](https://www.geeksforgeeks.org/problems/reverse-coding2452/1)
