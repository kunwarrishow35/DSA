# Array Insert at Index

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

Array Insert at Index
Solved

Difficulty: BasicAccuracy: 44.81%Submissions: 134K+Points: 1

You are given an array arr(0-based index) and two positive integer index and val. You need to insert an val at given index.

Examples:

Input: arr[] = [1, 2, 3, 4, 5], index = 5, val = 90
Output: 1 2 3 4 5 90
Explanation: 90 is inserted at index 5(0-based indexing). After inserting, array elements are like [1, 2, 3, 4, 5, 90].

Input: arr[] = [1, 2, 3, 4, 5], index = 2, val = 90
Output: [1, 2, 90, 3, 4, 5]
Explanation: 90 is inserted at index 2(0-based indexing). After inserting, array elements are like [1, 2, 90, 3, 4, 5].

Constraints:
1 ≤arr.size() ≤ 105
0 ≤ val, arr[i] ≤ 106
0 ≤ index ≤ arr.size()

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Topic Tags

Arrays

Related Articles

Insert Element At A Given Position In An Array

Discussions ( 206 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Naman Karwa4 days agoSep 11, 2026 01:30 (GMT +5:30)

class Solution {
public:
void insertAtIndex(vector<int> &arr, int index, int val) {
// code here
int n = arr.size();
arr.insert(arr.begin()+index,val);
}
};

1

Reply

Abhay Mishra5 days agoSep 10, 2026 21:50 (GMT +5:30)

EASIEST SOLUTION!!class Solution {
public:
void insertAtIndex(vector<int> &arr, int index, int val) {
// code here

arr.resize(arr.size()+1);

for(int i = arr.size()-1; i>index; i--) {

arr[i]=arr[i-1];
}

arr[index]=val;
}
};

0

Reply

Sidhartha mandal2 weeks agoSep 01, 2026 19:57 (GMT +5:30)

import java.util.*;

class Solution {
public void insertAtIndex(ArrayList<Integer> arr, int index, int val) {
arr.add(index,val);

}
}

0

Reply

Sachin Kumar3 weeks agoAug 23, 2026 21:53 (GMT +5:30)

class Solution {
public:
void insertAtIndex(vector<int> &arr, int index, int val) {
// code here
// Array Size Increses By 1
arr.push_back(0);

for (int i = arr.size(); i >= index; i--) {
arr[i] = arr[i-1];
}
arr[index] = val;

}
};

1

Reply

VISHVA P1 month agoAug 06, 2026 12:34 (GMT +5:30)

class Solution:
def insertAtIndex(self, arr, index, val):
# code here
arr.insert(index,val)
return arr

0

Reply

Ehmed Fayaz1 month agoJul 30, 2026 13:51 (GMT +5:30)

import java.util.*;

class Solution {
public void insertAtIndex(ArrayList<Integer> arr, int index, int val) {
// code here
arr.add(index,val);
}
}

0

Reply

Nanditha C1 month agoJul 21, 2026 18:17 (GMT +5:30)

class Solution {

public:

void insertAtIndex(vector<int> &arr, int index, int val)

{

// code here

arr.insert(arr.begin() + index, val);

}

};

1

Reply

Nivedhitha K3 months agoJun 15, 2026 11:27 (GMT +5:30)

class Solution:
def insertAtIndex(self, arr, index, val):
# code here
arr.insert(index,val)
return arr

0

Reply

Vrinda5 months agoApr 09, 2026 22:47 (GMT +5:30)

class Solution {
insertAtIndex(arr, index, val) {
// code here
arr.splice(index,0,val);
return arr;
}
}

0

Reply

Adithya Gugloth5 months agoApr 07, 2026 10:02 (GMT +5:30)

class Solution {
public void insertAtIndex(ArrayList<Integer> arr, int index, int val) {
arr.add(index,val);

}
}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1120 / 1120
Attempts : Correct / Total2 / 2Accuracy : 100%

Time Taken0.29

You get marks only for the first correct submission if you solve the problem without viewing the full solution.

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

class Solution:
def insertAtIndex(self, arr, index, val):
# code here
arr.insert(index, val)

return arr

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1120 / 1120
Attempts : Correct / Total2 / 2Accuracy : 100%

Time Taken0.29

You get marks only for the first correct submission if you solve the problem without viewing the full solution.

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Array Insert at Index](https://www.geeksforgeeks.org/problems/array-insert-at-index/1)
