# Easy

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

Palindrome Sentence
Solved

Difficulty: EasyAccuracy: 50.04%Submissions: 63K+Points: 2

Given a single string s, the task is to check if it is a palindrome sentence or not.
A palindrome sentence is a sequence of characters, such as word, phrase, or series of symbols that reads the same backward as forward after converting all uppercase letters to lowercase and removing all non-alphanumeric characters (including spaces and punctuation).

Examples:

Input: s = "Too hot to hoot"
Output: true
Explanation: If we remove all non-alphanumeric characters and convert all uppercase letters to lowercase, string s will become "toohottohoot" which is a palindrome.

Input: s = "Abc 012..## 10cbA"
Output: true
Explanation: If we remove all non-alphanumeric characters and convert all uppercase letters to lowercase, string s will become "abc01210cba" which is a palindrome.

Input: s = "ABC $. def01ASDF"
Output: false
Explanation: The processed string becomes "abcdef01asdf", which is not a palindrome.

Constraints:
1 ≤ s.length() ≤ 106

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Company Tags

Facebook

Topic Tags

two-pointer-algorithmStringspalindrome

Related Interview Experiences

Facebook Interview Set 1

Related Articles

Sentence Palindrome Palindrome Removing Spaces Dots Etc

Discussions ( 177 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Himanshu2 weeks agoSep 02, 2026 16:57 (GMT +5:30)

class Solution:

def isPalinSent(self, s):

# code here

i = 0

j = len(s) - 1

while i < j:

while i < j and not s[i].isalnum():

i += 1

while i < j and not s[j].isalnum():

j -= 1

if i < j:

if s[i].lower() != s[j].lower():

return False

i += 1

j -= 1

return True

0

Reply

Rohit Kumar1 month agoJul 24, 2026 21:52 (GMT +5:30)

class Solution {
public:
bool isPalinSent(string &s) {
// code here
int i=0, j=s.length()-1;

while(i<j){
while(i < j && !isalnum(s[i])){
i++;
continue;
}

while(i<j && !isalnum(s[j])){
j--;
}

if(tolower(s[i]) != tolower(s[j])) return false;
i++;
j--;
}

return true;
}
};

0

Reply

Abhimanyu kumar3 months agoJun 09, 2026 12:22 (GMT +5:30)

class Solution {
public boolean isPalinSent(String s) {
// code here
//Convert Uppercase-->>LowerCase and Remove space also.
s = s.toLowerCase().replaceAll("[^a-z0-9]", "");
//Apply two Pointer approach.
int start=0;
int end=s.length()-1;
while(start<=end){
//Conditions for Paliondrome:
if(s.charAt(start)!=s.charAt(end)){
return false;
}
//Upadte both pointers:
start++;
end--;
}
return true;

}
}

0

Reply

Abhinav Puri5 months agoApr 16, 2026 21:45 (GMT +5:30)

Easy
class Solution {
public boolean isPalinSent(String s) {
// code here
int length = s.length();
StringBuilder str = new StringBuilder();
for ( int i = 0 ; i < length ; i++ ) {
if ( Character.isLetterOrDigit(s.charAt(i)) ) str.append(Character.toLowerCase(s.charAt(i)));
}

String original = str.toString();
String reversed = new StringBuilder(original).reverse().toString();
return original.equals(reversed);
}
}

This is the solution for the same problem!

0

Reply

Vikram Kumar5 months agoMar 27, 2026 06:35 (GMT +5:30)

class Solution {
public boolean isPalinSent(String s) {
// code here
int left = 0;
int right = s.length()-1;

while(left<right){

// skip for left space
while(left < right && !Character.isLetterOrDigit(s.charAt(left))){
left++;
}

// skip for right
while(left < right && !Character.isLetterOrDigit(s.charAt(right))){
right--;
}

if(Character.toLowerCase(s.charAt(left)) != Character.toLowerCase(s.charAt(right))){
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

Tushar Vatsa6 months agoMar 09, 2026 14:45 (GMT +5:30)

class Solution {
public boolean isPalinSent(String s) {
int st = 0;
int e = s.length() - 1;
while(st < e){
if(st < e && !Character.isLetterOrDigit(s.charAt(st))){
st++;
continue;
}
if(st < e && !Character.isLetterOrDigit(s.charAt(e))){
e--;
continue;
}
if(st < e && Character.toLowerCase(s.charAt(st)) != Character.toLowerCase(s.charAt(e)))
return false;
st++;
e--;
}
return true;

}
}

0

Reply

Pravallika Suryavamsi6 months agoMar 05, 2026 15:35 (GMT +5:30)

class Solution:

def isPalinSent(self, s):

# code here

l1=[i.lower() for i in s]

l2=[]

for i in l1:

if i.isalnum():

l2.append(i)

return l2[::] == l2[::-1]

0

Reply

Amit Maurya8 months agoJan 20, 2026 18:48 (GMT +5:30)

class Solution {

public static boolean isChar(char ch) {
ch = Character.toLowerCase(ch);
return ch >= 'a' && ch <= 'z';
}

public static boolean isNumeric(char ch) {
return ch >= '0' && ch <= '9';
}

public boolean isPalinSent(String s) {
char[] ch = s.toCharArray();
int st = 0, end = ch.length - 1;

while (st < end) {
if (!isChar(ch[st]) && !isNumeric(ch[st])) {
st++;
}
else if (!isChar(ch[end]) && !isNumeric(ch[end])) {
end--;
}
else {
char left = Character.toLowerCase(ch[st]);
char right = Character.toLowerCase(ch[end]);

if (left != right) {
return false;
}
st++;
end--;
}
}
return true;
}
}

1

Reply

Krishn vallabh Kumar8 months agoJan 15, 2026 00:19 (GMT +5:30)

class Solution:

def isPalinSent(self, s):

# Two-pointer approach

left, right = 0, len(s) - 1

while left < right:

# Move left pointer to next alphanumeric

while left < right and not s[left].isalnum():

left += 1

# Move right pointer to previous alphanumeric

while left < right and not s[right].isalnum():

right -= 1

# Compare lowercase characters

if s[left].lower() != s[right].lower():

return False

left += 1

right -= 1

return True

2

Reply

Adithya8 months agoJan 08, 2026 18:10 (GMT +5:30)

class Solution {
public boolean isPalinSent(String s) {
// code here
s=s.toLowerCase();
int l=0;
int r=s.length()-1;
while(l<r)
{
char left=s.charAt(l);
char right=s.charAt(r);

if(!Character.isLetterOrDigit(left)) l++;
else if(!Character.isLetterOrDigit(right)) r--;
else{
if(left!=right) return false;
l++;
r--;
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

Points Scored 2 / 2Your Total Score:50

Time Taken0.27

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
def isPalinSent(self, s):
# code here
res = []
for i in s:
if i.isalnum():
res.append(i.lower())

string = "".join(res)

return string == string[::-1]

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:50

Time Taken0.27

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Easy](https://www.geeksforgeeks.org/problems/string-palindromic-ignoring-spaces4723/1)
