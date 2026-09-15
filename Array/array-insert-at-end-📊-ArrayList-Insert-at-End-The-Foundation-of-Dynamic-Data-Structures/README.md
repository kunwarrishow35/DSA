# 📊 ArrayList Insert at End - The Foundation of Dynamic Data Structures

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

Array End Insert
Solved

Difficulty: BasicAccuracy: 87.65%Submissions: 82K+Points: 1

Given an array arr that is not completely filled and a value val, you have to insert the value at the end of the array.

Examples :

Input: arr[] = [1, 2, 3, 4, 5], val = 90
Output: [1, 2, 3, 4, 5, 90]
Explanation: After inserting 90 at the end, we have array elements as 1 2 3 4 5 90.

Input: arr[] = [1, 2, 3], val = 50
Output: [1, 2, 3, 50]
Explanation: After inserting 50 at the end, we have array elements as 1 2 3 50.

Constraints:
1 ≤ arr.size() ≤ 105
0 ≤ element, arr[i] ≤ 106

Expected Complexities

Time Complexity: O(1)
Auxiliary Space: O(1)

Topic Tags

Arrays

Related Articles

Insert Element At The End Of An Array

Discussions ( 122 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Shubhangi Shinde3 weeks agoAug 21, 2026 14:30 (GMT +5:30)

class Solution {
public void insertAtEnd(ArrayList<Integer> arr, int val) {
// code here
// int res  = arr.get(list.size()-1);
arr.add(val);
}
}

0

Reply

Ehmed Fayaz1 month agoAug 02, 2026 00:28 (GMT +5:30)

class Solution {
public void insertAtEnd(ArrayList<Integer> arr, int val) {
// code here
arr.add(val);
}
}

0

Reply

Amodinee Nagrale3 months agoJun 04, 2026 19:46 (GMT +5:30)

class Solution {
public:
void insertAtEnd(vector<int> &arr, int val) {
// code here

arr.push_back(val);

}
};

0

Reply

Kotha Suganya5 months agoApr 01, 2026 18:28 (GMT +5:30)

class Solution:
def insertAtEnd(self, arr, val):
# code here
return arr.insert(len(arr),val)

0

Reply

Farhan ahmad7 months agoFeb 06, 2026 23:57 (GMT +5:30)

class Solution {
public void insertAtEnd(ArrayList<Integer> arr, int val) {
arr.add(val);
}
}

0

Reply

Anonymous_Geek(Edited)29/01/2026, 14:33
7 months agoJan 29, 2026 14:30 (GMT +5:30)

class Solution {
public:
void insertAtEnd(vector<int> &arr, int val) {
// code here
arr.push_back(val);
}
};

0

Reply

Soumya Tiwari8 months agoJan 08, 2026 09:09 (GMT +5:30)

class Solution {
public void insertAtEnd(ArrayList<Integer> arr, int val) {
arr.add(val);
}
}

0

Reply

Vijaykumar V8 months agoDec 21, 2025 22:49 (GMT +5:30)

class Solution {
public void insertAtEnd(ArrayList<Integer> arr, int val) {
// code here
arr.add(val);
}
}

0

Reply

venkat chowdari maridi10 months agoNov 12, 2025 09:15 (GMT +5:30)

class Solution {
public void insertAtEnd(ArrayList<Integer> arr, int val) {
arr.add(arr.size(), val);
}
}

0

Reply

Abhinav Puri10 months agoOct 26, 2025 22:32 (GMT +5:30)

📊 ArrayList Insert at End - The Foundation of Dynamic Data Structures
Problem Overview

Insert an element at the end of an ArrayList.

✨ The Solution

class Solution {
public void insertAtEnd(ArrayList<Integer> arr, int val) {
arr.add(val);
}
}

🎯 What's Happening Under the Hood

While this looks simple, there's powerful engineering behind add():

The ArrayList Magic

Initial ArrayList: [10, 20, 30]
↓
arr.add(40)
↓
Result: [10, 20, 30, 40]

🔍 Deep Dive: How add() Works

1. Capacity Check

ArrayList maintains an internal array with extra space:

Internal Array: [10, 20, 30, _, _, _]
↑
next insertion

2. Direct Insertion (When space exists)

Inserts at the next available index

Updates size counter

Time: O(1) ⚡

3. Dynamic Resizing (When full)

Creates a new array (typically 1.5x size)

Copies all elements to new array

Adds the new element

Time: O(n) (but amortized O(1))

💡 Why ArrayList Over Arrays?

Feature
Array
ArrayList

Size
Fixed
Dynamic ✅

Insertion
Manual resize
Automatic ✅

Ease of Use
Low-level
High-level ✅

Memory
Exact
Some overhead

⚡ Complexity Analysis

Time Complexity: O(1) amortized

Most insertions: O(1)

Occasional resize: O(n)

Average over time: O(1)

Space Complexity: O(1) for the operation

🎨 Visual: Amortized Analysis

Insertions:  1   2   3   4   5   6   7   8   9
Cost:        1   1   1   4   1   1   1   8   1
↑       ↑           ↑           ↑
start  resize      resize     resize

Average cost = (1+1+1+4+1+1+1+8+1) / 9 ≈ 2.1 → O(1)

🔥 Key Concepts to Remember

1. Dynamic Arrays

ArrayList is Java's implementation of a dynamic array - it grows automatically!

2. Amortized Time

Even though resizing is O(n), it happens so rarely that the average insertion is O(1).

3. The Tradeoff

We sacrifice some memory (extra capacity) for flexibility (dynamic sizing).

💻 Real-World Applications

This simple operation is fundamental to:

Building dynamic collections

Processing streams of data

Implementing stacks, queues

Managing variable-sized datasets

🏆 Why This Matters

Understanding ArrayList's internals helps you:

Choose the right data structure

Optimize performance-critical code

Predict memory usage

Debug capacity-related issues

When to Use ArrayList:

✅ Frequent additions at the end ✅ Random access by index ✅ Unknown final size

When NOT to Use:

❌ Frequent insertions at the beginning (use LinkedList) ❌ Fixed size known upfront (use array) ❌ Need guaranteed O(1) worst case (use LinkedList for add)

🎯 Practice Progression

Master this, then explore:

add(index, element) - Insert at specific position

remove(index) - Delete elements

contains() - Search operations

Custom implementations of dynamic arrays

1

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1110 / 1110
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:27

Time Taken0.03

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

class Solution:
def insertAtEnd(self, arr, val):
# code here
arr.append(val)

return arr

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1110 / 1110
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:27

Time Taken0.03

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[📊 ArrayList Insert at End - The Foundation of Dynamic Data Structures](https://www.geeksforgeeks.org/problems/array-insert-at-end/1)
