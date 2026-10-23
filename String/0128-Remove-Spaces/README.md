# Remove Spaces

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

Remove Spaces

Difficulty: BasicAccuracy: 49.21%Submissions: 100K+Points: 1

Given a string s, remove all the spaces from the string and return the modified string.

Examples:

Input: s = "g eeks for ge eks"
Output: "geeksforgeeks"
Explanation: All space characters are removed from the given string while preserving the order of the remaining characters, resulting in the final string "geeksforgeeks".

Input: s = "abc d "
Output: "abcd"
Explanation:  All space characters are removed from the given string while preserving the order of the remaining characters, resulting in the final string "abcd".

Constraints:
1 ≤ |s| ≤ 105

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Company Tags

SAP Labs

Topic Tags

Strings

Related Articles

Remove Spaces From A Given String

Discussions ( 414 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

keshav nandwal1 month agoSep 13, 2026 17:08 (GMT +5:30)

class Solution {
public:
string removeSpaces(string& s) {
// code here
int n = s.size();
int j = 0;
for (int i = 0; i<n; ++i) {
if (s[i] != ' ') {
swap(s[i], s[j++]);
}
}
return s.substr(0, j + 1);
}
};

0

Reply

keshav nandwal1 month agoSep 13, 2026 17:05 (GMT +5:30)

class Solution {
public:
string removeSpaces(string& s) {
// code here
string result = "";
int n = s.size();
for (int i = 0; i<n; ++i) {
if (s[i] != ' ')result.push_back(s[i]);
}
return result;
}
};

0

Reply

Aman Kumar1 month agoSep 10, 2026 13:49 (GMT +5:30)

class Solution {

public String removeSpaces(String s) {

// code here

int n = s.length();

StringBuilder s1 = new StringBuilder();

for (int i = 0; i<n; i++) {

if (s.charAt(i) == ' ') {

continue;

}

s1.append(s.charAt(i));

}

return s1.toString();

}

}

0

Reply

yuvakishore Varanasi1 month agoAug 28, 2026 11:02 (GMT +5:30)

class Solution:
def removeSpaces(self, s):

a=s.split()
result=""

return result.join(a)

1

Reply

sumatew7a2 months agoAug 14, 2026 13:55 (GMT +5:30)

class Solution {
removeSpaces(s) {
// code here
return s.replaceAll(' ','');
}
}

0

Reply

shubham singh2 months agoAug 03, 2026 16:06 (GMT +5:30)

class Solution {
removeSpaces(s) {
// code here
// return s.join("")
return s.replaceAll(" ","")
}
}

0

Reply

Jaid Mulla3 months agoJul 17, 2026 09:28 (GMT +5:30)

class Solution {
public String removeSpaces(String s) {
// code here

String str = s.replaceAll("\\s","");
return str;
}
}

0

Reply

Jaid Mulla3 months agoJul 17, 2026 09:28 (GMT +5:30)

class Solution {
public String removeSpaces(String s) {
// code here

String str = s.replaceAll("\\s","");
return str;
}
}

0

Reply

Jaid Mulla3 months agoJul 17, 2026 09:28 (GMT +5:30)

class Solution {
public String removeSpaces(String s) {
// code here

String str = s.replaceAll("\\s","");
return str;
}
}

0

Reply

Amit Maurya6 months agoApr 21, 2026 21:27 (GMT +5:30)

String removeSpaces(String s) {
String res=s.chars().mapToObj(m->String.valueOf((char)m))
.filter(f->!Character.isWhitespace(f.charAt(0)))
.collect(Collectors.joining(""));
return res;

}

1

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom Input
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / TotalYou can see all your attempts in submission tabAccuracy : 100%

Points Scored You can see the score in submission tab
Time Taken0.04

Calculating score…

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

class Solution:
def removeSpaces(self, s):
# code here
s = s.split()
return "".join(s)

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom Input
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / TotalYou can see all your attempts in submission tabAccuracy : 100%

Points Scored You can see the score in submission tab
Time Taken0.04

Calculating score…

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Remove Spaces](https://www.geeksforgeeks.org/problems/remove-spaces0128/1)
