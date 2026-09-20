# Pairs with 0 Sum

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

Pairs with 0 Sum
Solved

Difficulty: EasyAccuracy: 31.49%Submissions: 548K+Points: 2Average Time: 20m

Given an integer array arr, return all the unique pairs [arr[i], arr[j]] such that i != j and arr[i] + arr[j] == 0.

Note: The pairs must be returned in sorted order, the solution array should also be sorted, and the answer must not contain any duplicate pairs.

Examples:

Input: arr = [-1, 0, 1, 2, -1, -4]
Output: [[-1, 1]]
Explanation: arr[0] + arr[2] = (-1)+ 1 = 0.
arr[2] + arr[4] = 1 + (-1) = 0.
The distinct pair are [-1,1].

Input: arr = [6, 1, 8, 0, 4, -9, -1, -10, -6, -5]
Output: [[-6, 6],[-1, 1]]
Explanation: The distinct pairs are [-1, 1] and [-6, 6].

Constraints:
3 ≤ arr.size() ≤ 105
-105 ≤ arr[i] ≤ 105

Expected Complexities

Time Complexity: O(n log n)
Auxiliary Space: O(n)

Company Tags

FlipkartAccoliteAmazonFactSetHikeMakeMyTripGoldman SachsAdobeSalesforce

Topic Tags

ArraysSortingtwo-pointer-algorithm

Related Interview Experiences

Makemytrip Interview Experience For Software Engineer

Related Articles

2 Sum Find All Pairs With Zero SumGiven An Array Arr Find The Maximum J I Such That Arrj Arri

