# Common in 3 Sorted

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

Common in 3 Sorted
Solved

Difficulty: EasyAccuracy: 22.16%Submissions: 466K+Points: 2

Given three sorted arrays in non-decreasing order, return all common elements in non-decreasing order across these arrays.
If there are no common, return an empty array.
Include each common element only once in the output.
Examples :
Input: a[] = [1, 5, 10, 20, 40, 80], b[] = [6, 7, 20, 80, 100], c[] = [3, 4, 15, 20, 30, 70, 80, 120]
Output: [20, 80]
Explanation: The elements 20 and 80 appear in all three arrays a, b, and c, making them the only common elements, so the output is [20, 80].
Input: a[] = [1, 2, 3, 4, 5], b[] = [6, 7], c[] = [8, 9, 10]
Output: []
Explanation: Since none of the elements in arrays a, b, and c appear in all three arrays, there are no common elements, so the output is [].
Input:  a[] = [1, 1, 1, 2, 2, 2], b[] = [1, 1, 2, 2, 2], c[] = [1, 1, 1, 1, 2, 2, 2, 2]
Output: [1, 2]
Explanation: Ignoring duplicates, 1 and 2 are present in all three arrays, so the output is [1, 2].

Constraints:
1 ≤ a.size(), b.size(), c.size() ≤ 105
-105 ≤ a[i], b[i], c[i] ≤ 105

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Company Tags

VMWareMicrosoftMAQ Software

Topic Tags

Searching

Related Interview Experiences

Microsoft Interview Experience Set 58 For Software Engineer

Related Articles

Find Common Elements Three Sorted Arrays

Discussions ( 1099 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Ashutosh Kumar1 month agoSep 22, 2026 11:52 (GMT +5:30)

Easiest c++ solution

class Solution {
public:
vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
// code here
int i = 0,j= 0, k= 0;

vector<int> ans;

while(i<a.size() && j<b.size() && k<c.size()){
if(a[i]== b[j] && b[j] == c[k]){
if(ans.empty() || ans.back() != a[i])
ans.push_back(a[i]);
i++;
j++;
k++;
}
else{
int smallest = min(a[i],min(b[j],c[k]));
if(a[i] == smallest)
i++;
if(b[j] == smallest)
j++;
if(c[k] == smallest)
k++;
}
}
return ans;

}
};

0

Reply

Siddharth Soma1 month agoSep 02, 2026 18:11 (GMT +5:30)

class Solution {
public ArrayList<Integer> commonElements(int[] a, int[] b, int[] c) {
// code here
ArrayList<Integer> ans = new ArrayList<>();

Map<Integer, Character> mp = new HashMap<>();
for (int ele : a) {
if (!mp.containsKey(ele))
mp.put(ele , 'A');
}

for (int ele : b) {
if (mp.containsKey(ele) && mp.get(ele) == 'A') {
mp.put(ele, 'B');
}
}

for (int ele : c) {
if (mp.containsKey(ele) && mp.get(ele) == 'B') {
mp.put(ele , 'C');
}
}

for (var entry : mp.entrySet()) {
if (entry.getValue() == 'C') ans.add(entry.getKey());
}

ans.sort(Comparator.naturalOrder());

return ans;
}
}

0

Reply

Siddharth Soma1 month agoSep 02, 2026 18:11 (GMT +5:30)

class Solution {
public ArrayList<Integer> commonElements(int[] a, int[] b, int[] c) {
// code here
ArrayList<Integer> ans = new ArrayList<>();

Map<Integer, Character> mp = new HashMap<>();
for (int ele : a) {
if (!mp.containsKey(ele))
mp.put(ele , 'A');
}

for (int ele : b) {
if (mp.containsKey(ele) && mp.get(ele) == 'A') {
mp.put(ele, 'B');
}
}

for (int ele : c) {
if (mp.containsKey(ele) && mp.get(ele) == 'B') {
mp.put(ele , 'C');
}
}

for (var entry : mp.entrySet()) {
if (entry.getValue() == 'C') ans.add(entry.getKey());
}

ans.sort(Comparator.naturalOrder());

return ans;
}
}

0

Reply

sumatew7a(Edited)11/08/2026, 12:53
2 months agoAug 11, 2026 12:48 (GMT +5:30)

