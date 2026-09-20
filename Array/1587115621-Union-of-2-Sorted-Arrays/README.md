# Union of 2 Sorted Arrays

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

Union of 2 Sorted Arrays
Solved

Difficulty: MediumAccuracy: 31.39%Submissions: 575K+Points: 4Average Time: 20m

Given two sorted arrays a[] and b[], where each array may contain duplicate elements , the task is to return the elements in the union of the two arrays in sorted order. Union of two arrays can be defined as the set containing distinct elements that are present in either of the arrays.
Examples:
Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3, 6, 7]
Output: [1, 2, 3, 4, 5, 6, 7]
Explanation: Distinct elements including both the arrays are: 1 2 3 4 5 6 7.
Input: a[] = [2, 2, 3, 4, 5], b[] = [1, 1, 2, 3, 4]
Output: [1, 2, 3, 4, 5]
Explanation: Distinct elements including both the arrays are: 1 2 3 4 5.
Input: a[] = [1, 1, 1, 1, 1], b[] = [2, 2, 2, 2, 2]
Output: [1, 2]
Explanation: Distinct elements including both the arrays are: 1 2.

Constraints:
1 ≤ a.size(), b.size() ≤ 105
-109 ≤ a[i], b[i] ≤ 109

Expected Complexities

Time Complexity: O(n + m)
Auxiliary Space: O(1)

Company Tags

Amazon

Topic Tags

Arraystwo-pointer-algorithm

Related Articles

Union Of Two Sorted Arrays

Discussions ( 1351 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Anonymous_Geek(Edited)13/09/2026, 18:56
6 days agoSep 13, 2026 18:56 (GMT +5:30)

from typing import List

class Solution:
def findUnion(self, a: List[int], b: List[int]) -> List[int]:
i, j = 0, 0
union = []

while i < len(a) and j < len(b):
# Skip duplicates in union
if union and union[-1] == a[i]:
i += 1
continue
if union and union[-1] == b[j]:
j += 1
continue

if a[i] < b[j]:
union.append(a[i])
i += 1
elif a[i] > b[j]:
union.append(b[j])
j += 1
else:  # a[i] == b[j]
union.append(a[i])
i += 1
j += 1

# Process remaining elements in a
while i < len(a):
if not union or union[-1] != a[i]:
union.append(a[i])
i += 1

# Process remaining elements in b
while j < len(b):
if not union or union[-1] != b[j]:
union.append(b[j])
j += 1

return union

0

Reply

Akshit Mehta1 week agoSep 12, 2026 15:04 (GMT +5:30)

Compiler is giving me erro in this code !! Can someone help me what is the issue here ......

ArrayList<Integer> res = new ArrayList<>();

int aLength = a.length;
int bLength = b.length;

int i = 0, j = 0;

while (i < aLength && j < bLength){

// These two if are for skkiping dublicate inside same arr
if (i > 0 && a[i-1] == a[i]){
i++;
continue;
}
if (j > 0 && a[j-1] == a[j]){
j++;
continue;
}

//Adding commmon elements in both array
// select and add the smaller element and move
if(a[i] < b[j]) {
res.add(a[i]);
i++;
}
else if(a[i] > b[j]) {
res.add(b[j]);
j++;
}

// If equal, then add to result and move both
else {
res.add(a[i]);
i++;
j++;
}

}

//Adding elemts left or differnt elemtes of A arrays
while (i < aLength){
if (i > 0 && a[i-1] == a[i]){
i++;
continue;
}

res.add(a[i]);
i++;
}

//Adding elemts left or differnt elemtes of B arrays
while (j < bLength){
if (j > 0 && b[j-1] == b[j]){
j++;
continue;
}

res.add(b[j]);
j++;
}

return res;

0

Reply

MADHAVI PORTE1 week agoSep 07, 2026 12:24 (GMT +5:30)

class Solution {
public static ArrayList<Integer> findUnion(int a[], int b[]) {
// code here
int n = a.length;
int m = b.length;
Set<Integer> st = new TreeSet<>();
for(int num :a){
st.add(num);
}
for(int num:b){
st.add(num);
}
return new ArrayList<>(st);
}
}

0

Reply

MADHAVI PORTE1 week agoSep 07, 2026 12:24 (GMT +5:30)

class Solution {
public static ArrayList<Integer> findUnion(int a[], int b[]) {
// code here
int n = a.length;
int m = b.length;
Set<Integer> st = new TreeSet<>();
for(int num :a){
st.add(num);
}
for(int num:b){
st.add(num);
}
return new ArrayList<>(st);
}
}

0

Reply

Adarsh Pawar4 weeks agoAug 23, 2026 11:50 (GMT +5:30)

class Solution:
def findUnion(self, a, b):
# code here
i=0
for i in range(0,len(b)):
a1=b[i]
a.append(a1)
a.sort()
clean=list(dict.fromkeys(a))
return clean

0

Reply

Modabbir1 month agoAug 08, 2026 10:16 (GMT +5:30)

class Solution:
def findUnion(self, a, b):
# code here
st = set()

i = 0
j = 0
ans = []

while i < len(a) and j < len(b):
if a[i] <= b[j]:
if a[i] not in st:
ans.append(a[i])
st.add(a[i])
i += 1
else:
if b[j] not in st:
ans.append(b[j])
st.add(b[j])
j += 1

while i < len(a):
if a[i] not in st:
ans.append(a[i])
st.add(a[i])
i += 1

while j < len(b):
if b[j] not in st:
ans.append(b[j])
st.add(b[j])
j += 1

return ans

0

Reply

jMJVhHho1 month agoAug 08, 2026 01:41 (GMT +5:30)

can't understand best case approch

1

Reply

Anonymous_Geek1 month agoJul 31, 2026 10:23 (GMT +5:30)

class Solution {
public:
vector<int> findUnion(vector<int> &a, vector<int> &b) {
// code here

set<int>ans;
for(int i=0;i<a.size();i++){ans.insert(a[i]);}
for(int i=0;i<b.size();i++){ans.insert(b[i]);}

vector<int>nans;
for(auto it:ans){
nans.push_back(it);
}
return nans;
}
};

0

Reply

Anonymous_Geek1 month agoJul 31, 2026 10:22 (GMT +5:30)

class Solution {
public:
vector<int> findUnion(vector<int> &a, vector<int> &b) {
// code here

set<int>ans;
for(int i=0;i<a.size();i++){ans.insert(a[i]);}
for(int i=0;i<b.size();i++){ans.insert(b[i]);}

vector<int>nans(ans.begin(),ans.end());
return nans;
}
};

0

Reply

Krishna(Edited)21/07/2026, 21:32
2 months agoJul 21, 2026 21:31 (GMT +5:30)

class Solution {
public static ArrayList<Integer> findUnion(int a[], int b[]) {
// code here
int n = a.length;
int m = b.length;
Set<Integer> st = new TreeSet<>();
for(int num : a){
st.add(num);
}
for(int num : b){
st.add(num);
}
return new ArrayList<>(st);
}
}

This question can also be solved using TreeSet.

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 4 / 4Your Total Score:56

Time Taken0.79

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

class Solution:
def findUnion(self, a, b):
# code here
return sorted(set(a) | set(b))

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 4 / 4Your Total Score:56

Time Taken0.79

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Union of 2 Sorted Arrays](https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1)
