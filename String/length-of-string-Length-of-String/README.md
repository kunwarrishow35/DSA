# Length of String

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

Length of String
Solved

Difficulty: BasicAccuracy: 82.01%Submissions: 45K+Points: 1

Given a string s, return the length of the string.

Examples:

Input: s = "Geeks"
Output: 5

Input: s = "Hello1234"
Output: 9

Constraints:
1 ≤ |s| ≤ 105

Expected Complexities

Time Complexity: O(1)
Auxiliary Space: O(1)

Topic Tags

Strings

Related Articles

Find The Length Of A String

Discussions ( 75 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Harine K S1 month agoSep 21, 2026 10:11 (GMT +5:30)

class Solution {
public static int lengthString(String s) {
char [] arr = s.toCharArray();
int count = 0;
for(char c : arr)
++count;
return count;
}
}
Convert the string to array

0

Reply

Anonymous_Geek2 months agoAug 08, 2026 11:01 (GMT +5:30)

class Solution {
public:
int lengthString(string &s) {
return s.length();
}
};

0

Reply

Abhimanyu kumar6 months agoApr 10, 2026 16:56 (GMT +5:30)

class Solution {
// Complete the function
// str: input string
public static int lengthString(String str) {
// find the length of string
return str.length();
}
}

0

Reply

Teja Thalluri6 months agoApr 08, 2026 11:08 (GMT +5:30)

class Solution {
int lengthString(String str) {
return ans(str, 0);
}

int ans(String str, int i) {
if (i == str.length())
return 0;

return 1 + ans(str, i + 1);
}
}

0

Reply

Adithya Gugloth6 months agoApr 07, 2026 10:02 (GMT +5:30)

class Solution {
int lengthString(String str) {
return ans(str, 0);
}

int ans(String str, int i) {
if (i == str.length())
return 0;

return 1 + ans(str, i + 1);
}
}

0

Reply

CHARAN BIRRU6 months agoMar 28, 2026 11:34 (GMT +5:30)

return str.length();

0

Reply

Vijaykumar V7 months agoMar 25, 2026 11:44 (GMT +5:30)

class Solution {
lengthString(str) {
// write your code here
let sum = 0;
for(let i=0; i<str.length; i++){
sum = sum+1;
}

return sum;
}
}

0

Reply

Charan raj BUDDAI7 months agoMar 05, 2026 10:32 (GMT +5:30)

class Solution {
// Complete the function
// str: input string
public static int lengthString(String str) {
// find the length of string
return str.length();

}
}

0

Reply

Banoth Ganesh7 months agoMar 03, 2026 13:56 (GMT +5:30)

class Solution {
// Complete the function
// str: input string
public static int lengthString(String str) {
// find the length of string
return str.length();

}
}

0

Reply

CHARAN Reddy7 months agoFeb 26, 2026 13:39 (GMT +5:30)

class Solution {
// Complete the function
// str: input string
public static int lengthString(String str) {
// find the length of string
return str.length();

}
}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed110 / 110
Attempts : Correct / Total4 / 4Accuracy : 100%

Time Taken0.03

You get marks only for the first correct submission if you solve the problem without viewing the full solution.

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

class Solution:
def lengthString(self, s):

return len(s)

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed110 / 110
Attempts : Correct / Total4 / 4Accuracy : 100%

Time Taken0.03

You get marks only for the first correct submission if you solve the problem without viewing the full solution.

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Length of String](https://www.geeksforgeeks.org/problems/length-of-string/1)
