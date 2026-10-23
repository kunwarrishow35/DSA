# Convert String to Lower Case

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

Convert String to Lower Case

Difficulty: BasicAccuracy: 75.27%Submissions: 127K+Points: 1

Given a string s, convert all its characters to lowercase.
Examples:
Input: s = "ABCddE"
Output: "abcdde"
Explanation: A, B, C and E are converted to a, b, c and e thus all uppercase characters of the string converted to lowercase letter.
Input: s = "LMNOppQQ"
Output: "lmnoppqq"
Explanation: L, M, N, O, and Q are converted to l, m, n, o and q thus all uppercase characters of the string converted to lowercase letter.

Constraints:
1 ≤ s.size() ≤ 106

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Topic Tags

Strings

Related Articles

Convert String To Lowercase

Discussions ( 329 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Anonymous_Geek1 month agoAug 31, 2026 12:47 (GMT +5:30)

💡 Hint

You don't need to convert each character one by one. 😄 Java already has a built-in method to convert an entire string to lowercase. Find that method, apply it to s, and return the result.

🧠 Code Explanation

class Solution {
static String toLower(String s) {
return s.toLowerCase();
}
}

String s → the input string.

s.toLowerCase() → converts all uppercase letters in s into lowercase.

return → sends the converted string back as the answer.

Example:

"ABCddE"
↓
"abcdde"

So basically: Take the string → use toLowerCase() → return it. 🚀

1

Reply

shubham singh2 months agoJul 25, 2026 19:20 (GMT +5:30)

/**
* @param {string} s
* @returns {string}
*/

class Solution {
toLower(s) {

// code here

return s.toLowerCase();

}
}

0

Reply

shubham singh2 months agoJul 25, 2026 19:19 (GMT +5:30)

/**
* @param {string} s
* @returns {string}
*/

class Solution {
toLower(s) {

// code here

return s.toLowerCase();

}
}

0

Reply

shruti gupta3 months agoJul 11, 2026 20:46 (GMT +5:30)

you can simply use toLowerCase method in java it only converts uppercase to lowercase keeping numbers and special characters same

or you can use ascii value approach a=97 and A=65 having diffrence of 32 so simply add that value to it .

0

Reply

Nikhil Dwivedi4 months agoJun 16, 2026 22:17 (GMT +5:30)

class Solution:
def toLower (self , s : str)-> str :
#code here
return s.lower()

0

Reply

M Mohammad Khaja Hussain4 months agoJun 08, 2026 20:19 (GMT +5:30)

class Solution:
def toLower (self , s : str)-> str :

return s.lower()
#code here

0

Reply

bharath55edu5 months agoMay 12, 2026 09:17 (GMT +5:30)

s="ABCdodF"
print(s.lower())

0

Reply

N S Priyadharsini6 months agoApr 16, 2026 21:56 (GMT +5:30)

class Solution {
static String toLower(String s) {
StringBuilder string_builder = new StringBuilder(s);
for(int u = 0; u<s.length(); u++){
if(s.charAt(u) >= 'A' && s.charAt(u) <= 'Z'){
string_builder.setCharAt(u, (char) (s.charAt(u) + 32));
}
}
return string_builder.toString();
}
}

0

Reply

David M6 months agoMar 29, 2026 07:32 (GMT +5:30)

This solution does not use the string functions like tolower() or islower(). Only ASCII values.
class Solution:
def toLower (self , s : str)-> str :
#code here
temp = ''
res = ""
for c in s:
if ord(c) >= 65 and ord(c) <= 90:
temp = chr(ord(c) + 32)
res += temp
else:
res += c

return res

1

Reply

Surendra Malla7 months agoMar 07, 2026 12:43 (GMT +5:30)

class Solution {
static String toLower(String s) {

return s.toLowerCase();
}
}

3

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom Input
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1112 / 1112
Attempts : Correct / TotalYou can see all your attempts in submission tabAccuracy : 100%

Points Scored You can see the score in submission tab
Time Taken0.04

Calculating score…

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

class Solution:
def toLower (self, s: str) -> str:
# code here
return s.lower()

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom Input
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1112 / 1112
Attempts : Correct / TotalYou can see all your attempts in submission tabAccuracy : 100%

Points Scored You can see the score in submission tab
Time Taken0.04

Calculating score…

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Convert String to Lower Case](https://www.geeksforgeeks.org/problems/convert-string-to-lowercase/1)
