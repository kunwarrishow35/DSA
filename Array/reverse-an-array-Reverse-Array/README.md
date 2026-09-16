# Reverse Array

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

Reverse Array
Solved

Difficulty: EasyAccuracy: 55.32%Submissions: 341K+Points: 2Average Time: 5m

You are given an array of integers arr[]. You have to reverse the given array.

Note: Modify the array in place.

Examples:

Input: arr = [1, 4, 3, 2, 6, 5]
Output: [5, 6, 2, 3, 4, 1]
Explanation: The elements of the array are [1, 4, 3, 2, 6, 5]. After reversing the array, the first element goes to the last position, the second element goes to the second last position and so on. Hence, the answer is [5, 6, 2, 3, 4, 1].

Input: arr = [4, 5, 2]
Output: [2, 5, 4]
Explanation: The elements of the array are [4, 5, 2]. The reversed array will be [2, 5, 4].

Input: arr = [1]
Output: [1]
Explanation: The array has only single element, hence the reversed array is same as the original.

Constraints:
1 ≤ arr.size() ≤ 105
0 ≤ arr[i] ≤ 105

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Company Tags

BloombergFacebookTCSAdobeGoogleInfosysCapgeminiMorgan StanleyAmazonMicrosoftAppleYahooPayPalUber

Topic Tags

Arrays

Related Articles

Program To Reverse An Array

Discussions ( 482 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Abhishek Srivastava9 hours agoSep 16, 2026 10:23 (GMT +5:30)

class Solution {
public void reverseArray(int arr[]) {
// code here
int left=0;
int right=arr.length-1;

while(left<right){
int temp=arr[left];
arr[left]=arr[right];
arr[right]=temp;
left++;
right--;
}

}
}

0

Reply

Priyanshu Keshari4 days agoSep 11, 2026 22:12 (GMT +5:30)

class Solution {
public:
void reverseArray(vector<int> &arr) {
// code here
int n=arr.size();
int i=n-1;
int j=0;
while(i>j){
swap(arr[j],arr[i]);
i--;
j++;
}
}
};

1

Reply

Sidhartha mandal2 weeks agoSep 02, 2026 09:52 (GMT +5:30)

class Solution {
public void reverseArray(int arr[]) {
for(int i = 0;i<arr.length/2;i++){
int a = i;
int b = arr.length-1-i;

int temp = arr[b];
arr[b] = arr[a];
arr[a] = temp;

}

}
}

Approach

Used the Two Pointer approach. Swap elements from the beginning and end until reaching the middle.

Complexity

Time: O(n)

Space: O(1)

0

Reply

Akash Maurya2 weeks agoAug 28, 2026 20:25 (GMT +5:30)

Just use arr.reverse() in python

0

Reply

Anonymous_Geek(Edited)19/08/2026, 11:13
4 weeks agoAug 19, 2026 11:13 (GMT +5:30)

reverse(arr.begin(),arr.end());--c++

0

Reply

KOMMANDURI DINESH PAVAN KUMAR4 weeks agoAug 18, 2026 14:45 (GMT +5:30)

class Solution {
public:
void reverseArray(vector<int> &arr) {
// code here
reverse(arr.begin(),arr.end());

}
};

1

Reply

Mourya1 month agoAug 17, 2026 16:39 (GMT +5:30)

It is too easy that even My girlfriend kick out this without any knowledge

3

Reply
(Show 1 Replies)

Aditya Singh1 month agoAug 15, 2026 01:31 (GMT +5:30)

class Solution:
def reverseArray(self, arr):
left = 0
right = len(arr)-1
# code here

while left < right:
arr[left], arr[right] = arr[right], arr[left]

left += 1
right -= 1

return arr

1

Reply

VIVEK KULKARNI1 month agoJul 30, 2026 08:01 (GMT +5:30)

class Solution {
public void reverseArray(int arr[]) {
int j=arr.length-1;
int i=0;
while(i<j){
int  temp = arr[i];
arr[i] = arr[j];
arr[j] =temp;
i++;
j--;
}}}

1

Reply

Anonymous_Geek1 month agoJul 29, 2026 22:22 (GMT +5:30)

class Solution {
public void reverseArray(int arr[]) {
int l=0,r=arr.length-1;
while(l<r){
int  temp;
temp =arr[l];
arr[l]=arr[r];
arr[r]=temp;

l++;
r--;
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

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:42

Time Taken0.31

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

class Solution:
def reverseArray(self, arr):
# code here
return arr.reverse()

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:42

Time Taken0.31

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Reverse Array](https://www.geeksforgeeks.org/problems/reverse-an-array/1)
