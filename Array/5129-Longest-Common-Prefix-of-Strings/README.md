# Longest Common Prefix of Strings

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

Longest Common Prefix of Strings
Solved

Difficulty: EasyAccuracy: 29.52%Submissions: 334K+Points: 2Average Time: 15m

Given an array of strings arr[]. Return the longest common prefix among each and every strings present in the array. If there's no prefix common in all the strings, return "".
Examples :
Input: arr[] = ["geeksforgeeks", "geeks", "geek", "geezer"]
Output: "gee"
Explanation: "gee" is the longest common prefix in all the given strings.

Input: arr[] = ["hello", "world"]
Output: ""
Explanation: There's no common prefix in the given strings.

Constraints:
1 ≤ |arr|, |arr[i]| ≤ 103

Expected Complexities

Time Complexity: O(n*min(|arri|))
Auxiliary Space: O(min(|arri|))

Company Tags

VMWareMicrosoftGoogle

Topic Tags

ArraysStrings

Related Articles

Longest Common Prefix

Discussions ( 1176 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

GeeksforGeeks(Edited)31/07/2024, 09:39
2 years agoJul 31, 2024 09:38 (GMT +5:30)

Hi Geeks,

🇵​​🇱​​🇪​​🇦​​🇸​​🇪​ ​🇩​​🇴​​🇳​❜​🇹​ ​🇵​​🇴​​🇸​​🇹​ ​🇾​​🇴​​🇺​​🇷​ ​🇸​​🇴​​🇱​​🇺​​🇹​​🇮​​🇴​​🇳​​🇸​ ​​.

Guideline for everyone to follow for "Comment Of the Day" :-

It will be purely selected by the best explanation and visualization of the problem and approaches.

*One can use Pictures, GIFs, Slideshow or Video for better clarity.*

Upvotes, downvotes, or multiple comments on a thread will not be justified for the Comment of the Day.
Copy-pasting someone's comment or adding the same comment multiple times, will not be considered and leads you into spam/blocked.
Post your submission in a new thread and for any suggestions or feedback, leave a comment below.

Be the 'Comment of the Day' and win a GFG T-shirt daily! Our Marketing Team will contact the winner via email. Check your inbox!

"Marketing team will reach out to the winner a.c to the availability of the stock"

Keep Coding!!

Regards
Practice Team

6

Reply
(Show 1 Replies)

Hruthika Nayak1 month agoSep 03, 2026 22:17 (GMT +5:30)

@correct the code

0

Reply

Vikash Kumar bharti1 month agoAug 30, 2026 03:18 (GMT +5:30)

class Solution {
public String longestCommonPrefix(String arr[]) {

String res = "";

for(int i=0; i<arr[0].length(); i++){

char ch = arr[0].charAt(i);

for(int j=1; j<arr.length; j++){

if(arr[j].length()<i || arr[j].charAt(i)!=ch){

return res;
}
}

res += ch;

}
return res;

}
}

Java Solution

0

Reply

Lakshya Pratap2 months agoAug 25, 2026 14:18 (GMT +5:30)

class Solution {
public String common(String s1,String s2){
int n=Math.min(s1.length(),s2.length());
StringBuilder sb=new StringBuilder();
for(int i=0;i<n;i++){
if (s1.charAt(i)==s2.charAt(i)) {
sb.append(s1.charAt(i));

}
else break;
}
return sb.toString();
}
public String longestCommonPrefix(String arr[]) {
if (arr.length==0) {
return null;
}
String res=arr[0];
for(int i=1;i<arr.length;i++){
res=common(res, arr[i]);
}
return res;

}
}

0

Reply

Aryan Kumar3 months agoJul 11, 2026 22:20 (GMT +5:30)

class Solution {
public:
string longestCommonPrefix(vector<string> arr) {
// your code here

// base case
if(arr.empty()) return "";
if(arr.size() == 1) return arr[0];

string prefix = arr[0];

// Compare prefix with every string
for(int i=0; i<arr.size(); i++){

int j = 0;

// Match Characters
while(j<prefix.size() && j<arr.size() && prefix[j] == arr[i][j]){
j++;
}

// keep only common part
prefix = prefix.substr(0, j);

// No common prefix left
if(prefix.empty()) return "";
}
return prefix;
}
};

0

Reply

Pooja S3 months agoJul 11, 2026 18:13 (GMT +5:30)

class Solution {
public String longestCommonPrefix(String arr[]) {
// code here
String str="";
int n=arr.length;
Arrays.sort(arr);
String first=arr[0];
String last=arr[n-1];
for(int i=0;i<first.length();i++){
if(first.charAt(i)==last.charAt(i)){
str+=first.charAt(i);
}
else{
break;
}
}return str;
}
}

0

Reply

Thumu Vinaya Venkata Durga Nikhilesh3 months agoJul 02, 2026 15:07 (GMT +5:30)

import java.util.*;
class TrieNode{
TrieNode child[];
int c;
boolean isLeaf;
TrieNode(){
child = new TrieNode[26];
isLeaf = false;
c=0;
}
}
class Trie{
TrieNode root;
Trie(){
root = new TrieNode();
}
void insert(String key){
TrieNode cur = root;
for(char ch :key.toCharArray()){
if(cur.child[ch-'a']==null){
cur.child[ch-'a'] = new TrieNode();
}
cur.child[ch-'a'].c++;
cur = cur.child[ch-'a'];
}
cur.isLeaf = true;
}
boolean check(TrieNode child[]){
int nulcount = 0;
for(int i=0;i<26;i++){
if(child[i] == null){
nulcount++;
}
}
if(nulcount<25){
return false;
}
return true;
}
String lon(String key){
TrieNode cur = root;
if(!check(cur.child)){
String ans = "-1";
return ans;
}
else{
String ans="";
int max = -1;
for(char ch:key.toCharArray()){
if(cur.child[ch-'a'].c >= max){
max = cur.child[ch-'a'].c;
ans = ans+ch;
cur = cur.child[ch-'a'];
}
else{
return ans;
}
}
}
return new String("-1");
}
}
class Solution {
public String longestCommonPrefix(String arr[]) {
// code here
if(arr.length==1){
return arr[0];
}
else if(arr.length ==-1){
return new String("");
}
Trie ob = new Trie();
for(int i=0;i<arr.length;i++){
ob.insert(arr[i]);
}
String ans = ob.lon(arr[0]);
if(ans.equals("-1")){
return new String("");
}
return ans;
}
}

most efficient java solution try this

2

Reply
(Show 1 Replies)

Pulavarthi Mehar Badari Koushik4 months agoJun 16, 2026 11:01 (GMT +5:30)

this is my java script solution :
// User function Template for javascript
/**
* @param {string[]} arr
* @param {number} n
* @returns {string}
*/
class Solution {
longestCommonPrefix(arr) {
// code here
let min =arr[0]
for(let i=0;i<arr.length;i++)
{
if(arr[i].length < min.length)
{
min = arr[i]
}
}
let ans=''
let c=0
for(let i=0;i<min.length;i++)
{
let prefix = min.slice(0,i+1)
c=0
for(let j=0;j<arr.length;j++)
{

if(arr[j].startsWith(prefix))
{
// continue
c++
}
}
if(c==arr.length)
{
ans+=min[i]
}
}
return ans
}
}

0

Reply

Aditya Sharma4 months agoJun 05, 2026 16:53 (GMT +5:30)

// User function Template for Java
class Solution {
public String longestCommonPrefix(String arr[]) {
// code here simple approach
Arrays.sort(arr);
String first = arr[0];
String last = arr[arr.length-1];
int i=0;
while(i<first.length() && i<last.length() && first.charAt(i)==last.charAt(i)){
i++;
}
return first.substring(0,i);
}
}

0

Reply
(Show 1 Replies)

Mrittika Kundu5 months agoMay 01, 2026 21:57 (GMT +5:30)

class Solution {
public String longestCommonPrefix(String arr[]) {

String ans = "";
int min = Integer.MAX_VALUE;
for(String s : arr)
min = Math.min(min, s.length());

out:
for(int i = 0;i < min;i++){
char ch = arr[0].charAt(i);
for(int j = 1;j < arr.length;j++){
if(arr[j].charAt(i) != ch)
break out;
}
ans += ch;
}

return ans;
}
}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:117

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
def longestCommonPrefix(self, arr):
# code here
arr.sort()
res = ''
i = 0
first = arr[0]
last = arr[-1]
while i < len(first) and i < len(last):
if first[i]==last[i]:
res+=first[i]
i+=1
else:
break

return res

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1115 / 1115
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:117

Time Taken0.04

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Longest Common Prefix of Strings](https://www.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1)
