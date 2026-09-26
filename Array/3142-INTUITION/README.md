# INTUITION:

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

Transform Array In-Place
Solved

Difficulty: MediumAccuracy: 56.34%Submissions: 139K+Points: 4

Given an integer array arr[] of size n, where each element lies in the range [0, n-1], transform the array such that every element at index i becomes:
arr[i]=arr[arr[i]].

The transformation must be performed in-place, meaning the same array should store both the original and updated values without using another array.

Examples:

Input: arr[] = [1, 0]
Output: [0, 1]
Explanation: The original array is [1, 0].
At index 0, arr[0] = 1, so the new value becomes arr[1] = 0.
At index 1, arr[1] = 0, so the new value becomes arr[0] = 1.
Thus, the transformed array becomes [0, 1].

Input: arr[] = [4, 0, 2, 1, 3]
Output: [3, 4, 2, 0, 1]
Explanation: The original array is [4, 0, 2, 1, 3].
Each element is replaced by the value at index arr[i] in the original array.
So the new values become 3, 4, 2, 0, 1 respectively, and the transformed array becomes [3, 4, 2, 0, 1].

Constraints:
1 ≤ n ≤ 4*104
0 ≤ arr[i] < n

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Company Tags

Amazon

Topic Tags

Arrays

Related Articles

Rearrange Given Array Place

