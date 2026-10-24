# Capitalize First Letter of Words

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

Capitalize First Letter of Words
Solved

Difficulty: BasicAccuracy: 38.13%Submissions: 56K+Points: 1

Given a string s, convert the first letter of each word in the string to uppercase.

Examples:

Input: s = "gEEKs"
Output: "GEEKs"

Input: s = "i love programming"
Output: "I Love Programming"

Constraints:
1 <= s.length() <= 104
Consists of lowercase alphabets and spaces to separate words

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(n)

Company Tags

Nagarro

Topic Tags

Strings

Related Interview Experiences

Nagarro Interview Experience Set 10 Software Developer Fresher

Related Articles

Java Program Convert First Character Uppercase Sentence

Discussions ( 326 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

keshav nandwal1 month agoSep 13, 2026 21:20 (GMT +5:30)

class Solution {
public:
string convert(string& s) {
// code here
int n = s.size();
for (int i = 0; i<n; ++i) {
if (i == 0 || s[i - 1] == ' ') {
s[i] = toupper(s[i]);
}
}
return s;
}
};

1

Reply

Debugger2 months agoAug 12, 2026 09:20 (GMT +5:30)

class Solution {
public String convert(String s) {
String arr[]=s.split(" +");
StringBuilder ans=new StringBuilder();
for(String ch:arr){
ans.append(ch.substring(0,1).toUpperCase()+ch.substring(1)+" ");
}
return ans.toString();
}
};

1

Reply

hello jii6 months agoApr 15, 2026 21:15 (GMT +5:30)

class Solution {
public String convert(String s) {
StringBuilder sb =new StringBuilder("");
char ch = Character.toUpperCase(s.charAt(0));
sb.append(ch);
for(int i=1;i<s.length();i++){
if(s.charAt(i)==' ' && i<s.length()-1){
sb.append(s.charAt(i));
i++;
sb.append(Character.toUpperCase(s.charAt(i)));
}
else{
sb.append(s.charAt(i));
}
}
return sb.toString();
}
}

1

Reply

Dharmendra Kumar6 months agoApr 14, 2026 19:39 (GMT +5:30)

You will like it
string convert(string& s) {
// code here
bool flag = true;
for(int i =0;i<s.size();i++) {
if(flag) {
char ch = s[i]-32;
s[i] = ch;
}
flag = s[i] == ' ' ? true : false;
}
return s;

0

Reply

Kausal Jain(Edited)26/03/2026, 16:39
7 months agoMar 26, 2026 16:33 (GMT +5:30)

SOLUTION WITHOUT STRING BUILDER AND USING STRING ONLY.
EDGE CASES FOR THIS PROGRAM IS ENDING WIHT SPACES , TWO OR MORE TRAILING SPACES , OR TWO OR MORE SPACES IN BETWEEN.

class Solution {
public String convert(String s) {
//CHECK FIRST LETTER.
char arr[]=new char[s.length()];
if(s.charAt(0)>='a' && s.charAt(0)<='z')
arr[0]=(char)(s.charAt(0)-32);
else
arr[0]=s.charAt(0);
//LOOP BEGINS FOR ENTIRE STRING
for (int i=1; i<s.length();){

//CONDITIONS , CURRENT SHOULD BE A SPACE AND , I+1 SHOULD BE LESS THAN LENGHT , AND I+1 SHOULD NOT BE A SPACE , IF ALL MEET THEN ONLY ,CHECK FOR SMALL CASE

if(s.charAt(i)==' ' && (i+1)<s.length() && s.charAt(i+1)!=' '){
if(s.charAt(i+1)>='a' && s.charAt(i+1)<='z'){
arr[i+1]=(char)(s.charAt(i+1)-32);
arr[i]=' ';
i=i+2;
continue ;
}
else {
arr[i+1]=s.charAt(i+1);
arr[i]=' ';
i=i+2;
continue;
}

}
//AGAR KUCH BHI NAHI MET HUA PEHLE CONDITION ME TO JO HAI WAHI ARRAY ME ASSIGN KAR DENA.
else
arr[i]=s.charAt(i);
i++;
}
return new String ( arr );
}
}

0

Reply

Mayank8 months agoFeb 22, 2026 19:45 (GMT +5:30)

class Solution:
def convert(self, s):
s_new=s.split(" ")

#print(s_new[0])
k=[]

for i in range(0,len(s_new)):
l=list(s_new[i])
l[0]=l[0].upper()
k.append("".join(l))
return " ".join(k)

0

Reply

Jatin Kumar9 months agoJan 19, 2026 17:15 (GMT +5:30)

class Solution {
public String convert(String s) {
StringBuilder out = new StringBuilder();
String[] words = s.split(" ");

for (String w : words) {
if (w.length() > 0) {
out.append(Character.toUpperCase(w.charAt(0)))
.append(w.substring(1))
.append(" ");
}
}
return out.toString().trim();
}
}

0

Reply

Amit Maurya9 months agoJan 16, 2026 17:43 (GMT +5:30)

class Solution {
public String convert(String s) {
StringBuilder sb = new StringBuilder();
int n = s.length();

for (int i = 0; i < n; i++) {
char ch = s.charAt(i);

// first character of string OR first character after space
if ((i == 0 || s.charAt(i - 1) == ' ') && ch >= 'a' && ch <= 'z') {
sb.append((char)(ch - 32)); // convert to uppercase
} else {
sb.append(ch);
}
}

return sb.toString();
}
}

0

Reply

Amit Maurya9 months agoJan 16, 2026 17:29 (GMT +5:30)

class Solution {
public String convert(String s) {
StringBuilder sb=new StringBuilder();
String str[]=s.split("\\s+");
for(int i=0;i<str.length;i++){
String temp=str[i];
for(int j=0;j<temp.length();j++){
if(j==0)
{
sb.append((char)(temp.charAt(j)-32));
}else{
sb.append(temp.charAt(j));
}
}
sb.append(" ");
}
return sb.toString();
}
}

1

Reply

DAYAPULI SRINIVASULA RAO9 months agoJan 14, 2026 13:06 (GMT +5:30)

class Solution:
def convert(self, s):
# code here
return s.title()

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed208 / 208
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:108

Time Taken0.04

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
def convert(self, s: str) -> str:
# code here
return s.title()

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed208 / 208
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:108

Time Taken0.04

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Capitalize First Letter of Words](https://www.geeksforgeeks.org/problems/upper-case-conversion5419/1)