Discussions ( 950 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Anonymous_Geek(Edited)06/09/2026, 02:53
2 weeks agoSep 06, 2026 02:50 (GMT +5:30)

class Solution {
public static ArrayList<ArrayList<Integer>> getPairs(int[] arr) {
Arrays.sort(arr);
ArrayList<ArrayList<Integer>> ans = new ArrayList<>();
int start = 0;
int end = arr.length - 1;
while (start < end) {
if (arr[start] + arr[end] == 0) {
ans.add(new ArrayList<>(Arrays.asList(arr[start], arr[end])));
start++;
end--;

while (start < end && arr[start] == arr[start - 1]) {
start++;
}

while (start < end && arr[end] == arr[end + 1]) {
end--;
}
} else if (arr[start] + arr[end] < 0) {
start++;
} else {
end--;
}
}
return ans;
}
}

Optimal expected O(NlogN) Solution

0

Reply

Sarika Kumar3 weeks agoAug 27, 2026 22:00 (GMT +5:30)

class Solution:
def getPairs(self, arr):
# code here
nw = []
for i in range(len(arr)):
for j in range(i+1, len(arr)):
if arr[i] + arr[j] == 0 :
if arr[i] > arr[j] and [arr[j], arr[i]] not in nw:
nw.append([arr[j] , arr[i]])
# print(nw)
elif [arr[j] , arr[i]] in nw:
continue
else:
nw.append([arr[i], arr[j]])
return nw

0

Reply

Sarika Kumar3 weeks agoAug 27, 2026 22:00 (GMT +5:30)

[6, 1, 8, 0, 4, -9, -1, -10, -6, -5]

0

Reply

Sarika Kumar3 weeks agoAug 27, 2026 22:00 (GMT +5:30)

[6, 1, 8, 0, 4, -9, -1, -10, -6, -5]

0

Reply

Vijay1 month agoAug 20, 2026 17:26 (GMT +5:30)

C# Simple Solution

0

Reply

Chitravansh Mohan1 month agoAug 14, 2026 17:50 (GMT +5:30)

you will get stuck after 1111 cases so instaed of using heavy openration and checking the list maintain a set to decrease the load .

0

Reply

Supraja1 month agoAug 09, 2026 18:51 (GMT +5:30)

class Solution {

public static ArrayList<ArrayList<Integer>> getPairs(int[] arr) {

// code here

Arrays.sort(arr);

HashMap<Integer, Integer> hm = new HashMap<Integer, Integer>();

LinkedHashSet<ArrayList<Integer>> hs = new LinkedHashSet<ArrayList<Integer>> ();

for (int i : arr) {

hm.put(i, hm.getOrDefault(i, 0) + 1);

}

ArrayList<ArrayList<Integer>> solution = new ArrayList<ArrayList<Integer>> ();

for (int i = 0; i <arr.length ; i++) {

ArrayList<Integer> innerArray = new ArrayList<Integer>();

if (arr[i] < 0 && hm.containsKey(-arr[i]) && hm.get(-arr[i]) > 0) {

innerArray.add(arr[i]);

innerArray.add(-arr[i]);

hm.put(arr[i], hm.get(arr[i]) - 1);

hm.put(-arr[i], hm.get(-arr[i]) - 1);

hs.add(innerArray);

}

else if (arr[i] == 0) {

if (hm.get(arr[i]) >= 2) {

innerArray.add(0);

innerArray.add(0);

hm.put(arr[i], hm.get(arr[i]) - 2);

hs.add(innerArray);

}

}

}

solution = new ArrayList<>(hs);

return solution;

}

}

0

Reply

Jeetu Bohra2 months agoJul 22, 2026 14:37 (GMT +5:30)

class Solution {
public:
vector<vector<int>> getPairs(vector<int>& arr) {
// code here
unordered_set<int>seen;
set<vector<int>>uniquepair;

for(int i=0;i<arr.size();i++){
int x = arr[i];

if(seen.count(-x)){
uniquepair.insert({min(x,-x),max(x,-x)});
}
seen.insert(x);
}

vector<vector<int>>result(uniquepair.begin(),uniquepair.end());
return result;
}
};

0

Reply

Ratnesh Kumar2 months agoJul 17, 2026 12:24 (GMT +5:30)

Using double pointer python:

class Solution:
def getPairs(self, arr):
arr_list = sorted(list(set(arr)))
if arr.count(0)>1:
ans_arr = [[0,0]]
else:
ans_arr = []

i = 0
j = len(arr_list)-1

while i<j:
if arr_list[i]+arr_list[j]>0:
j-=1
elif arr_list[i]+arr_list[j]<0:
i+=1
elif arr_list[i]+arr_list[j]==0:
ans_arr.append([arr_list[i],arr_list[j]])
i+=1
j-=1

return sorted(ans_arr)

using set in python:
class Solution:
def getPairs(self, arr):
arr_list = sorted(list(set(arr)))
if arr.count(0)>1:
ans_arr = [[0,0]]
else:
ans_arr = []
arr_negative = []
arr_positive = []
for i in arr_list:
if i <0:
arr_negative.append(i)
elif i>0:
arr_positive.append(i)
arr_positive_set = set(arr_positive)
for i in arr_negative:
if -(i) in arr_positive_set:
ans_arr.append([i,-i])
return sorted(ans_arr)

0

Reply

Siddharth Soma3 months agoJun 21, 2026 12:15 (GMT +5:30)

class Solution {
public static ArrayList<ArrayList<Integer>> getPairs(int[] arr) {
// code here
HashSet<Integer> st = new HashSet<>();
ArrayList<ArrayList<Integer>> ans = new ArrayList<>();
int zeroCnt = 0;
for (int ele : arr) {
if (ele != 0)
st.add(ele);
else zeroCnt += 1;
}
if (zeroCnt > 1) {
ArrayList<Integer> lst = new ArrayList<>();
lst.add(0); lst.add(0);
ans.add(lst);
}
if (st.isEmpty()) { // only zero elements in array
return ans;
}
// -1 0 1 2 -1 -4
HashMap<Integer, Boolean> used = new HashMap<>();
for (int ele : arr) {
used.put(ele , false);
}
for (int i = 0 ; i < arr.length ; ++i) {
int ele = arr[i];
if (ele != 0 && !used.get(ele) && st.contains(-ele) && !used.get(-ele)) {
used.put(ele , true);
used.put(-ele , true);
if (-ele < ele)
ans.add(new ArrayList<>(List.of(-ele, ele)));
else
ans.add(new ArrayList<>(List.of(ele, -ele)));
}
}

ans.sort((row1 , row2) -> Integer.compare(row1.get(0) , row2.get(0)));
return ans;
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

Points Scored 2 / 2Your Total Score:48

Time Taken0.44

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
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31

class Solution:
def getPairs(self, arr):
arr.sort()

l = 0
r = len(arr) - 1
result = []

while l < r:
total = arr[l] + arr[r]

if total == 0:
result.append([arr[l], arr[r]])

left = arr[l]
right = arr[r]

while l < r and arr[l] == left:
l += 1

while l < r and arr[r] == right:
r -= 1

elif total < 0:
l += 1

else:
r -= 1

return result

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:48

Time Taken0.44

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Pairs with 0 Sum](https://www.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1)
