# Longest Word

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

Longest Word
Solved

Difficulty: BasicAccuracy: 66.29%Submissions: 87K+Points: 1Average Time: 15m

Given an array arr[] containing strings of names. Your task is to return the longest string. If there are multiple names of the longest size, return the first occurring name.

Examples :

Input: arr[] = ["Geek", "Geeks", "Geeksfor", "GeeksforGeek", "GeeksforGeeks"]
Output: "GeeksforGeeks"
Explanation: Name "GeeksforGeeks" has maximum length among all names.

Input: arr[] = ["Apple", "Mango", "Orange", "Banana"]
Output: "Orange"
Explanation: Names "Orange" and "Banana" both have maximum length among all names but Orange comes first so answer will be "Orange".

Constraints:
1 ≤ arr.size() ≤ 1000
1 ≤ arr[i] ≤ 1000
arr[i] has only lowercase and uppercase letters

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Topic Tags

ArraysStrings

Related Articles

Print All Strings Of Maximum Length From An Array Of Strings

Discussions ( 463 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Aakash1 month agoSep 08, 2026 19:00 (GMT +5:30)

it's very simple, 1 find lenght 2 loop 3 put ; so easy

1

Reply

DAYAPULI SRINIVASULA RAO1 month agoAug 31, 2026 10:29 (GMT +5:30)

class Solution:
def longest(self, arr):
# code here
l=[]
for word  in arr:
l.append(len(word))
m=max(l)
largest_element = l.index(m)
return arr[largest_element]

1

Reply

shubham singh2 months agoAug 03, 2026 17:10 (GMT +5:30)

class Solution {
longest(arr) {
// code here
let max = arr[0];

for(let str of arr){
if(str.length>max.length){
max = str;
}
}

return max;
}
}

0

Reply

Ehmed Fayaz2 months agoAug 02, 2026 00:16 (GMT +5:30)

class Solution {
public String longest(String[] arr) {
// code here
int max=0;
String name="";
for(String s : arr)
{
int length=s.length();
if(max<length)
{
max=length;
name=s;
}
}
return name;
}
}

0

Reply

Anonymous_Geek4 months agoJun 10, 2026 19:58 (GMT +5:30)

class Solution:
def longest(self, arr):
# code here

# [] = 0
# [1] = longest

longest = arr[0]

if len(arr)>0:

for i in arr:
if len(i) > len(longest):
longest = i

return longest

0

Reply

Anonymous_Geek4 months agoJun 09, 2026 13:27 (GMT +5:30)

class Solution:

def longest(self, arr):

largest=arr[0]

for i in arr:

if len(i)>len(largest):

largest=i

return largest

ob=Solution()

0

Reply

Mukesh Kumar Pathak6 months agoMar 30, 2026 00:39 (GMT +5:30)

class Solution {
public:
virtual string longest(vector<string>& arr){
string lngName="";
int len=0;

for(string s: arr){
int clen=s.size();
if(len < clen){
len=clen;
lngName=s;
}
}

return lngName;
}
};

0

Reply

harshaawate8 months agoFeb 17, 2026 21:38 (GMT +5:30)

max = arr[0]
for i in arr:
if len(i)>len(max):
max = i
return max

0

Reply

rajesh behera9 months agoJan 27, 2026 13:44 (GMT +5:30)

class Solution {
longest(arr) {
var longest =arr[0];
for(let i=1;i<arr.length;i++){
if(arr[i].length > longest.length){
longest=arr[i];
}
}
return longest;

}
}                                                                                                                    JAVASCRIPT CODE

0

Reply

fardeen25dy089 months agoJan 25, 2026 23:54 (GMT +5:30)

def longest(self, arr):
# code here
llm={}
for i in arr:
llm[i]=len(i)
x=max(llm,key=llm.get)
return x

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 6Accuracy : 16%

Points Scored 1 / 1Your Total Score:104

Time Taken0.05

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

class Solution:
def longest(self, arr):
if len(arr) == 0:
return ""

maximum = len(arr[0])
max_str = arr[0]

for i in range(1, len(arr)):
if len(arr[i]) > maximum:
maximum = len(arr[i])
max_str = arr[i]

return max_str

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 6Accuracy : 16%

Points Scored 1 / 1Your Total Score:104

Time Taken0.05

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Longest Word](https://www.geeksforgeeks.org/problems/display-longest-name0853/1)
