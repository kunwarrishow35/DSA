# Min and Max in Array

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

Min and Max in Array
Solved

Difficulty: BasicAccuracy: 68.55%Submissions: 555K+Points: 1Average Time: 10m

Given an array arr[]. Your task is to find the minimum and maximum elements in the array.
Examples:
Input: arr[] = [1, 4, 3, 5, 8, 6]
Output: [1, 8]
Explanation: minimum and maximum elements of array are 1 and 8.
Input: arr[] = [12, 3, 15, 7, 9]
Output: [3, 15]
Explanation: minimum and maximum element of array are 3 and 15.

Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 109

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Company Tags

NPCI

Topic Tags

Arrays

Related Articles

Maximum And Minimum In An Array

Discussions ( 1556 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Rutuja Waghmare3 days agoSep 08, 2026 21:28 (GMT +5:30)

class Solution {
public ArrayList<Integer> getMinMax(int[] arr) {

ArrayList<Integer> list = new ArrayList<>();

int min = arr[0];
int max = arr[0];

for(int i = 1; i < arr.length; i++) {

if(arr[i] < min) {
min = arr[i];
}

if(arr[i] > max) {
max = arr[i];
}
}

list.add(min);
list.add(max);

return list;
}
}

1

Reply

Shubhi Patel1 week agoAug 31, 2026 21:50 (GMT +5:30)

class Solution {
public ArrayList<Integer> getMinMax(int[] arr) {
// code Here
ArrayList<Integer> list=new ArrayList<>();
int min=arr[0];
int max=arr[0];
for(int i=0;i<arr.length;i++){
if(arr[i]<min){
min=arr[i];
}
if(arr[i]>max){
max=arr[i];
}
}
list.add(min);
list.add(max);
return list;
}
}

0

Reply

Sankeerthana2 weeks agoAug 26, 2026 20:46 (GMT +5:30)

class Solution {
public ArrayList<Integer> getMinMax(int[] arr) {
// code Here
ArrayList<Integer> ans=new ArrayList<>();
int min=arr[0],max=arr[0];
for(int i=0;i<arr.length;i++){
if(min>arr[i])
min=arr[i];
if(max<arr[i])
max=arr[i];
}
ans.add(min);
ans.add(max);
return ans;
}
}

1

Reply

Shivani Arya3 weeks agoAug 20, 2026 00:32 (GMT +5:30)

def getMinMax(self, arr):
# code here
min = arr[0]
max = arr[0]
for i in arr:
if i < min:
min = i
if i > max:
max = i
return min, max

1

Reply

Jyoti Kumari1 month agoAug 11, 2026 18:58 (GMT +5:30)

First, initialize two variables, min and max, with the first element of the array.

Traverse the array using a for loop.

For each element, compare it with the current min value.

If the current element is smaller than min, update min.

Similarly, compare the current element with max.

If the current element is greater than max, update max.

After traversing the complete array, min will contain the minimum element and max will contain the maximum element.

Finally, return both values in the required format.

class Solution {
public ArrayList<Integer> getMinMax(int[] arr) {
int n=arr.length;
int min=arr[0];
int max=arr[0];
for(int i=0;i<n;i++){
if(arr[i]<min){
min=arr[i];//update min value
}
if(arr[i]>max){
max=arr[i];//update max value
}

}
ArrayList<Integer> result=new ArrayList<>();
result.add(min);
result.add(max);
return result;
// code Here

}
}

1

Reply

Priyanshu Keshari1 month agoAug 10, 2026 23:05 (GMT +5:30)

class Solution {
public:
vector<int> getMinMax(vector<int> &arr) {
// code here
int min=arr[0],max=arr[0],m=0;
for(int i=1; i<arr.size(); i++){
if(arr[i]<min){
min=arr[i];
}
if(arr[i]>max){
max=arr[i];
}
}
return {min,max};
}
};

0

Reply

Anonymous_Geek1 month agoJul 30, 2026 18:15 (GMT +5:30)

class Solution {
public:
vector<int> getMinMax(vector<int> &arr) {
// code here
int n=arr.size();
sort(arr.begin(),arr.end());
int min=arr[0];
int max=arr[n-1];
return {min,max};
}
};

0

Reply

Anonymous_Geek1 month agoJul 30, 2026 18:13 (GMT +5:30)

class Solution {
public:
vector<int> getMinMax(vector<int> &arr) {
// code here
int n=arr.size();
int min=arr[0];
int max=arr[0];
for(int i=0;i<n;i++){
if(arr[i]>max){max=arr[i];}
if(arr[i]<min){min=arr[i];}
}
return {min,max};
}
};

0

Reply

Kalendra Yadav1 month agoJul 26, 2026 09:50 (GMT +5:30)

class Solution {

public ArrayList<Integer> getMinMax(int[] arr) {

int min=arr[0];

int max=arr[0];

for(int i=0;i<arr.length;i++){

if(min>arr[i]){

min=arr[i];

}

if(max<arr[i]){

max=arr[i];

}

}

ArrayList<Integer> ans = new ArrayList<>();

ans.add(min);

ans.add(max);

return ans;

}}

1

Reply

GANESH KUMAR GANI1 month agoJul 20, 2026 01:03 (GMT +5:30)

//C++ Solution

class Solution {
public:
vector<int> getMinMax(vector<int> &arr) {
// code here
int n = arr.size();
sort(arr.begin(),arr.end());
return  {arr[0],arr[n-1]};
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
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:14

Time Taken0.06

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

class Solution:
def getMinMax(self, arr):
# code here
min = max = arr[0]
for i in arr:
if i>max:
max = i
if i<min:
min = i
return [min, max]

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:14

Time Taken0.06

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Min and Max in Array](https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1)
