# Alternate Merge Two Strings

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

Alternate Merge Two Strings
Solved

Difficulty: BasicAccuracy: 47.43%Submissions: 46K+Points: 1

Given two strings s1 and s2, merge them alternatively i.e. the first character of s1 then the first character of s2 and so on till the strings end.

Note: Add the whole string if other string is empty.

Examples:

Input: s1 = "Hello", s2 = "Bye"
Output: HBeylelo
Explanation: The characters of both the given strings are arranged alternatlively.

Input: s1 = "abc", s2 = "def"
Output: adbecf
Explanation: The characters of both the given strings are arranged alternatlively.

Constraints:
1<=|s1|, |s2| <=103

Expected Complexities

Time Complexity: O(|s1| + |s2|)
Auxiliary Space: O(1)

Company Tags

Goldman Sachs

Topic Tags

Strings

Related Interview Experiences

Goldman Sachs Interview Experience Set 31 Internship

Related Articles

Alternatively Merge Two Strings In Java

Discussions ( 287 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

keshav nandwal1 month agoSep 13, 2026 21:22 (GMT +5:30)

class Solution {
public:
string merge(string &s1, string &s2) {
// code here
string result = "";
int n1 = s1.size(), n2 = s2.size();
for (int i = 0; i<max(n1, n2); ++i) {
if (i<n1)result.push_back(s1[i]);
if (i<n2)result.push_back(s2[i]);
}
return result;
}
};

0

Reply

Sarika Kumar1 month agoAug 31, 2026 21:31 (GMT +5:30)

class Solution:
def merge(self, s1, s2):
# code here
d = ''
if len(s1) > len(s2):
for i in range(len(s1)):
if i > (len(s2)-1):
d+=s1[i]
else:
d += s1[i]+s2[i]
# print(d)
elif len(s1) < len(s2):
for i in range(len(s2)):
if i < (len(s1)-1):
# d+=s1[i]
d += s1[i]+s2[i]
else:
# d += s1[i]+s2[i]
d+=s2[i]
else:
for i in range(len(s1)):
d += s1[i]+s2[i]
return d

0

Reply

Sarika Kumar1 month agoAug 29, 2026 21:28 (GMT +5:30)

class Solution:
def merge(self, s1, s2):
# code here
d =''
if len(s1) > len(s2):
for i in range(len(s1)):
print(i)
if i > (len(s2)-1):
print(2,i)
d+=s1[i]
else:
d += s1[i]+s2[i]
return d
else:
for i in range(len(s2)):
print(i)
if i > (len(s1)-1):
print(2,i)
d+=s2[i]
else:
d += s1[i]+s2[i]
return d

0

Reply

Manav Kumar1 month agoAug 26, 2026 16:13 (GMT +5:30)

class Solution {
String merge(String s1, String s2) {
// code here
StringBuilder sb = new StringBuilder();
int idx = 0;

for(int i = 0 ; i < s1.length() && i < s2.length() ; i++){

sb.append(s1.charAt(i));
sb.append(s2.charAt(i));
idx++;
}
sb.append(s1.substring(idx));
sb.append(s2.substring(idx));

return sb.toString();
}
}

0

Reply

Narendra Kumcham2 months agoAug 10, 2026 17:07 (GMT +5:30)

class Solution {

public static String merge(String s1, String s2) {

StringBuilder s3 = new StringBuilder();

int l = s1.length()+s2.length();

for(int i = 0;i < l;i++) {

s3.append(Test1(s1,i));

s3.append(Test2(s2,i));

}

for(int i = 0; i< s3.length();i++) {

if(s3.charAt(i)=='0') {

s3.deleteCharAt(i);

i--;

}

}

return new String(s3);

}

public static char Test2(String s1, int i) {

if(i<s1.length())

return s1.charAt(i);

else

return '0';

}

public static char Test1(String s2, int i) {

if(i<s2.length())

return s2.charAt(i);

else

return '0';

}

}

0

Reply

Aryan Dewade8 months agoFeb 01, 2026 22:50 (GMT +5:30)

Easy C++ Solution
string merge(string s1, string s2) {
int n = s1.size();
int m = s2.size();
int size = max(n, m);
string str = "";
for(int i=0; i<size; i++){
if(i<n) str += s1[i];
if(i<m) str += s2[i];

}
return str;

}

0

Reply

Shardendu Awasthi8 months agoJan 31, 2026 20:22 (GMT +5:30)

class Solution:
def merge(self, S1, S2):
# code here

sa = list(S1)
ss = list(S2)
n1 = len(sa)
n2 = len(ss)

if n1>n2:
s_map = map(lambda x, y: x+y, sa, ss)
s_list = list(s_map)
k = S1[n2:]
return "".join(s_list)+k
elif n2>n1:
s_map = map(lambda x, y: x+y, sa, ss)
s_list = list(s_map)
k = S2[n1:]
return "".join(s_list)+k
else:
s_map = map(lambda x, y: x+y, sa, ss)
s_list = list(s_map)
return "".join(s_list)

0

Reply

Pratik Sinha(Edited)23/12/2025, 02:07
10 months agoDec 23, 2025 02:06 (GMT +5:30)

class Solution:
def merge(self, S1, S2):
l=""
i=j=0
while i < len(S1) and j < len(S2):
l+=S1[i]+S2[j]
i=i+1
j=j+1
if len(S1)>len(S2):
l+=S1[j:]
else:
l+=S2[i:]
return l

0

Reply

Saurabh Biswal12 months agoOct 26, 2025 20:48 (GMT +5:30)

/ User function Template for Java
class Solution {
String merge(String S1, String S2) {
int index=0;
// code here
StringBuilder builder=new StringBuilder();
if (S1.length() == 0) {
builder.append(S2);
return builder.toString();
}
if (S2.length() == 0) {
builder.append(S1);
return builder.toString();
}
for(int i=0;i<Math.max(S1.length(),S2.length());i++){
if(index<S1.length()){
builder.append(S1.charAt(index));
}
if(index<S2.length()){
builder.append(S2.charAt(index));
}
index++;
}
return builder.toString();
}
}

0

Reply

Sai Vishnu Vardhan Bathini1 year agoOct 22, 2025 17:59 (GMT +5:30)

For Python3 Platform

class Solution:
def merge(self, S1, S2):
result = ""

if(len(S1) <= len(S2)):
for i in range(len(S1)):
result += (S1[i] + S2[i])

result += S2[len(S1):]
else:
for i in range(len(S2)):
result += (S1[i] + S2[i])

result += S1[len(S2):]

return result

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed74 / 74
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:111

Time Taken0.03

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
32
33
34
35
36
37
38
39

class Solution:
def merge(self, s1, s2):
# code here
res = ''
i = j = 0
while i<len(s1) and j<len(s2):
res += s1[i]
res+=s2[j]
i+=1
j+=1
while i <len(s1):
res+=s1[i]
i+=1
while j < len(s2):
res += s2[j]
j+=1

return res

# class Solution:
#     def merge(self, s1, s2):
#         res = ''
#         i = j = 0

#         while i < len(s1) and j < len(s2):
#             res += s1[i]
#             res += s2[j]
#             i += 1
#             j += 1

#         while i < len(s1):
#             res += s1[i]
#             i += 1

#         while j < len(s2):
#             res += s2[j]
#             j += 1

#         return res

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed74 / 74
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:111

Time Taken0.03

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Alternate Merge Two Strings](https://www.geeksforgeeks.org/problems/merge-two-strings2736/1)
