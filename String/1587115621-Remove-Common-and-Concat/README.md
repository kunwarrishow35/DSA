# Remove Common and Concat

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

Remove Common and Concat
Solved

Difficulty: BasicAccuracy: 30.78%Submissions: 88K+Points: 1Average Time: 30m

Given two strings, s1 and s2. The task is to remove all characters that are common in both strings and then combine the remaining characters from each string to form a new string.

The characters that are not shared between the two strings should appear in the result in the same order as they appear in their respective original strings.

If no characters are left after removing the common characters, return "-1"

Examples:

Input: s1 = aacdb, s2 = gafd
Output: cbgf
Explanation: The common characters of s1 and s2 are: a, d. The uncommon characters of s1 and s2 are c, b, g and f. Thus the modified string with uncommon characters concatenated is cbgf.

Input: s1 = abcs, s2 = cxzca
Output: bsxz
Explanation: The common characters of s1 and s2 are: a,c. The uncommon characters of s1 and s2 are b,s,x and z. Thus the modified string with uncommon characters concatenated is bsxz.

Constraints:
1 <= |Length of Strings| <= 105

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(n)

Company Tags

Microsoft

Topic Tags

Strings

Related Articles

Remove Common And Concat

Discussions ( 314 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Bhupesh Dewangan(Edited)31/05/2026, 13:18
4 months agoMay 31, 2026 13:17 (GMT +5:30)

Approach

Create a frequency array v to store the characters present in s2.

Traverse s1:

If a character of s1 is not present in s2, append it to the answer string.

Create another frequency array v2 to store the characters present in s1.

Traverse s2:

If a character of s2 is not present in s1, append it to the answer string.

If no characters are added to the result string, return "-1"; otherwise return the constructed string.

Intuition

Any character that appears in both strings must be removed. By storing the presence of characters from one string in a frequency array, we can quickly check whether a character exists in the other string. We first keep only the unique characters from s1, then append the unique characters from s2, preserving their original order.

Time Complexity

Building frequency arrays: O(n + m)

Traversing both strings: O(n + m)

Overall: O(n + m)

Space Complexity

Two frequency arrays of size 26: O(1) (constant space)

class Solution {
public:
string concatenatedString(string s1, string s2) {

// Frequency array to mark characters present in s2
vector<int> v(26, 0);
string ans = "";

// Store frequency/presence of characters from s2
for(char x : s2) {
v[x - 'a']++;
}

// Add only those characters from s1
// that are not present in s2
for(char x : s1) {
if(v[x - 'a'] == 0) {
ans += x;
}
}

// Frequency array to mark characters present in s1
vector<int> v2(26, 0);

// Store frequency/presence of characters from s1
for(char x : s1) {
v2[x - 'a']++;
}

// Add only those characters from s2
// that are not present in s1
for(char x : s2) {
if(v2[x - 'a'] == 0) {
ans += x;
}
}

// If no uncommon characters exist, return "-1"
if(ans.length() == 0)
ans = "-1";

return ans;
}
};

0

Reply

Prinson Jose J7 months agoMar 16, 2026 21:56 (GMT +5:30)

class Solution:

def concatenatedString(self,s1,s2):

if len(set(s1).difference(set(s2))) == 0 and len(set(s2).difference(set(s1))) == 0:

return -1

str_set = set(s1)

str_set2= set(s2)

lis_str = list(s1) + list(s2)

lis_str2 = []

intersection_set = str_set.intersection(str_set2)

for i in lis_str:

if i not in intersection_set:

lis_str2.append(i)

s3 = "".join(lis_str2)

return s3

0

Reply

harshaawate8 months agoFeb 17, 2026 21:37 (GMT +5:30)

c = ""
for i in s1:
if i not in s2:
c+=i
for j in s2:
if j not in s1:
c+=j
if len(c)==0:
return "-1"
else:
return c

0

Reply

Abhishek(Edited)09/02/2026, 23:18
8 months agoFeb 09, 2026 23:17 (GMT +5:30)

Using nested for loops. Altough it run test cases but doesn't met the expected tiem compelxity of O(n). For this complexity i guess using if in operator etc is must. but still sharing this nested loop way of doing as well.

class Solution:
def concatenatedString(self,s1,s2):
#code here
res = ''
for i in range(0,len(s1)):
flag = True
for j in range(0,len(s2)):
if (s1[i] == s2[j]):
flag = False
break
if flag:
#si[i] not found in s2
res = res + s1[i]

for i in range(0,len(s2)):
flag = True
for j in range(0,len(s1)):
if (s2[i] == s1[j] ):
flag = False
break
if flag:
#si[i] not found in s2
res = res + s2[i]

if res == '':
return -1
return res

0

Reply

Abhishek8 months agoFeb 09, 2026 23:17 (GMT +5:30)

using nested for loops.

0

Reply

Amit Maurya9 months agoJan 17, 2026 15:20 (GMT +5:30)

class Solution {
public static String concatenatedString(String s1, String s2) {
StringBuilder sb=new StringBuilder();
for(char ch:s1.toCharArray()){
if(s2.indexOf(ch)==-1){
sb.append(ch);
}
}
for(char ch:s2.toCharArray()){
if(s1.indexOf(ch)==-1){
sb.append(ch);
}
}
if(sb.length()==0){
return "-1";
}
return sb.toString();
}
}

1

Reply
(Show 1 Replies)

Sri durga Devi9 months agoJan 12, 2026 10:52 (GMT +5:30)

class Solution {
public static String concatenatedString(String s1, String s2) {
// code here
List <Character> n1=new ArrayList<>();
List <Character> n2=new ArrayList<>();

for(char c1:s1.toCharArray())
{
n1.add(c1);
}
for(char c2:s2.toCharArray())
{
n2.add(c2);
}
List <Character> n3=new ArrayList<>(n1);
n1.addAll(n2);
n3.retainAll(n2);
n1.removeAll(n3);
String s3="";
for(char n31:n1)
{
s3+=n31;
}
if(s3.equals(""))
{
return "-1";
}
else
{
return s3;
}

}
}

0

Reply

Sohan Chidrawar9 months agoDec 30, 2025 20:40 (GMT +5:30)

class Solution {
public:
string concatenatedString(string s1, string s2) {
//  code here
int n = s1.length();
int m = s2.length();
string ans = "";
for(int i=0;i<n;i++)
{
bool flag = true;
char ch = s1[i];
for(int j=0;j<m;j++)
{
if(ch==s2[j])
{
flag = false;
break;
}
}
if(flag)
ans = ans + ch;
}
for(int j=0;j<m;j++)
{
bool flag1 = true;
char ch1 = s2[j];
for(int i=0;i<n;i++)
{
if(ch1==s1[i])
{
flag1 = false;
break;
}
}
if(flag1)
ans = ans + ch1;
}
int p = ans.length();
if(p>=1)
return ans;
else
return "-1";
}
};

0

Reply

priyal   gupta11 months agoNov 17, 2025 13:50 (GMT +5:30)

class Solution {
public static String concatenatedString(String s1, String s2) {
// code here
// String res="";
HashSet<Character> set1=new HashSet<>();
HashSet<Character>set2=new HashSet<>();

for(char c: s1.toCharArray()){
set1.add(c);
}

for(char c: s2.toCharArray()){
set2.add(c);
}
StringBuilder res=new StringBuilder();

for(char c: s1.toCharArray()){
if(!set2.contains(c))
res.append(c);
}

for(char c: s2.toCharArray()){
if(!set1.contains(c))
res.append(c);
}
if(res.length()==0){
return "-1";
}
return res.toString();
}
}

0

Reply

Anonymous_Geek1 year agoOct 05, 2025 19:45 (GMT +5:30)

se1 = set(s1)
se2 = set(s2)
ser = se1.intersection(se2)
r = ""
result = []
for i in s1:
if i not in ser:
result.append(i)

for i in s2:
if i not in ser:
result.append(i)

for i in result:
r += i

if r == "":
return -1
return r

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1120 / 1120
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:97

Time Taken0.09

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

class Solution:
def concatenatedString(self, s1, s2):
set1 = set(s1)
set2 = set(s2)

res = []
for ch in s1:

if ch not in set2:
res.append(ch)

for ch in s2:

if ch not in set1:
res.append(ch)

result = "".join(res)

if result:
return result

return "-1"

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1120 / 1120
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:97

Time Taken0.09

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Remove Common and Concat](https://www.geeksforgeeks.org/problems/remove-common-characters-and-concatenate-1587115621/1)
