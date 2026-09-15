# Count Odd and Even

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

Count Odd and Even
Solved

Difficulty: BasicAccuracy: 37.44%Submissions: 136K+Points: 1

Given an array arr[] of positive integers. The task is to return the count of the number of odd and even elements in the array.

Note: Return two elements where the first one in the count of odd & second one is the count of even.

Examples:

Input: arr[] = [1, 2, 3, 4, 5]
Output: 3 2
Explanation: There are 3 odd elements (1, 3, 5) and 2 even elements (2 and 4).

Input: arr[] = [1, 1]
Output: 2 0
Explanation: There are 2 odd elements (1, 1) and no even elements.

Constraints:
1 <= arr.size <= 106
1 <= arr[i] <= 106

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Topic Tags

Arrays

Related Articles

Count Number Even Odd Elements Array

Discussions ( 311 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Abhishek Srivastava10 hours agoSep 15, 2026 10:57 (GMT +5:30)

class Solution {
public int[] countOddEven(int[] arr) {
// Code here

int res[]=new int[2]; //static array

for(int i=0;i<arr.length;i++){
if(arr[i]%2==1){
res[0]+=1;
}
else{
res[1]+=1;
}
}
return res;
}
}

0

Reply

xiadra2fiz1 day agoSep 13, 2026 23:20 (GMT +5:30)

class Solution {
public:
pair<int, int> countOddEven(vector<int> &arr) {
// code here
int odd = 0 ; int eve = 0 ;
for(int x : arr){
if(x%2 == 0) eve++;
else odd++;
}
return {odd, eve} ;
}
};

0

Reply

Aditya Maurya1 week agoSep 06, 2026 10:55 (GMT +5:30)

class Solution {
public int[] countOddEven(int[] arr) {
// Code here
int countodd = 0;
int counteven = 0;
int i ;
for( i=0 ; i<arr.length ; i++)
if(arr[i]%2==0){
counteven = counteven + 1 ;
}
else{
countodd = countodd + 1 ;
}
return new int[]{countodd, counteven};
}
}

0

Reply

Sankeerthana2 weeks agoAug 30, 2026 22:44 (GMT +5:30)

class Solution {
public int[] countOddEven(int[] arr) {
// Code here
int oddcount=0,evencount=0;
for(int i=0;i<arr.length;i++){
if(arr[i]%2==0)
evencount++;
else
oddcount++;
}
return new int[]{oddcount,evencount};
}
}

1

Reply

Nandini Singarajupalle2 weeks agoAug 29, 2026 22:28 (GMT +5:30)

class Solution:
def countOddEven(self, arr):
odd = 0
even = 0

for i in arr:
if i % 2 == 0:
even += 1
else:
odd += 1

return odd, even

0

Reply

Anonymous_Geek3 weeks agoAug 19, 2026 22:11 (GMT +5:30)

class Solution {
public:
pair<int, int> countOddEven(vector<int> &arr) {
// code here
int oddnum=0;
int evennum=0;

for(int i=0;i<arr.size();i++){
if(arr[i]%2==0){
evennum++;
}
else if(arr[i]%2!=0){
oddnum++;
}
}
return {oddnum, evennum};
}
};

0

Reply

Ehmed Fayaz1 month agoJul 30, 2026 13:42 (GMT +5:30)

class Solution {
public int[] countOddEven(int[] arr) {
// Code here
int[] answer = {0,0};
int odd=0;
int even = 0;
for(int i=0;i<arr.length;i++)
{
if(arr[i]%2==0)
{
even++;
}
else
{
odd++;
}
}
answer[0]=odd;
answer[1]=even;
return answer;
}
}

0

Reply

Shrinath L R3 months agoMay 24, 2026 07:35 (GMT +5:30)

class Solution {
public int[] countOddEven(int[] arr) {
// Code here
int odd =0;
int even = 0;
int values[] = new int[2];
for(int i=0;i<arr.length;i++)
{
if(arr[i]%2!=0)
{
odd++;
values[0]=odd;
}

else{
even++;
values[1]=even;
}

}
return values;
}
}

0

Reply

Anonymous_Geek3 months agoMay 21, 2026 12:53 (GMT +5:30)

Create two variables:

odd = 0

even = 0

Go through the array one by one using a loop.

For each number:

If number is divisible by 2 (arr[i] % 2 == 0) → it is even → increase even

Otherwise → it is odd → increase odd

At the end:

return or print the counts

class Solution {
public int[] countOddEven(int[] arr) {
// Code here
int odd=0;
int even=0;

for(int i=0;i<arr.length;i++){
if(arr[i]%2==0){
even++;
}else{
odd++;
}
}
return new int[]{odd,even};
}
}

Using return type

Use int[] return type

Return result like this:
return new int[]{odd,even};

1

Reply

Priy Ranjan6 months agoMar 19, 2026 21:19 (GMT +5:30)

import java.util.stream.*;
import java.util.*;
class Solution {
public int[] countOddEven(int[] arr) {
int oddCount = (int)Arrays.stream(arr).filter(x -> x % 2 != 0).count();
int evenCount = (int)Arrays.stream(arr).filter(x -> x % 2 == 0).count();

return new int[] {oddCount,evenCount};

}
}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:24

Time Taken0.3

Python3
C++ (17)
Java (21)
Python3
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

class Solution:
def countOddEven(self, arr):
#Code here
odd = even = 0

for i in range(len(arr)):
if arr[i]%2 == 0:
even = even+1
else:
odd = odd+1

return odd, even

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:24

Time Taken0.3

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Count Odd and Even](https://www.geeksforgeeks.org/problems/count-odd-even/1)
