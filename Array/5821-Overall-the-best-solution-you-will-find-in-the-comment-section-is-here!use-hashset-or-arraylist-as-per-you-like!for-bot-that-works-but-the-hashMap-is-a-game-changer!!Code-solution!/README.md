# Overall the best solution you will find in the comment section is here!use hashset or arraylist as per you like!for bot that works : but the hashMap is a game changer!!Code solution!

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

Merge and Sort
Solved

Difficulty: BasicAccuracy: 48.84%Submissions: 16K+Points: 1

Given two arrays arr1[] and arr2[], return the merged array in ascending order containing unique elements.

Examples:

Input: arr1[] = [11, 1, 8], arr2[] = [10, 11]
Output: [1, 8, 10, 11]
Explanation: The ouput array after merging both the arrays and removing duplicates is [1, 8, 10, 11]

Input: arr1[] = [7, 1, 5, 3, 9], arr2[]  = [8, 4, 3, 5, 2, 6]
Output: [1, 2, 3, 4, 5, 6, 7, 8, 9]

Constraints:
1 ≤ arr1.size(), arr2.size() ≤ 104
0 ≤ arr1[i], arr2[i] ≤ 109

Expected Complexities

Time Complexity: O((n+m) * log(n+m) )
Auxiliary Space: O(n + m)

Topic Tags

ArraysSortingMerge Sort

Related Articles

Merging Two Unsorted Arrays Sorted Order

Discussions ( 74 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

keshav nandwal2 hours agoSep 16, 2026 17:40 (GMT +5:30)

class Solution {
public:
vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) {
//  code here
int n = arr1.size(), m = arr2.size();
sort(arr1.begin(), arr1.end());
sort(arr2.begin(), arr2.end());
int i = 0, j = 0;
vector<int>result;
while (i<n && j<m) {
if (arr1[i] <= arr2[j]) {
if (result.empty() ||
result.back() != arr1[i])result.push_back(arr1[i]);
i++;
}
else if (arr2[j] <= arr1[i]) {
if (result.empty() ||
result.back() != arr2[j])result.push_back(arr2[j]);
j++;
}
}

while (i<n) {
if (result.empty() || result.back()
!= arr1[i])result.push_back(arr1[i]);
i++;
}

while (j<m) {
if (result.empty() || result.back()
!= arr2[j])result.push_back(arr2[j]);
j++;
}
return result;
}
};

0

Reply

keshav nandwal2 hours agoSep 16, 2026 17:37 (GMT +5:30)

class Solution {
public:
vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) {
//  code here
int n = arr1.size(), m = arr2.size();
sort(arr1.begin(), arr1.end());
sort(arr2.begin(), arr2.end());
int i = 0, j = 0;
vector<int>result;
while (i<n && j<m) {
if (arr1[i] <= arr2[j]) {
if (result.empty() || (!result.empty()
&& result.back() != arr1[i]))result.push_back(arr1[i]);
i++;
}
else if (arr2[j] <= arr1[i]) {
if (result.empty() || (!result.empty()
&& result.back() != arr2[j]))result.push_back(arr2[j]);
j++;
}
}

while (i<n) {
if (result.empty() || (!result.empty() && result.back()
!= arr1[i]))result.push_back(arr1[i]);
i++;
}

while (j<m) {
if (result.empty() || (!result.empty() && result.back()
!= arr2[j]))result.push_back(arr2[j]);
j++;
}
return result;
}
};

0

Reply

Ehmed Fayaz1 month agoJul 30, 2026 10:40 (GMT +5:30)

class Solution {
public ArrayList<Integer> mergeNsort(int[] arr1, int[] arr2) {
// code here
ArrayList<Integer> faiz = new ArrayList<>();
for(int num1:arr1)
{
faiz.add(num1);
}
for(int num2:arr2)
{
faiz.add(num2);
}
Collections.sort(faiz);
LinkedHashSet<Integer> set= new LinkedHashSet<>();
for(int it : faiz)
{
set.add(it);
}
return new ArrayList<>(set);
}
}

0

Reply

shubham singh2 months agoJul 05, 2026 22:33 (GMT +5:30)

