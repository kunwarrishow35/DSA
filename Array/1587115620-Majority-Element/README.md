# Majority Element

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

Majority Element
Solved

Difficulty: MediumAccuracy: 27.82%Submissions: 858K+Points: 4Average Time: 59m

Given an array arr[]. Find the majority element in the array. If no majority element exists, return -1.
Note: A majority element in an array is an element that appears strictly more than arr.size()/2 times in the array.
Examples:
Input: arr[] = [1, 1, 2, 1, 3, 5, 1]
Output: 1
Explanation: Since, 1 is present more than 7/2 times, so it is the majority element.

Input: arr[] = [7]
Output: 7
Explanation: Since, 7 is single element and present more than 1/2 times, so it is the majority element.
Input: arr[] = [2, 13]
Output: -1
Explanation: Since, no element is present more than 2/2 times, so there is no majority element.

Constraints:
1 ≤ arr.size(), arr[i] ≤ 105

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Company Tags

FlipkartAccoliteAmazonMicrosoftD-E-ShawGoogleNagarroAtlassian

Topic Tags

ArraysSearchingGreedy

Related Interview Experiences

Amazon Interview Experience Set 187 For Sde1Accolite Interview Experience Set 3 On CampusMicrosoft Interview Experience Set 86 On CampusAmazon Interview Experience Set 138 Sde 1Amazon Interview Experience Set 155 CampusMicrosoft Interview Set 24

Related Articles

Majority Element

Discussions ( 2148 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Hari  Muthu Ganesh1 month agoAug 05, 2026 13:05 (GMT +5:30)

Discussion Guidelines<button aria-label="Dismiss discussion guidelines" type="button">×</button>

Please avoid posting complete solutions or full code in the comments.

Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

1

Reply

MD AAKHIL1 month agoAug 01, 2026 13:59 (GMT +5:30)

class Solution {
int majorityElement(int arr[]) {
int n=arr.length;
if(n==1){
return arr[0];
}
HashMap<Integer,Integer> map=new HashMap<>();
for(int nums:arr){
map.put(nums, map.getOrDefault(nums, 0) + 1);
}
for (int key : map.keySet()) {
if (map.get(key) > n / 2) {
return key;
}
}
return -1;

}
}

2

Reply

Akash Mochi1 month agoJul 31, 2026 09:13 (GMT +5:30)

class Solution {
public:
int majorityElement(vector<int>& arr) {
// code here
int n = arr.size();
int cand = -1;
int count = 0;
for (int i=0; i<n; i++){
if (count == 0){
cand = arr[i];
count;
}
if(cand == arr[i]){
count++;
}
else if(cand != arr[i])
count--;
}
int freq =0;
for(int i=0; i<n; i++){
if(arr[i]==cand)
freq++;
}
if(freq>n/2)
return cand;
return -1;

}
};

0

Reply

Shelly Garg3 months agoJun 27, 2026 09:27 (GMT +5:30)

class Solution:
def majorityElement(self, arr):
count = {}
for i in arr:
if i in count:
count[i] += 1
else:
count[i] = 1
majority = len(arr)//2+1
majel = [ k for k, v in count.items() if v >= majority ]
return majel[0] if majel else -1

0

Reply

Madan Mohan3 months agoJun 15, 2026 13:07 (GMT +5:30)

Python

class Solution:
def majorityElement(self, arr):
count = {}
for i in arr:
if i in count:
count[i] += 1
else:
count[i] = 1
majority = len(arr)//2+1
majel = [ k for k, v in count.items() if v >= majority ]
return majel[0] if majel else -1

0

Reply

ASHISH3 months agoJun 11, 2026 22:58 (GMT +5:30)

USING UNORDERD_MAP IN N*logN TIME.                                                                                       int majorityElement(vector<int>& arr) {
unordered_map<int,int>mp;
for(int i=0;i<arr.size();i++)
mp[arr[i]]++;
for (auto i : mp)
if(i.second>arr.size()/2)
return i.first;
return -1;

}

0

Reply

Himanshu Kumar3 months agoJun 09, 2026 09:52 (GMT +5:30)

class Solution {
public:
int majorityElement(vector<int>& arr) {
// code here
int n = arr.size();
unordered_map<int, int> mm;
for(auto x : arr) mm[x]++;
for(auto [key, value] : mm){
if(value > n/2) return key;
}
return -1;
}
};

1

Reply

SOWMIYA S3 months agoJun 06, 2026 09:45 (GMT +5:30)

class Solution {
int majorityElement(int arr[]) {
int n = arr.length;
HashMap<Integer,Integer>hm = new HashMap<>();
for(int num:arr){
hm.put(num,hm.getOrDefault(num,0)+1); // count frequency

if(hm.get(num)>n/2) return num;
}
return -1;
}
}

1

Reply

Andreas Hultman(Edited)05/06/2026, 02:43
3 months agoJun 05, 2026 02:39 (GMT +5:30)

class Solution {
majorityElement(arr) {
const count = new Map();
for(let i =0; i < arr.length; i++){
count.set(arr[i], (count.get(arr[i]) || 0) + 1);
if(count.get(arr[i]) > arr.length/2) {return arr[i]}
}
return -1
}
}

1

Reply

Aditya Sharma3 months agoJun 04, 2026 10:05 (GMT +5:30)

class Solution {
int majorityElement(int arr[]) {
//check candidates
int candidates = 0;
int count = 0;

for(int num : arr){
if(count==0){
candidates = num;
}
if(num==candidates){
count++;
}else{
count--;
}
}
//verify candidates
count=0;
for(int num : arr){
if(num==candidates){
count++;
}
}
if(count>arr.length/2){
return candidates;
}
return -1;

}
}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1131 / 1131
Attempts : Correct / Total1 / 2Accuracy : 50%

Points Scored 4 / 4Your Total Score:78

Time Taken0.39

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
def majorityElement(self, arr):
freq = {}

for x in arr:
freq[x] = freq.get(x, 0) + 1

for x in freq:
if freq[x] > len(arr) // 2:
return x

return -1

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1131 / 1131
Attempts : Correct / Total1 / 2Accuracy : 50%

Points Scored 4 / 4Your Total Score:78

Time Taken0.39

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Majority Element](https://www.geeksforgeeks.org/problems/majority-element-1587115620/1)
