# Remove Vowels

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

Remove Vowels
Solved

Difficulty: BasicAccuracy: 41.92%Submissions: 66K+Points: 1

Given a string s. Your task is to remove the vowels from the string.

Examples:

Input: s = "welcome to geeksforgeeks"
Output: "wlcm t gksfrgks"
Explanation: Vowels were ignored only consonents were returned in the same order.

Input: s = "what is your name ?"
Output: wht s yr nm ?

Constraints:
1 <= |s| <= 105
Alphabets are lower cases only

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Company Tags

GE

Topic Tags

Strings

Related Articles

Program Remove Vowels String

Discussions ( 221 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Prateek Yadav3 weeks agoSep 30, 2026 12:08 (GMT +5:30)

class Solution {
String removeVowels(String s) {
StringBuilder ans = new StringBuilder();

for (int i = 0; i < s.length(); i++) {
char ch = s.charAt(i);

if (ch != 'a' && ch != 'e' && ch != 'i' &&
ch != 'o' && ch != 'u') {
ans.append(ch);
}
}

return ans.toString();
}
}

1

Reply

keshav nandwal1 month agoSep 13, 2026 21:11 (GMT +5:30)

class Solution {
public:
string removeVowels(string& s) {
// code here
int n = s.size(), j = 0;
unordered_set<char>st {'a', 'e', 'i', 'o', 'u'};
for (int i = 0; i<n; ++i) {
if (!st.count(s[i])) {
swap(s[i], s[j++]);
}
}
return s.substr(0, j);
}
};

0

Reply

Manav Kumar1 month agoAug 26, 2026 15:11 (GMT +5:30)

class Solution {
String removeVowels(String s) {
// code here
HashSet<Character> set = new HashSet<>();
StringBuilder sb = new StringBuilder();

String vowels = "aeiou";

for(char ch : vowels.toCharArray()){

set.add(ch);
}

for(int i = 0 ; i < s.length() ; i++){

if(!set.contains(s.charAt(i))){

sb.append(s.charAt(i));
}
}
return sb.toString();
}
}

0

Reply

KAVIYA K3 months agoJul 01, 2026 15:54 (GMT +5:30)

class Solution {
String removeVowels(String s) {
// code here
s=s.replaceAll("[AEIOUaeiou]","");
return s;
}
}

2

Reply

Anonymous_Geek6 months agoApr 19, 2026 15:29 (GMT +5:30)

// Simple java soltuion

class Solution {
String removeVowels(String s) {
// code here
StringBuilder str=new StringBuilder();

for(int i=0;i<s.length();i++){
char ch=s.charAt(i);
if(ch=='a' || ch=='e' || ch=='i' || ch=='o'|| ch=='u'){
continue;
}else{
str.append(ch);
}
}
return str.toString();
}
}

2

Reply

vishalfalke6 months agoApr 19, 2026 15:25 (GMT +5:30)

// Simple java soltuion

class Solution {
String removeVowels(String s) {
// code here
StringBuilder str=new StringBuilder();

for(int i=0;i<s.length();i++){
if(s.charAt(i)!='a' && s.charAt(i)!='e' && s.charAt(i)!='i'
&& s.charAt(i)!='o'&& s.charAt(i)!='u'){
str.append(s.charAt(i));
}
}
return str.toString();
}
}

1

Reply

Dharmendra Kumar6 months agoApr 14, 2026 19:04 (GMT +5:30)

string removeVowels(string& s) {
// TC: O(n) using two pointer algo
int j = 0;
int n = s.size();
for(int i = 0 ; i < n ; i++) {
if(s[i] != 'a' && s[i] != 'e'  && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
s[j++] = s[i];
}
}
s.resize(j); //O(1) (amortized, no shifting of elements like erase)
return s;
}

0

Reply

Madasamy S6 months agoApr 11, 2026 14:10 (GMT +5:30)

// User function Template for Java

class Solution {
String removeVowels(String s) {
// code here

return s.replaceAll("[aeiouAEIOU]","");

}
}

0

Reply

Ritu Mishra6 months agoApr 07, 2026 17:03 (GMT +5:30)

#User function Template for python3

class Solution:

def removeVowels(self, s):

# code here

stri = ""

for ch in s:

if ch in "aeiou":

continue

stri += ch

return stri

0

Reply

Kannela   mahendra7 months agoMar 18, 2026 23:36 (GMT +5:30)

// User function Template for Java

class Solution {
String removeVowels(String s) {
// code here
StringBuilder sb=new StringBuilder();
for(char i:s.toCharArray()){
if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u'){
continue;
}
sb.append(i);
}
return sb.toString();
}
}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed300 / 300
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:105

Time Taken0.24

Python3
C++ (17)
Java (21)
Python3
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

class Solution:
def removeVowels(self, s):
# code here
vowels = 'aeiouAEIOU'
res = ''
for ch in s:
if ch not in vowels:
res += ch
return res

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed300 / 300
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:105

Time Taken0.24

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Remove Vowels](https://www.geeksforgeeks.org/problems/remove-vowels-from-string1446/1)