Discussions ( 602 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Dipu Kumar Srivastava3 years agoJun 19, 2023 08:18 (GMT +5:30)

INTUITION:
Here, as we need to solve the given problem using O(1) space, therefore while traversing through the array, we need to store two things at each index:

Its current value (arr[i])

Its transformed value (arr[arr[i]])

Now, we have to store its transformed value obviously because that's what we are supposed to return. But along with that we also need to store its current value because for index after i whose value equals i, when they refer to this index i, they should be able to get the initial value (arr[i]) and not the updated value(arr[arr[i]]).

Now, we can achieve this using mathematical trick.

We all know:

Dividend = Divisor * Quotient + Remainder;

So when we divide dividend by Quotient later, we will obtain Divisor.

So, we will first modify our arr[i] as

arr[i]        = (arr[arr[i]]%n)*n  +    arr[i];

Divivend =   Divisor*Quotient  +  Remainder

Later when we do arr[i] / n, we get the Divisor that is arr[arr[i]]%n = arr[arr[i]] as all elements are smaller than n.

class Solution{
public:
// arr: input array
// n: size of array
//Function to rearrange an array so that arr[i] becomes arr[arr[i]]
//with O(1) extra space.
void arrange(long long arr[], int n) {
for(int i = 0; i<n; i++) {
arr[i] = arr[i] + (arr[arr[i]]%n)*n;
}
for(int i = 0; i<n; i++) {
arr[i] = arr[i]/n;
}
return;
}
};

92

Reply
(Show 3 Replies)

Vidit Jain3 years agoJun 19, 2023 00:56 (GMT +5:30)

Easy C++ Solution with Approach+Explanation || TC : O(n) || SC O(1)

Approach :

To rearrange the array elements, we can use an encoding technique that allows us to decode and obtain the original array and the required array.

Encoding: Iterate through each element of the array & encode them like this --> arr[i] += (arr[arr[i]] % mx)*mx

(where mx is an element greater than the maximum element in the array and as the elements are in a range of 0 to n-1, mx>=n, let's take mx=n).

Decoding : Iterate through each element of the array & retrieve the new value by dividing the element by mx : arr[i] /=mx.

Explanation :

Let's consider the second test case: arr = {4,0,2,1,3}.

arr[0]=4+(arr[4]%5)*5=4+3*5=19 // u may think that the mod is of no use

arr[1]=0+(arr[0]%5)*5=0+(19%5)*5 =20 // but here comes the role of mod ,as the element which is needed to encode the current element has been changed or encoded already.

Proceeding in a similar manner, we obtain the encoded array: {19,20,12,1,8}.

Obtain the required array by arr[i]/=mx OR retrieve the original one by arr[i]%=n=mx.

NOTE : This encoding / decoding technique is applicable here only because the given array is a permutation of elements starting from 0 to n-1

void arrange(long long arr[], int n) {
// Your code here
int i;
long long mx=n;
for(i=0;i<n;i++){
arr[i]=arr[i]+(arr[arr[i]]%mx)*mx;
}
for(i=0;i<n;i++){
arr[i]/=mx;
}
}

Follow my telegram channel for more such daily POTD solutions with approach/explanations.

https://t.me/leetcodegfgdailysolution

29

Reply
(Show 5 Replies)

Alok Shukla1 year agoSep 11, 2025 10:23 (GMT +5:30)

class Solution {
public void arrange(long[] arr) {
int n = arr.length;

// Encode both old and new values into arr[i]
for (int i = 0; i < n; i++) {
arr[i] = arr[i] + (arr[(int)arr[i]] % n) * n;
}

// Extract only the new values
for (int i = 0; i < n; i++) {
arr[i] = arr[i] / n;
}

}
}

0

Reply

Vignesh M1 year agoAug 24, 2025 21:12 (GMT +5:30)

Python Solution:

class Solution:
def arrange(self,arr):
a=arr.copy()
for i in range(len(arr)):
arr[i]=a[arr[i]]
return arr

1

Reply

Dr VANCHA MAHESHWAR REDDY1 year agoAug 21, 2025 10:54 (GMT +5:30)

Java Code

class Solution {
public void arrange(long[] arr) {
long n = arr.length;
for (int i = 0; i < n; i++) {
arr[i] = arr[i] + (arr[(int)arr[i]] % n) * n;
}
for (int i = 0; i < n; i++) {
arr[i] = arr[i] / n;
}
return;
}
}

0

Reply

ANKIT SINGH BTech1 year agoJun 16, 2025 18:16 (GMT +5:30)

void arrange(long long arr[], int n) {
for(int i=0;i<n;i++)arr[i]=(arr[arr[i]]%(n+1)*(n+1))+arr[i];
for(int i=0;i<n;i++)arr[i]=arr[i]/(n+1);
}

0

Reply

Karthik Patel1 year agoJun 08, 2025 19:19 (GMT +5:30)

Two approaches:

1st :

void arrange(long long arr[], int n) {
for(int i = 0;i < n;i++){
arr[i] = arr[i] + (arr[arr[i]]%n)*(long long)n;
}
for(int i = 0;i < n;i++){
arr[i] /= n;
}
}

2nd:

void arrange(long long arr[], int n) {
vector<int>res;
for(int i = 0;i < n;i++){
res.push_back(arr[arr[i]]);
}
for(int i = 0;i < n;i++){
arr[i] = res[i];
}
res.clear();
res.shrink_to_fit();
}

1

Reply

Mohamed Shahban1 year agoOct 25, 2024 12:06 (GMT +5:30)

long res[] = new long[n];
for (int i = 0; i < n; i++)
{
res[i] = arr[(int) arr[i]]; // cast to int as array index must be int
}
for(int j=0;j<n;j++)
{
arr[j]=res[j];
}

1

Reply
(Show 1 Replies)

Mohit Yadav1 year agoOct 05, 2024 20:05 (GMT +5:30)

//This question is based on concept of storing two element at same index(HOW??);

//See this vdo(Best Concept):-

https://www.youtube.com/watch?v=PiffnjbXX1U&ab_channel=GeeksforGeeksPractice

//Solve question of Rearange array alternately.(similar concept is used here);

void arrange(long long arr[], int n) {
// Your code here
long long  int p=-1;
for(int i=0;i<n;i++) p=max(p,arr[i]);
p++;
for(int i=0;i<n;i++){
long long int b= arr[arr[i]]%p;
long long  int a = arr[i];
arr[i] = a+b*p;
}

for(int i=0;i<n;i++){
arr[i]=(arr[i]/p);
}

}

1

Reply

Muni Sai Kumar   Kambam2 years agoSep 17, 2024 12:16 (GMT +5:30)

Java Solution

class Solution
{

// arr: input array
// n: size of array
//Function to rearrange an array so that arr[i] becomes arr[arr[i]]
//with O(1) extra space.
static void arrange(long arr[], int n)
{
// your code here
int temp[]=new int[n];
int j=0;
for(int i=0;i<n;i++){
temp[i]=(int)arr[(int)arr[i]];
}
for(int k=0;k<n;k++){
arr[k]=temp[k];
}

}
}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 4 / 4Your Total Score:74

Time Taken0.05

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

class Solution:
def arrange(self,arr):
#code here
new = []
for i in range(len(arr)):
index = arr[i]
new.append(arr[index])

for i in range(len(new)):
arr[i] = new[i]

return

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 4 / 4Your Total Score:74

Time Taken0.05

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[INTUITION:](https://www.geeksforgeeks.org/problems/rearrange-an-array-with-o1-extra-space3142/1)
