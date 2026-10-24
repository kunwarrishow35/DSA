# Reverse Vowels

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

Reverse Vowels
Solved

Difficulty: BasicAccuracy: 40.16%Submissions: 56K+Points: 1

Given a string consisting of lowercase English alphabets, reverse only the vowels present in it and print the resulting string.

Examples:

Input: s = "geeksforgeeks"
Output: "geeksforgeeks"
Explanation: The vowels are: e, e, o, e, e. Reverse of these is also e, e, o, e, e.

Input: s = "practice"
Output: "prectica"
Explanation: The vowels are a, i, e. Reverse of these is e, i, a.

Input: s = "bcdfg"
Output: "bcdfg"
Explanation: There are no vowels in s.

Constraints:
1<=|s|<=105

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Company Tags

ZohoFlipkart

Topic Tags

Strings

Related Interview Experiences

Zoho Interview Experience Set 21 Campus

Related Articles

Reverse Vowels Given String

Discussions ( 326 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

keshav nandwal1 month agoSep 13, 2026 21:18 (GMT +5:30)

class Solution {
public:
string modify(string& s) {
// code here
int n = s.size();
unordered_set<char>st {'a', 'e', 'i', 'o', 'u'};
int low = 0, high = n - 1;
while (low <= high) {
if (st.count(s[low]) && st.count(s[high])) {
swap(s[low++], s[high--]);
}
else if (!st.count(s[low]))low++;
else if (!st.count(s[high]))high--;
}
return s;
}
};

0

Reply

Sarika Kumar1 month agoAug 29, 2026 19:08 (GMT +5:30)

class Solution:
def modify(self, s):
# code here
new_s = list(s)
vow_lst = [char for char in s if char in 'aeiou']
# print(vow_lst)
rev_vow_lst = vow_lst[::-1]
index = 0
for i in range(len(new_s)):
if new_s[i] in 'aeiou':
new_s[i] = rev_vow_lst[index]
index+=1
return ''.join(new_s)

0

Reply

Sai Vishnu Vardhan Bathini2 months agoAug 20, 2026 14:37 (GMT +5:30)

For Python3 Platform

class Solution:
def modify(self, s):
s = list(s)
vowels = {"a", "e", "i", "o", "u"}

left, right = 0, len(s) - 1

while left < right:
while left < right and s[left] not in vowels:
left += 1
while left < right and s[right] not in vowels:
right -= 1

s[left], s[right] = s[right], s[left]
left += 1
right -= 1

return ''.join(s)

0

Reply

Ratnesh Kumar3 months agoJul 17, 2026 20:11 (GMT +5:30)

class Solution:
def modify(self, s):
s_list=list(s)
i = 0
j = len(s)-1
arr=['a','e','i','o','u']
while i < j:
if s_list[i] not in arr and s_list[j] not in arr:
i+=1
j-=1
elif s_list[i] in arr and s_list[j] in arr:
s_list[i],s_list[j]=s_list[j],s_list[i]
i+=1
j-=1
elif s_list[i] in arr and s_list[j] not in arr:
j-=1
elif s_list[i] not in arr and s_list[j] in arr:
i+=1
return ''.join(s_list)

0

Reply

Dharmendra Kumar(Edited)14/04/2026, 19:51
6 months agoApr 14, 2026 19:51 (GMT +5:30)

you will like it:
string modify(string& s) {
int i = 0, j = s.size()-1;
while(i < j) {
while(i < s.size() && s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
i++;
}
while(j >= 0 && s[j] != 'a' && s[j] != 'e' && s[j] != 'i' && s[j] != 'o' && s[j] != 'u') {
j--;
}
//cout<<i<<"  "<<j<<endl;
if(i < s.size() && j >= 0 && i < j) {
swap(s[i++], s[j--]);
}
}
return s;
}

0

Reply

Viswanath Reddy Kanagala8 months agoJan 29, 2026 08:04 (GMT +5:30)

class Solution {
public:
bool isVowel(char ch){
if(ch=='a' || ch=='A' || ch=='e' || ch=='E' ||
ch=='i' || ch=='I'
|| ch=='o'|| ch=='O' || ch=='u' || ch=='U'){
return true;
}
return false;
}
string modify(string& s) {
int n=s.size();
string ans="";
vector<int>index;
for(int i=0;i<n;i++){
bool isTrue=isVowel(s[i]);
if(isTrue){
ans+=s[i];
index.push_back(i);
}
}
reverse(ans.begin(),ans.end());
for(int i=0;i<index.size();i++){
s[index[i]]=ans[i];
}
return s;
}
};

0

Reply

Amit Maurya9 months agoJan 19, 2026 20:13 (GMT +5:30)

class Solution {
public static boolean isVowels(char ch) {
return ch == 'a' || ch == 'e' || ch == 'i' ||
ch == 'o' || ch == 'u' ||
ch == 'A' || ch == 'E' || ch == 'I' ||
ch == 'O' || ch == 'U';
}
String modify(String s) {
char ch[]=s.toCharArray();
int st=0,end=ch.length-1;
while(st<=end){
if(isVowels(ch[st]) && isVowels(ch[end])){
char temp=ch[st];
ch[st]=ch[end];
ch[end]=temp;
st++;
end--;
}
else if(!isVowels(ch[st]))
{
st++;
}else{
end--;
}
}
String result=new String(ch);
return result;

}
}

1

Reply

Sai Tejas Kr9 months agoJan 18, 2026 13:41 (GMT +5:30)

class Solution {
String modify(String s) {
// your code here

char[] str=s.toCharArray();
int left=0,right=str.length-1;

while(left<right){

while(left<right && ("aeiou".indexOf(str[left]) == -1)) left++;
while(left<right && ("aeiou".indexOf(str[right]) == -1)) right--;

char temp = str[left];
str[left]=str[right];
str[right]=temp;

left++;
right--;
}
return new String(str);
}
}

0

Reply

Anonymous_Geek(Edited)16/01/2026, 21:20
9 months agoJan 16, 2026 21:17 (GMT +5:30)

Solution For Python class Solution:
def modify(self, s):
# code here
vowels = ['a', 'i', 'u', 'e', 'o']
res = list(s)
temp = [] # save every vowels that appear in s
for i in range(len(s)):
if s[i] in vowels:
temp.append(s[i])
# reverse vowels
j = 0
z = len(temp)-1
for i in range(len(res)):
if z <0:
break
if res[i] == temp[j]:
res[i] = temp[z]
z -=1
j +=1
return ''.join(res)

0

Reply

Mohammed Abuthahir10 months agoDec 27, 2025 16:48 (GMT +5:30)

// User function Template for Java

class Solution {
String modify(String s) {
char[] arr = s.toCharArray();
int left = 0;
int right = arr.length - 1;
while(left <= right){
if((arr[left] == 'a' || arr[left] == 'e' || arr[left] == 'i' || arr[left] == 'o'
|| arr[left] == 'u') && (arr[right] == 'a' || arr[right] == 'e' || arr[right] == 'i'
|| arr[right] == 'o' || arr[right] == 'u')){
char temp = arr[left];
arr[left] = arr[right];
arr[right] = temp;
left++;
right--;
}
else if((arr[left] == 'a' || arr[left] == 'e' || arr[left] == 'o' || arr[left] == 'u'
|| arr[left] == 'i') ){
right--;
}
else if((arr[right] == 'a' || arr[right] == 'e' || arr[right] == 'i'
|| arr[right] == 'o' || arr[right] == 'u')){
left++;
}
else{
left++;
right--;
}
}
return new String(arr);
}
}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed120 / 120
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:109

Time Taken0.19

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

class Solution:
def modify(self, s):
vowels = 'aeiouAEIOU'
s = list(s)

l = 0
r = len(s) - 1

while l < r:
if s[l] not in vowels:
l += 1
elif s[r] not in vowels:
r -= 1
else:
s[l], s[r] = s[r], s[l]
l += 1
r -= 1

return ''.join(s)

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed120 / 120
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:109

Time Taken0.19

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Reverse Vowels](https://www.geeksforgeeks.org/problems/reversing-the-vowels5304/1)
