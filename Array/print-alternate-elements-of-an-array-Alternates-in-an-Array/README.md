# Alternates in an Array

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

Alternates in an Array
Solved

Difficulty: BasicAccuracy: 52.74%Submissions: 252K+Points: 1Average Time: 15m

You are given an array arr[], the task is to return a list elements of arr in alternate order (starting from index 0).
Examples:
Input: arr[] = [1, 2, 3, 4]
Output: 1 3
Explanation:
Take first element: 1
Skip second element: 2
Take third element: 3
Skip fourth element: 4
Input: arr[] = [1, 2, 3, 4, 5]
Output: 1 3 5
Explanation:
Take first element: 1
Skip second element: 2
Take third element: 3
Skip fourth element: 4
Take fifth element: 5

Constraints:
1 ≤ arr.size(), arr[i] ≤ 105

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Topic Tags

Arrays

Related Articles

Print Alternate Elements Of An Array

Discussions ( 609 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Charles1 day agoSep 14, 2026 15:58 (GMT +5:30)

class Solution:
def getAlternates(self, arr):
return arr[::2]

solution = Solution()
solution.getAlternates([60, 63, 55, 41, 22, 11, 57])

0

Reply

Ishan Dahake2 days agoSep 13, 2026 13:53 (GMT +5:30)

class Solution {
public:
vector<int> getAlternates(vector<int> &arr) {
// code here
vector<int> ans;

for (int i = 0; i < arr.size(); i += 2)
{
ans.push_back(arr[i]);
}

return ans;
}
}; lol

0

Reply

Abhishek4 days agoSep 11, 2026 09:03 (GMT +5:30)

class Solution:
def getAlternates(self, arr):
# Code Here
arrs =[]
for i in range(len(arr)):
if i % 2 ==0:
arrs.append(arr[i])
return arrs

0

Reply

Sumit sharma6 days agoSep 09, 2026 13:33 (GMT +5:30)

i have simple solution of this question in c++                                                                         class Solution {
public:
vector<int> getAlternates(vector<int> &arr) {

for (int i = 0; i < arr.size(); i+=2) {
cout << arr[i] << " ";
}

// code here

}
};

0

Reply

Sankeerthana2 weeks agoAug 26, 2026 20:50 (GMT +5:30)

class Solution {
public ArrayList<Integer> getAlternates(int arr[]) {
// Code Here
ArrayList<Integer> ans=new ArrayList<>();
for(int i=0;i<arr.length;i++){
if(i%2==0)
ans.add(arr[i]);
}
return ans;
}
}

1

Reply
(Show 1 Replies)

Shrey Upadhyaya2 weeks agoAug 26, 2026 11:51 (GMT +5:30)

I checked for alternate elements through index mod 2 equal zero or not check and achieved time of completion of 0.17-0.18 second.

0

Reply

harsh1 month agoAug 12, 2026 15:41 (GMT +5:30)

Just Use Inbuilt array indexing function and return a list
like arr[0: len(arr): 2]

1

Reply

DpdUaQOc1 month agoAug 12, 2026 12:16 (GMT +5:30)

class Solution {
public ArrayList<Integer> getAlternates(int arr[]) {
ArrayList<Integer>array=new ArrayList<>();
// Code Here
for(int i=0;i<arr.length;i+=2){
array.add(arr[i]);
}
return array;
}

}

2

Reply

kusum kumari1 month agoAug 08, 2026 16:46 (GMT +5:30)

class Solution {
public ArrayList<Integer> getAlternates(int arr[]) {
// Code Here
ArrayList<Integer>list = new ArrayList<>();
int n = arr.length;
for(int i = 0; i<n; i++){
if(i%2==0){
list.add(arr[i]);
}

}
return list;
}
}

0

Reply

Mamidi Dhanalakshmi1 month agoJul 21, 2026 22:36 (GMT +5:30)

class Solution {
public ArrayList<Integer> getAlternates(int arr[]) {
// Code Here
ArrayList<Integer> res=new ArrayList<>();
for(int i=0;i<arr.length;i+=2){
res.add(arr[i]);
}
return res;
}
}

1

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:19

Time Taken0.15

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

class Solution:
def getAlternates(self, arr):
res = []
for i in range(0, len(arr), 2):
res.append(arr[i])

return res

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:19

Time Taken0.15

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Alternates in an Array](https://www.geeksforgeeks.org/problems/print-alternate-elements-of-an-array/1)
