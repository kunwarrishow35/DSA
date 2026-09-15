# Array with All Palindromes

## Problem

CoursesSale

Tutorials

Practice

Jobs

Switch to Light Mode

Menu

Back to Explore Page

Ask A DoubtMy Doubts

FREQUENTLY ASKED QUESTIONS

ProblemEditorialSubmissionsComments

Array with All Palindromes

Difficulty: BasicAccuracy: 58.62%Submissions: 208K+Points: 1Average Time: 15m

Given an array arr[] of positive integers. Return true if all the array elements are palindrome otherwise, return false.
Examples:
Input: arr[] = [111, 222, 333, 444, 555]
Output: true
Explanation:
arr[0] = 111, which is a palindrome number.
arr[1] = 222, which is a palindrome number.
arr[2] = 333, which is a palindrome number.
arr[3] = 444, which is a palindrome number.
arr[4] = 555, which is a palindrome number.
As all numbers are palindrome so This will return true.
Input: arr[] = [121, 131, 20]
Output: false
Explanation: 20 is not a palindrome hence the output is false.

Constraints:
1 ≤ arr.size() ≤ 100
1 ≤ arr[i] ≤ 109

Expected Complexities

Time Complexity: O(n log n)
Auxiliary Space: O(1)

Topic Tags

Arrays

Related Articles

Check If All Elements Of The Array Are Palindrome Or Not

Discussions ( 761 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Kanchi Guru Goutham3 weeks agoAug 23, 2026 22:43 (GMT +5:30)

class Solution:
def isPalinArray(self, arr):
# code here
for n in arr:
dup = n
res = 0
while n > 0:
N = n%10
res = (res*10)+N
n = n//10
if res != dup:
return False
return True

1

Reply

Yogita Uttur3 weeks agoAug 22, 2026 16:39 (GMT +5:30)

python

class Solution:
def isPalinArray(self, arr):
# code here
for i in arr:
s=str(i)
rev=s[::-1]
if s!=rev:
return False
return True

0

Reply

Yogita Uttur3 weeks agoAug 22, 2026 16:38 (GMT +5:30)

python

0

Reply

kusum kumari1 month agoAug 08, 2026 17:11 (GMT +5:30)

java

class Solution {

public static boolean isPalinArray(int[] arr) {
// code here.
int n = arr.length;

for(int i = 0; i<n; i++){
int first = arr[i];
int reverse = 0;
while(arr[i]>0){
int last = arr[i]%10;
reverse = (reverse*10)+last;
arr[i] = arr[i]/10;
}
if(first != reverse){

return false;
}
}
return true;
}
}

0

Reply

Ranjith Gandhe1 month agoJul 23, 2026 15:03 (GMT +5:30)

class Solution:
def isPalinArray(self, arr):
a=True
for i in range(len(arr)):
n=arr[i]
b=arr[i]
rev=0
while n>0:
x=n%10
rev=rev*10+x
n=n//10
if rev!=b:
a=False
break
a=True
return a

0

Reply

Aayushi Shipra1 month agoJul 17, 2026 23:16 (GMT +5:30)

class Solution {
public static boolean isPalinArray(int[] arr) {
// code here.\
for(int i=0;i<arr.length;i++){
int y = arr[i];
int sum = 0;

while(y>0){
int last_digit = y % 10;
sum = (sum*10) + last_digit;
y = y/10;
}
if(arr[i]!=sum)
return false;
}
return true;
}
}

1

Reply

Mayank Kumar Sudhanshu2 months agoJun 25, 2026 15:22 (GMT +5:30)

class Solution {
public static boolean isPalinArray(int[] arr) {
// code here.
for(int i=0; i<arr.length; i++){
int x = arr[i];
int y =0;
while(true){
int rem =  x%10;
x /= 10;
y += rem;
if(x==0){
break;
}
y *= 10;

}
if(y != arr[i]) return false;
}

return true;
}
}

2

Reply

SAURABH MISHRA2 months agoJun 19, 2026 02:50 (GMT +5:30)

class Solution {
public static boolean isPalinArray(int[] arr) {
// code here.
for(int i=0;i<arr.length;i++) if(!pali(arr[i])) return false;
return true;
}
private static boolean pali(int num){
String s=Integer.toString(num);
int n=s.length();
int i=0,j=n-1;
while(i<=j){
if(!(s.charAt(i)==s.charAt(j)))return false;
i++;j--;
}
return true;
}
}

0

Reply

Vann Thaihour3 months agoJun 06, 2026 14:27 (GMT +5:30)

class Solution {
public:
bool isPalinArray(vector<int> &arr) {
// code here
int size=arr.size();
int count=0;
for(int i=0; i<size; i++){
int original=arr[i];
int n=arr[i];
int reverse=0;
while(n>0){
int digit=n%10;
reverse=(reverse*10)+digit;
n=n/10;
}
if(reverse==original){
count++;
}
}
if(count==size){
return true;
}
return false;

}
};

0

Reply

Manas Kumar3 months agoJun 04, 2026 16:10 (GMT +5:30)

class Solution {
private:
bool pali(int p){
int num = 0;
int real =p;
while(p!=0){
int rem = p%10;
num = num*10 + rem;
p = p/10;
}
if(real==num){
return true;
}
return false;
}
public:
bool isPalinArray(vector<int> &arr) {
// code here
for(int i=0;i<arr.size();i++){
if(!pali(arr[i])){
return false;
}
}
return true;

}
};

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom Input
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / TotalYou can see all your attempts in submission tabAccuracy : 100%

Points Scored You can see the score in submission tab
Time Taken0.04

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
9
10
11
12
13

class Solution:
def isPalinArray(self, arr):

for i in arr:
x = str(i)
if x != x[::-1]:
return False

return True

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom Input
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / TotalYou can see all your attempts in submission tabAccuracy : 100%

Points Scored You can see the score in submission tab
Time Taken0.04

Calculating score…

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Array with All Palindromes](https://www.geeksforgeeks.org/problems/palindromic-array-1587115620/1)
