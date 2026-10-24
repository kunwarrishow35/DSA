# Sort String

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

Sort String
Solved

Difficulty: BasicAccuracy: 64.43%Submissions: 56K+Points: 1

Given a string consisting of lowercase letters, arrange all its letters in ascending order.
Examples:
Input: s = "edcab"
Output: "abcde"
Explanation: characters are in ascending order in "abcde".

Input: s = "xzy"
Output: "xyz"
Explanation: characters are in ascending order in "xyz".

Constraints:
1 ≤ S.size() ≤ 105
S consists only of lowercase English alphabets

Expected Complexities

Time Complexity: O(|s|)
Auxiliary Space: O(1)

Topic Tags

StringsSorting

Related Articles

Sort String Characters

Discussions ( 185 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Mansi Sharma1 week agoOct 16, 2026 15:12 (GMT +5:30)

JAVA SOLUTION

class Solution {
public String sortString(String s) {
// code here
char[] arr = s.toCharArray();
Arrays.sort(arr);
s = new String(arr);

return s;
}
}

0

Reply

SteveKevlar3 weeks agoOct 02, 2026 17:53 (GMT +5:30)

class Solution:
def sortString(self, s: str) -> str:
# code here
# sorted = let s = "Hello" => {'h', 'e', 'l', 'l', 'o'} this will be sorted based on the asc order
# default and then it will be put together.
sorted_text = "".join(sorted(s))
return sorted_text

0

Reply

Durgesh Sahu4 weeks agoSep 25, 2026 16:11 (GMT +5:30)

class Solution {
public:
string sortString(string &s) {
sort(s.begin(),s.end());
return s;
}
};

0

Reply

GANESH PAWAR4 weeks agoSep 25, 2026 01:55 (GMT +5:30)

class Solution {

public String sortString(String s) {

// code here

int a[] = new int[26];

int k;

int i;

for (i = 0; i<s.length(); i++)

{

k = s.charAt(i) - 'a';

a[k]++;

}

StringBuffer sb = new StringBuffer();

for (i = 0; i<26; i++)

{

while (a[i]>0)

{

sb.append((char)('a' + i));

a[i]--;

}

}

return sb.toString();

}

}

0

Reply

keshav nandwal1 month agoSep 16, 2026 17:04 (GMT +5:30)

class Solution {
public:
string sortString(string &s) {
// code here
vector<int>frequency(26, 0);
string result = "";
for (char ch:s)frequency[ch - 'a']++;

for (int i = 0; i<26; ++i) {
while (frequency[i]>0) {
result += (i + 'a');
frequency[i]--;
}
}
return result;
}
};

0

Reply

Tarun P4 months agoJun 23, 2026 22:08 (GMT +5:30)

python

class Solution:
def sortString(self, s: str) -> str:
# code here
return ''.join(sorted(s))    #s=''join.(sorted(s))
#return s

0

Reply

Tiya Gaba5 months agoMay 03, 2026 19:52 (GMT +5:30)

string sort(string s) {
// complete the function here
vector<int>alpha(26,0);
for(int i =0;i<s.size();i++){
alpha[s[i]-'a']++;

}
string ans ;
for(int i =0;i<26;i++)
{
char c = 'a'+i;
while(alpha[i]){
ans+=c;
alpha[i]--;
}
}
return ans;

}

0

Reply

Adarsh Kumar Ojha(Edited)24/04/2026, 19:09
6 months agoApr 24, 2026 19:09 (GMT +5:30)

string sort(string s) {
// complete the function here
sort(s.begin(), s.end());
return s;

}Eat 5 star do no thing

1

Reply

Raj Kumar Parida6 months agoApr 20, 2026 11:42 (GMT +5:30)

string sort(string s) {
// complete the function here
vector<int>alpha(26,0);
for(int i=0;i<s.size();i++){
alpha[s[i]-'a']++;
}
string ans="";
for(int i=0;i<26;i++){
char c=i+'a';
while(alpha[i]>0){
ans+=c;
alpha[i]--;
}
}
return ans;
}

2

Reply

Rishav Saha7 months agoMar 04, 2026 00:02 (GMT +5:30)

string sort(string s) {
map<char, int> mpp;
string ans = "";
for (char c: s)
mpp[c]++;
for (auto i: mpp) {
ans = ans.append(i.second, i.first);
}
return ans;
}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed76 / 76
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:107

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

class Solution:
def sortString(self, s: str) -> str:
# code here
return "".join(sorted(s))

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed76 / 76
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:107

Time Taken0.22

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Sort String](https://www.geeksforgeeks.org/problems/sort-a-string2943/1)
