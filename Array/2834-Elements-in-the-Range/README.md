# Elements in the Range

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

Elements in the Range
Solved

Difficulty: BasicAccuracy: 37.28%Submissions: 95K+Points: 1

Given an array arr[] containing distinct positive integers, and two integers start and end defining a range. Determine if the array contains all elements within inclusive range [start, end].

Note: If the array contains all elements in the given range return true otherwise return false.

Examples :

Input: start = 2, end = 5, arr[] =  [1, 4, 5, 2, 7, 8, 3]
Output: true
Explanation: All integers within the range [2, 5] are 2, 3, 4, and 5, and all of them are present in the array. Therefore, the answer is true for this test case.

Input: start = 2, end = 6, arr[] = [1, 4, 5, 2, 7, 8, 3]
Output: false
Explanation: The array does not contain 6; hence, it does not contain all the elements in the range [2, 6]. Therefore, the output is false.

Constraints:
1 ≤ arr.size() ≤ 105
0 ≤ arr[i] ≤ 105
0 ≤ start ≤ end ≤ 105

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Company Tags

Amazon

Topic Tags

ArraysSearching

Related Articles

Check If An Array Contains All Elements Of A Given Range

Discussions ( 393 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Ashutosh Kumar1 day agoSep 15, 2026 12:15 (GMT +5:30)

easy @C++ approach

class Solution {
public:
bool checkElements(int start, int end, vector<int> &arr) {
// code here
unordered_set<int> s(arr.begin(), arr.end());

for (int i = start; i <= end; i++) {
if (s.find(i) == s.end()) {
return false;  // missing element
}
}
return true;

}
};

0

Reply

Vaishnavi Kumari1 week agoSep 09, 2026 16:11 (GMT +5:30)

class Solution {
public boolean checkElements(int start, int end, int[] arr) {
// code here
int n = 0;

Arrays.sort(arr);
int num = end - start+1;
for(int i=0; i<arr.length; i++){
if(arr[i] == start){
n++;
start++;
}
if(n==num){
return true;

}
}
return false;

}
}

0

Reply

SHUBHANG  S RAO2 months agoJun 27, 2026 10:35 (GMT +5:30)

class Solution {
public:
bool checkElements(int start, int end, vector<int> &arr) {
/* APPROACH-1
int n=arr.size();
unordered_map<int,int>mpp;
for(int i=0;i<n;i++){mpp[arr[i]]++;}

for(int i=start;i<=end;i++){
if(!mpp[i]){return false;}
}

return true; */

int n=arr.size();
unordered_set<int>s(arr.begin(),arr.end());
for(int i=start;i<=end;i++){
if(s.find(i)==s.end()){return false;}
}
return true;
}
};

0

Reply

DAYAPULI SRINIVASULA RAO3 months agoMay 30, 2026 13:57 (GMT +5:30)

class Solution:
def checkElements(self, start, end, arr):
# code here
arr1=set(arr)
for i in range(start,end+1):
if i not in arr1:
return False
return True

0

Reply

Anonymous_Geek(Edited)28/05/2026, 23:40
3 months agoMay 28, 2026 23:39 (GMT +5:30)

Simple Python Sol'n

class Solution:
def checkElements(self, start, end, arr):
# code here
found = [False for i in range(start, end+1)]
for i in arr:
if i in range(start, end+1):
found[i-start] = True

return all(found)

0

Reply

Ayush Ranjan3 months agoMay 25, 2026 23:51 (GMT +5:30)

class Solution {

public boolean checkElements(int start, int end, int[] arr) {

int n = 0;

Arrays.sort(arr);

int num=end-start+1;

for (int i = 0; i<arr.length; i++) {

if (arr[i] == start) {

n++;

start++;

}

if (n == num)

return true;

}

return false;

}

}

0

Reply

Rahul Rawat3 months agoMay 25, 2026 23:23 (GMT +5:30)

Python soln:

class Solution:
def checkElements(self, start, end, arr):
n=len(arr)
if n<(end-start+1):
return False
count=0
for item in arr:
if start<=item<=end:
count+=1
return count==(end-start+1)

Time: O(N)
Space: O(1)

0

Reply

Yash Jahagirdar3 months agoMay 25, 2026 22:59 (GMT +5:30)

Java One-liner:

import java.util.stream.Collectors;

class Solution {
public boolean checkElements(int start, int end, int[] arr) {
return Arrays.stream(arr).filter(a -> a >= start && a <= end).boxed().collect(Collectors.toSet()).size() == (end - start + 1);
}
}

0

Reply

Jeyanth   S3 months agoMay 25, 2026 22:32 (GMT +5:30)

import java.util.stream.*;

class Solution {
public boolean checkElements(int start, int end, int[] arr) {
// code here
Set<Integer> A = new HashSet<>();
Set<Integer> B = Arrays.stream(arr)
.boxed()
.collect(Collectors.toSet());

for(int i = start; i <= end; i++) A.add(i);
B.retainAll(A);

return A.size() == B.size();
}
}

An approach that utilizes java's Set and Streams functionalities

1

Reply
(Show 1 Replies)

Abhishek Chaturvedi3 months agoMay 25, 2026 21:12 (GMT +5:30)

class Solution {
public:
bool checkElements(int start, int end, vector<int> &arr) {
// code here
// int  cout=0;
int total= (end- start) +1;
for(int i=0; i<arr.size(); i++){
if(arr[i]>= start and arr[i]<= end){
total--;
}
if(total==0)return 1;
}
return total== 0 ? true : false;

}
};

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total1 / 2Accuracy : 50%

Points Scored 1 / 1Your Total Score:34

Time Taken0.08

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

class Solution:
def checkElements(self, start, end, arr):
new = []

for i in range(start, end + 1):
new.append(i)

a = set(arr)
b = set(new)

return b.issubset(a)

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total1 / 2Accuracy : 50%

Points Scored 1 / 1Your Total Score:34

Time Taken0.08

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Elements in the Range](https://www.geeksforgeeks.org/problems/elements-in-the-range2834/1)