class Solution {
mergeNsort(arr1, arr2) {
// code here
// arr1.sort((a,b)=>a-b);

// arr2.sort((a,b)=>a-b);

let merged = arr1.concat(arr2);

let unique =  [...new Set(merged)]

unique.sort((a,b)=>a-b)

return unique;
}
}

0

Reply

Kundan Kumar4 months agoMay 03, 2026 08:26 (GMT +5:30)

class Solution {
public:
vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) {
//  code here
set<int> s;
for(auto x : arr1) s.insert(x);
for(auto x : arr2) s.insert(x);

vector<int> result(s.begin(),s.end());

return result;
}
};

0

Reply

Abhinav Puri5 months agoMar 31, 2026 22:19 (GMT +5:30)

Overall the best solution you will find in the comment section is here!
use hashset or arraylist as per you like!
for bot that works : but the hashMap is a game changer!!
Code solution!
class Solution {
public ArrayList<Integer> mergeNsort(int[] arr1, int[] arr2) {
// code here
// ArrayList<Integer> list = new ArrayList<>();
// for ( int i : arr1 ) {
//     if ( !list.contains(i) ) list.add(i);
// }
// for ( int j : arr2 ) {
//     if ( !list.contains(j) ) list.add(j);
// }
HashSet<Integer> set = new HashSet<>();
for ( int i : arr1 ) set.add(i);
for ( int j : arr2 ) set.add(j);
ArrayList<Integer> list = new ArrayList<>(set);
Collections.sort(list);
return list;
}
}

Do upvote for others to! :😊

0

Reply

Bhavya   Singh5 months agoMar 28, 2026 17:42 (GMT +5:30)

JAVA EASY SOLUTION
class Solution {
public ArrayList<Integer> mergeNsort(int[] arr1, int[] arr2) {
// code here
ArrayList<Integer>  list =new ArrayList<>();

for(int i=0;i<arr1.length;i++){
list.add(arr1[i]);
}                          // [11,1,8]

for(int i=0;i<arr2.length;i++){
list.add(arr2[i]);   //[10,11]
}                         // [11,1,8,10,11]

HashSet<Integer> hashset =new HashSet<>(list);// [11,1,8,10]
ArrayList<Integer> list1 = new ArrayList<>(hashset);
Collections.sort(list1);  // [1,8,10,11]
return list1;
}
}

0

Reply

Vijaykumar V6 months agoMar 19, 2026 16:57 (GMT +5:30)

class Solution {
mergeNsort(arr1, arr2) {
// code here
let val=[...arr1,...arr2];

let val1= [...new Set(val)];

let res = val1.sort((a,b)=>a-b);

return res;
}
}

0

Reply

Nilesh Kumar(Edited)11/03/2026, 23:58
6 months agoMar 11, 2026 23:57 (GMT +5:30)

Set (Union of Arrays)

Steps:
1️⃣ Insert elements of arr1 into set
2️⃣ Insert elements of arr2 into set
3️⃣ set removes duplicates and keeps elements sorted
4️⃣ Copy elements from set → vector
5️⃣ Return the vector

Result:
👉 Merged + Sorted + Unique elements

Time Complexity:
O((n+m) log(n+m))

class Solution {
public:
vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) {
set<int> st;
for(int i = 0; i < arr1.size(); i++){
st.insert(arr1[i]);
}
for(int i = 0; i < arr2.size(); i++){
st.insert(arr2[i]);
}
vector<int> ans;
for(auto it : st){
ans.push_back(it);
}
return ans;
}
};

0

Reply

Nilesh Kumar6 months agoMar 11, 2026 23:57 (GMT +5:30)

class Solution {
public:
vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) {
set<int> st;
for(int i = 0; i < arr1.size(); i++){
st.insert(arr1[i]);
}
for(int i = 0; i < arr2.size(); i++){
st.insert(arr2[i]);
}
vector<int> ans;
for(auto it : st){
ans.push_back(it);
}
return ans;
}
};

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:36

Time Taken0.22

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
def mergeNsort(self, arr1, arr2):
# code here
new = arr1 + arr2
return sorted(set(arr1+arr2))

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:36

Time Taken0.22

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Overall the best solution you will find in the comment section is here!use hashset or arraylist as per you like!for bot that works : but the hashMap is a game changer!!Code solution!](https://www.geeksforgeeks.org/problems/merge-and-sort5821/1)
