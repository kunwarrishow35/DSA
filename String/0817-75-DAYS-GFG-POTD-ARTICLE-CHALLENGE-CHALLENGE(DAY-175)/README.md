# 75 DAYS GFG POTD ARTICLE CHALLENGE CHALLENGE(DAY 1/75)

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

Palindrome String
Solved

Difficulty: BasicAccuracy: 51.21%Submissions: 533K+Points: 1

Given a string s, find if it is a palindrome. A string is considered a palindrome if it reads the same forwards and backwards.

Examples :

Input: s = "abba"
Output: true
Explanation: "abba" reads the same forwards and backwards, so it is a palindrome.

Input: s = "abc"
Output: false
Explanation: "abc" does not read the same forwards and backwards, so it is not a palindrome.

Constraints:
1 ≤ s.size() ≤ 106
s consists only of lowercase English alphabets

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Company Tags

PaytmZohoMorgan StanleyAmazonD-E-ShawFactSetCiscoFacebook

Topic Tags

Stringstwo-pointer-algorithm

Related Interview Experiences

Paytm Interview Experience Set 14 For Senior Android Developer

Related Articles

Palindrome String

Discussions ( 1637 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Gevendra Verma3 years agoAug 25, 2023 08:08 (GMT +5:30)

75 DAYS GFG POTD ARTICLE CHALLENGE CHALLENGE(DAY 1/75)
Exploring Palindrome Strings: Concepts, Approaches, and Optimization

Introduction:

In the realm of string manipulation and pattern recognition, palindrome strings hold a unique fascination. A palindrome string is one that reads the same forwards as it does backwards, such as "radar" or "level." This article delves into the world of palindrome strings, discussing their characteristics, various approaches to identify them, optimized code implementations, and a breakdown of their time and space complexities.

Understanding Palindrome Strings:

A palindrome string exhibits the property of symmetry, wherein the characters on one side of the string mirror those on the other side. This symmetry makes palindrome strings a popular subject for both computer science and linguistics enthusiasts. The essence of identifying palindrome strings lies in recognizing this symmetry, as it's a crucial factor in designing effective algorithms.

Approaches to Identify Palindrome Strings:

1. Brute Force:
The simplest approach to check if a string is a palindrome is to compare the characters at symmetric positions one by one. Starting from both ends of the string and moving towards the center, if all corresponding characters are the same, the string is a palindrome. This approach takes O(n) time, where n is the length of the string.

2. Two-Pointer Technique:
An optimized version of the brute force approach employs two pointers, one starting from the beginning of the string and the other from the end. These pointers move towards each other while comparing characters at their respective positions. This approach also takes O(n) time.

3. Recursive Approach:
Another interesting approach involves recursion. A string is a palindrome if its first and last characters match, and the substring between them is a palindrome. This recursive logic can be employed to check if the entire string is a palindrome. However, this approach might lead to higher overhead due to function calls.

4. Using Stack:
A stack can be utilized to store the characters of the first half of the string. When checking the second half, the characters are popped from the stack and compared with the characters in the second half. This approach ensures correct character comparison and maintains the O(n) time complexity.

Optimized Code Implementation:

Let's explore the Two-Pointer Technique for identifying palindrome strings in Python:

class Solution:
def isPalindrome(self, s):
left, right = 0, len(s) - 1
while left < right:
if s[left] != s[right]:
return 0
left, right = left+1, right-1
return 1

Dry Run:

Consider the input string "level" for the code above:
- Initially, `left = 0` and `right = 4` (length of the string - 1).

- The characters at positions `0` and `4` are both 'l', so the pointers move inwards.
- `left` becomes `1` and `right` becomes `3`.

- The characters at positions `1` and `3` are both 'e', and the pointers move again.

- Now, `left = 2` and `right = 2`. The character at position `2` is 'v', which is the middle character and doesn't need comparison.

- The pointers have crossed each other, and all comparisons have been successful, indicating a palindrome.

Time and Space Complexity:
The Two-Pointer Technique has a time complexity of O(n), where n is the length of the input string. The algorithm scans the string once, performing constant-time operations for each character comparison. The space complexity is O(1) as only a constant amount of extra space is required for the pointers and temporary variables.

Conclusion:
Palindrome strings are a captivating topic in the world of string manipulation. By understanding their characteristics and employing various approaches such as the Two-Pointer Technique, programmers can efficiently identify palindrome strings within strings of varying lengths. This article has provided insights into the concepts, approaches, code implementation, and complexities associated with palindrome strings, allowing readers to appreciate the elegance and practicality of palindrome-related algorithms.

29

Reply

Navneet Singh5 days agoOct 17, 2026 21:16 (GMT +5:30)

class Solution {
boolean isPalindrome(String s) {
// code here
int i = 0;
int j = s.length()-1;
while(i < j) {
if(s.charAt(i) != s.charAt(j)) return false;
i++;
j--;
}
return true;
}
}

0

Reply

HARSH MALIK2 weeks agoOct 09, 2026 11:53 (GMT +5:30)

class Solution:
def isPalindrome(self, s):
# code here
return s[::] == s[::-1]

2

Reply

Abhishek Km Maurya2 weeks agoOct 05, 2026 23:49 (GMT +5:30)

class Solution {
public:
bool isPalindrome(string& s) {
// code here
int i = 0;
int e = s.size()-1;
int found = 0;
while(i<=e){
if(s[i]!=s[e]){
return false;
}
i++;
e--;
}
return true;
}
};

0

Reply

Kesar Sooryavanshi2 weeks agoOct 05, 2026 13:59 (GMT +5:30)

class Solution:
def isPalindrome(self, s):
left, right = 0, len(s) - 1
while left < right:
if s[left] != s[right]:
return 0
left, right = left+1, right-1
return 1

0

Reply

lbrce1 month agoSep 21, 2026 22:22 (GMT +5:30)

class Solution {
boolean isPalindrome(String s3) {
StringBuilder s1=new StringBuilder(s3);
s1.reverse();
String s2=s1.toString();
if(s3.equals(s2))
{
return  true;
}
else
{
return false;

}

}
}

0

Reply

Lakshya Pratap1 month agoAug 26, 2026 14:02 (GMT +5:30)

class Solution {
boolean isPalindrome(String s) {
// code here
StringBuilder sb=new StringBuilder(s);
sb.reverse();
String s2=sb.toString();
if (s.equals(s2)) {
return true;
}

else{

return false;}
}
}

0

Reply

5185_ Vishwaa.A2 months agoAug 21, 2026 10:15 (GMT +5:30)

class Solution {
boolean isPalindrome(String s) {
s=s.replaceAll("[^a-zA-z0-9]","");
s=s.toLowerCase();
String rev=new StringBuilder(s).reverse().toString();
return s.equals(rev);

}
}

0

Reply

Sashin Kumar2 months agoAug 19, 2026 11:58 (GMT +5:30)

class Solution {
boolean isPalindrome(String s) {
// code here

int left = 0;
int right = s.length()-1;

while(left < right){

if(s.charAt(left) != s.charAt(right)){
return false;
}
left++;
right--;
}
return true;
}
}

0

Reply

Shubham Kumar2 months agoAug 09, 2026 20:40 (GMT +5:30)

class Solution {
boolean isPalindrome(String s) {
// code here
for(int i = 0; i<s.length()/2; i++){
int n = s.length();
if(s.charAt(i) != s.charAt(n-i-1)){
return false;
}
}
return true;
}
}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:99

Time Taken0.04

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

class Solution:
def isPalindrome(self, s):
# code here
new = s[::-1]
return s == new

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:99

Time Taken0.04

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[75 DAYS GFG POTD ARTICLE CHALLENGE CHALLENGE(DAY 1/75)](https://www.geeksforgeeks.org/problems/palindrome-string0817/1)