class Solution {
commonElements(a, b, c) {
let i = 0, j = 0, k = 0;
let result = [];

while (i < a.length && j < b.length && k < c.length) {

if (a[i] === b[j] && b[j] === c[k]) {
// Avoid duplicates
if (result.length === 0 || result[result.length - 1] !== a[i]) {
result.push(a[i]);
}

i++;
j++;
k++;
}
else if (a[i] < b[j]) {
i++;
}
else if (b[j] < c[k]) {
j++;
}
else {
k++;
}
}

return result;
}
}

0

Reply

NAVINKUMAR K3 months agoJul 22, 2026 09:14 (GMT +5:30)

import java.util.ArrayList;
import java.util.TreeSet;

class Solution {
public ArrayList<Integer> commonElements(int[] a, int[] b, int[] c) {
TreeSet<Integer> set1 = new TreeSet<>();
TreeSet<Integer> set2 = new TreeSet<>();
TreeSet<Integer> ans = new TreeSet<>();
for (int num : a) {
set1.add(num);
}
for (int num : b) {
if (set1.contains(num)) {
set2.add(num);
}
}
for (int num : c) {
if (set2.contains(num)) {
ans.add(num);
}
}

return new ArrayList<>(ans);
}
}

0

Reply

Meet Panchal3 months agoJul 19, 2026 18:13 (GMT +5:30)

class Solution {
public:
vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
// code here
map<int, string> mp;
vector<int> ans;
for(int i=0;i<max(max(a.size(),b.size()),c.size());i++) {
if ( i< a.size() ) {
mp[a[i]]+= "a";
}
if (i<b.size()) {
mp[b[i]]+="b";
}
if(i<c.size()) {
mp[c[i]]+="c";
}
}

for( auto &p : mp) {
string s = p.second;

if (s.find('a') != string::npos &&
s.find('b') != string::npos &&
s.find('c') != string::npos)
{
ans.push_back(p.first);
}
}
return ans;
}
};

1

Reply

Shelly Garg(Edited)01/07/2026, 18:29
3 months agoJul 01, 2026 18:26 (GMT +5:30)

PYTHON - EASY CODE                                                                             All cases have been cleared, so everyone please give it a try.
class Solution:
def commonElements(self, a, b, c):
i = j = k = 0
res = []

while i < len(a) and j < len(b) and k < len(c):
if a[i] == b[j] == c[k]:
if not res or res[-1] != a[i]:
res.append(a[i])
i += 1
j += 1
k += 1
else:
m = min(a[i], b[j], c[k])
if a[i] == m: i += 1
if b[j] == m: j += 1
if c[k] == m: k += 1

return res

1

Reply
(Show 1 Replies)

Tarun P4 months agoMay 30, 2026 08:37 (GMT +5:30)

python

class Solution:
def commonElements(self, a, b, c):
# code here
a=set(a)
b=set(b)
c=set(c)
res=[]
for val in a:
if val in b and val in c:
res.append(val)
return sorted(res)

0

Reply

Anonymous_Geek5 months agoMay 05, 2026 23:50 (GMT +5:30)

class Solution {
public:
vector<int> commonElements(vector<int> &a, vector<int> &b, vector<int> &c) {
vector<int> ele;
int i = 0, j = 0;
while(i<a.size() and j<b.size()){
if(a[i] == b[j]){
int k = lower_bound(c.begin(), c.end(), a[i]) - c.begin();
if(k != c.size() and c[k] == a[i]){
ele.push_back(a[i]);
}
i++, j++;
}
else if(a[i]<b[j])i++;
else j++;
}
if(ele.empty())return ele;
ele.erase(unique(ele.begin(), ele.end()), ele.end());
return ele;
}
};

0

Reply

SANih5 months agoMay 04, 2026 22:24 (GMT +5:30)

class Solution {
public ArrayList<Integer> commonElements(int[] a, int[] b, int[] c) {
// code here
HashSet<Integer> set1= new HashSet<>();
HashSet<Integer> set2= new HashSet<>();
HashSet<Integer> ans = new HashSet<>();

for(int i=0; i< a.length; i++){
set1.add(a[i]);
}
for(int j=0; j<b.length; j++){
if(set1.contains(b[j])){
set2.add(b[j]);
}
}
for(int k=0; k<c.length; k++){
if(set2.contains(c[k])){
ans.add(c[k]);
}
}

ArrayList<Integer> list = new ArrayList<>(ans);
Collections.sort(list);
return list;
}
}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1112 / 1112
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:125

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

class Solution:
def commonElements(self, a, b, c):
return sorted(set(a) & set(b) & set(c))

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1112 / 1112
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:125

Time Taken0.15

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Common in 3 Sorted](https://www.geeksforgeeks.org/problems/common-elements1132/1)
