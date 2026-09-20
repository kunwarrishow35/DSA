# Find triplets with zero sum

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

Find triplets with zero sum
Solved

Difficulty: MediumAccuracy: 25.81%Submissions: 359K+Points: 4Average Time: 20m

Given an array arr[] of integers, determine whether it contains a triplet whose sum equals zero. Return true if such a triplet exists, otherwise, return false.
Examples:
Input: arr[] = [0, -1, 2, -3, 1]
Output: true
Explanation: The triplet [0, -1, 1] has a sum equal to zero.
Input: arr[] = [1, 2, 3]
Output: false
Explanation: No triplet with a sum of zero exists.
Input: arr[] = [-5, 3, 2, -1, 0, 1]
Output: true
Explanation: The triplet [-5, 3, 2] has a sum equal to zero.

Constraints:
1 ≤ arr.size() ≤ 103
-106 ≤ arr[i] ≤ 106

Expected Complexities

Time Complexity: O(n^2)
Auxiliary Space: O(1)

Company Tags

AmazonGoogleFacebook

Topic Tags

two-pointer-algorithmArraysSearchingHashSorting

Related Articles

Find Triplets Array Whose Sum Equal Zero

Discussions ( 1112 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Bhavika3 years agoJul 08, 2023 14:04 (GMT +5:30)

???? Statement :  Given an array arr[] of n integers. Check whether it contains a triplet that sums up to zero.

Note: Return 1, if there is at least one triplet following the condition else return 0.

????️ Example 1 :

Input: n = 5, arr[] = {0, -1, 2, -3, 1}
Output: 1
Explanation: 0, -1 and 1 forms a triplet
with sum equal to 0.

????️ Example 2 :

Input: n = 3, arr[] = {1, 2, 3}
Output: 0
Explanation: No triplet with zero sum exists.

???? Naive approach :-

✨ Run 3 loops and check one after the other whether or not the sum of the three elements is zero or not. If the sum of three elements is 0 then return true otherwise return false

Steps :-

Run three nested loops with loop counter i, j, k

The first loops will run from 0 to n-2 and second loop from i+1 to n-1 and the third loop from j+1 to n. The loop counter represents the three elements of the triplet.

Check if the sum of elements at i’th, j’th, k’th is equal to zero or not. If yes return true and break else continue.

???? EXPLANATION :

Code :-

bool findTriplets(int arr[], int n) {
bool found = false;
for (int i = 0; i < n - 2; i++) {
for (int j = i + 1; j < n - 1; j++) {
for (int k = j + 1; k < n; k++) {
if (arr[i] + arr[j] + arr[k] == 0) {

found = true;
break;
}
}
if (found) break;
}
if (found) break;
}
return found;
}

⏰ Time Complexity: O(n3), As three nested loops are required, so the time complexity is O(n3).
???? Auxiliary Space: O(1), Since no extra space is required, so the space complexity is constant.

???? Using Hashing :-

✨This requires traversing the array. For each arr[i] element, find a pair with the sum “-arr[i]”. This problem reduces to pairwise summation and can be solved in O(n) time by hashing.

Steps :-

Create a HashSet to store unique elements.

Start a nested loop with two loops:

The outer loop goes from 0 to n-1.

The inner loop goes from i+1 to n.

For each iteration, check if the sum of the ith and jth element, multiplied by -1, is present in the HashSet or not.

If the element is present in the HashSet, return true and break.

If the element is not present in the HashSet, insert the jth element into the HashSet.

???? EXPLANATION :

Code :-

bool findTriplets(int arr[], int n) {
bool found = false;

for (int i = 0; i < n - 1; i++) {

unordered_set < int > hash;
for (int j = i + 1; j < n; j++) {
int x = -(arr[i] + arr[j]);
if (hash.find(x) != hash.end()) {
found = true;
break;
} else
hash.insert(arr[j]);
}
if (found) break;

}
return found;
}

⏰ Time Complexity: O(n2), Since two nested loops are required, so the time complexity is O(n2).
???? Auxiliary Space: O(n), Since a HashSet is required, so the space complexity is linear.

???? Optimal Approach Based on Sorting and Two Pointer :-

✨For every element check that there is a pair whose sum is equal to the negative value of that element.

Steps :-

Sort the array in ascending order.

Start traversing the array from the beginning to the end.

For each index i in the array, create two variables l = i + 1 and r = n – 1, where n is the length of the array.

Run a loop until l is less than r.

Inside the loop, check if the sum of array[i], array[l], and array[r] is equal to zero. If it is, return true and break otherwise proceed to the next step.

If the sum is less than zero, increment the value of l.

If the sum is greater than zero, decrement the value of r.

???? EXPLANATION :

????‍????CODE OF Optimal Approach????‍????:

C++

bool findTriplets(int arr[], int n) {
bool found = false;

sort(arr, arr + n);

for (int i = 0; i < n - 1; i++) {
int l = i + 1;
int r = n - 1;
int x = arr[i];
while (l < r) {
if (x + arr[l] + arr[r] == 0) {

l++;
r--;
found = true;
break;
} else if (x + arr[l] + arr[r] < 0)
l++;
else
r--;
}
if (found) break;
}

return found;
}

C

#include <stdbool.h>
#include <stdlib.h>

int comparator(const void * p1,
const void * p2) {
return ( * (int * ) p1 - * (int * ) p2);
}
int findTriplets(int arr[], int n) {
bool found = 0;
qsort(arr, n, sizeof(int), comparator);
for (int i = 0; i < n - 1; i++) {
int l = i + 1;
int r = n - 1;
int x = arr[i];
while (l < r) {
if (x + arr[l] + arr[r] == 0) {
l++;
r--;
found = true;
break;
} else if (x + arr[l] + arr[r] < 0)
l++;
else
r--;
}
if (found) break;
}
return found;
}

JAVA

public boolean findTriplets(int arr[], int n) {
boolean found = false;
Arrays.sort(arr);
for (int i = 0; i < n - 1; i++) {
int l = i + 1;
int r = n - 1;
int x = arr[i];
while (l < r) {
if (x + arr[l] + arr[r] == 0) {
l++;
r--;
found = true;
break;
} else if (x + arr[l] + arr[r] < 0)
l++;
else
r--;
}
if (found)
break;
}
return found;
}

PYTHON

def findTriplets(self, arr, n):
found = False
arr.sort()
for i in range(n - 1):
l = i + 1
r = n - 1
x = arr[i]
while l < r:
if x + arr[l] + arr[r] == 0:
l += 1
r -= 1
found = True
break
elif x + arr[l] + arr[r] < 0:
l += 1
else:
r -= 1
if found:
break
return found

C#

public bool findTriplets(int[] arr, int n) {
bool found = false;
Array.Sort(arr);
for (int i = 0; i < n - 1; i++) {
int l = i + 1;
int r = n - 1;
int x = arr[i];
while (l < r) {
if (x + arr[l] + arr[r] == 0) {
l++;
r--;
found = true;
break;
} else if (x + arr[l] + arr[r] < 0)
l++;
else
r--;
}
if (found) break;
}
return found;
}

JAVASCRIPT

findTriplets(arr, n) {
let found = false;
arr.sort((a, b) => a - b);
for (let i = 0; i < arr.length - 1; i++) {
let l = i + 1;
let r = arr.length - 1;
let x = arr[i];
while (l < r) {
if (x + arr[l] + arr[r] === 0) {
l++;
r--;
found = true;
break;
} else if (x + arr[l] + arr[r] < 0)
l++;
else
r--;
}
if (found) break;
}
return found;
}

⏰ Time Complexity: O(n2), Only two nested loops are required, so the time complexity is O(n2).
???? Auxiliary Space: O(1), no extra space is required, so the space complexity is constant.

???? Please check this solution @practicecontent

If you found this Solution Helpful, Please consider giving it an UPVOTE. Thank you! ????????

186

Reply
(Show 13 Replies)

prathiba2 months agoJul 09, 2026 14:59 (GMT +5:30)

class Solution:
def findTriplets(self, arr):
#code here
for i in range(0,len(arr)):
for j in range(i+1,len(arr)):
for k in range(j+1,len(arr)):
if(arr[i]+arr[j]+arr[k]==0):
return 1
return 0

0

Reply

GANESH KUMAR GANI4 months agoMay 15, 2026 09:07 (GMT +5:30)

class Solution {

public:

bool findTriplets(vector<int> &arr) {

int n = arr.size();

for(int i = 0; i < n-2; i++) {

for(int j = i+1; j < n-1; j++) {

for(int k = j+1; k < n; k++) {

if(arr[i] + arr[j] + arr[k] == 0) {

return true;

}

}

}

}

return false;

}

};

0

Reply

Mukesh Kumar Pathak4 months agoMay 05, 2026 18:18 (GMT +5:30)

class Solution {
public:
virtual bool findTriplets(vector<int> &arr){
sort(arr.begin(), arr.end());
int n=arr.size();

for(int i=0; i<n-2; i++){
int s=i+1, e=n-1;
while(e>s){
int csum=arr[i]+arr[s]+arr[e];
if(csum==0) return true;
else if(csum<0) s++;
else e--;
}

}
return false;

}
};

0

Reply

ABDUL RAFI N5 months agoApr 14, 2026 07:07 (GMT +5:30)

//complexity is O(n^2) ,O(1)
class Solution {
public boolean findTriplets(int[] arr) {
// code here.
Arrays.sort(arr);
for(int i=0;i<arr.length-2;i++){
int initial=arr[i],left=i+1,right=arr.length-1;
while(left<right){
if(initial+arr[left]+arr[right]==0){
return true;
}else if(initial+arr[left]+arr[right]>0){
right--;
}else{
left++;
}
}
}
return false;
}
}

0

Reply

Mohammed Sheik Mydeen5 months agoApr 07, 2026 12:38 (GMT +5:30)

class Solution:
def findTriplets(self, arr):
for i in range(n):
for j in range(i+1,n):
for k in range(j+1,n):
if arr[i]+arr[j]+arr[k]==0:
return True
else:
return False

1

Reply

RAJAN  KUMAR5 months agoMar 27, 2026 09:15 (GMT +5:30)

class Solution {
public boolean findTriplets(int[] arr) {
int n = arr.length;
Arrays.sort(arr);

for (int i = 0; i < n - 2; i++) {
int left = i + 1;
int right = n - 1;

while (left < right) {
int sum = arr[i] + arr[left] + arr[right];

if (sum == 0) return true;
else if (sum < 0) left++;
else right--;
}
}
return false;
}
}

0

Reply

SAMEER KHAN6 months agoMar 17, 2026 12:37 (GMT +5:30)

class Solution {
public boolean findTriplets(int[] arr) {
// code here.
int n = arr.length;

Arrays.sort(arr);

for(int i =0; i<n-2; i++) {
int left = i+1;
int right = n-1;
while(left < right) {
int sum = arr[i] + arr[left] + arr[right];

if(sum == 0){
return true;

}
else if(sum < 0) {
left++;
}
else {
right--;
}
}
}
return false;
}
}

0

Reply

Rohit Kumar6 months agoMar 09, 2026 09:01 (GMT +5:30)

O(n^2) Time complexity and O(1) Aux space solution C++

class Solution {
public:
bool findTriplets(vector<int> &arr) {
// code here
sort(arr.begin(), arr.end());
int n= arr.size();

for(int i=0; i<n-2; i++){

int needed = 0 - arr[i];

int low = i+1;
int high = n-1;

while(low < high){
if(arr[low]+arr[high] == needed){
return true;
}
if(arr[low]+arr[high] > needed){
high--;
}else{
low++;
}
}

}
return false;
}
};

0

Reply

RAJAN  KUMAR6 months agoMar 02, 2026 10:38 (GMT +5:30)

100% Working Code In JAVA

class Solution {
public boolean findTriplets(int[] arr) {
int n = arr.length;
Arrays.sort(arr);

for (int i = 0; i < n - 2; i++) {
int left = i + 1;
int right = n - 1;

while (left < right) {
int sum = arr[i] + arr[left] + arr[right];

if (sum == 0) return true;
else if (sum < 0) left++;
else right--;
}
}
return false;
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

Points Scored 4 / 4Your Total Score:60

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
13
14
15
16
17
18
19
20
21
22
23

class Solution:
def findTriplets(self, arr):
arr.sort()

n = len(arr)

for i in range(n - 2):
left = i + 1
right = n - 1

while left < right:
total = arr[i] + arr[left] + arr[right]

if total == 0:
return True

elif total < 0:
left += 1

else:
right -= 1

return False

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 4 / 4Your Total Score:60

Time Taken0.05

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Find triplets with zero sum](https://www.geeksforgeeks.org/problems/find-triplets-with-zero-sum/1)
