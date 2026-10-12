# Anagram

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

Anagram
Solved

Difficulty: EasyAccuracy: 44.93%Submissions: 507K+Points: 2Average Time: 20m

Given two non-empty strings s1 and s2, consisting only of lowercase English letters, determine whether they are anagrams of each other or not.
Two strings are considered anagrams if they contain the same characters with exactly the same frequencies, regardless of their order.
Examples:
Input: s1 = "geeks" s2 = "kseeg"
Output: true
Explanation: Both the string have same characters with same frequency. So, they are anagrams.
Input: s1 = "allergy", s2 = "allergyy"
Output: false
Explanation: Although the characters are mostly the same, s2 contains an extra 'y' character. Since the frequency of characters differs, the strings are not anagrams.
Input: s1 = "listen", s2 = "lists"
Output: false
Explanation: The characters in the two strings are not the same — some are missing or extra. So, they are not anagrams.

Constraints:
1 ≤ s1.size(), s2.size() ≤ 105
s1 consists only of lowercase English alphabets
s2 consists only of lowercase English alphabets

Expected Complexities

Time Complexity: O(n + m)
Auxiliary Space: O(1)

Company Tags

FlipkartDirectiAdobeGoogleNagarroMedia.net

Topic Tags

StringsSorting

Related Interview Experiences

Directi Interview Experience Set 22 Pool CampusAdobe Interview Experience Shecodes Software EngineerFlipkart Interview Experience Set 19 Sdet

Related Articles

Check Whether Two Strings Are Anagram Of Each Other

Discussions ( 1783 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Himanshu Patel4 days agoOct 08, 2026 14:32 (GMT +5:30)

class Solution {
public:
bool areAnagrams(string& s1, string& s2) {
// code here
if(s1.size()!=s2.size()){
return false;
}
unordered_map<char,int>freq;
for(int i=0;i<s1.size();i++){
freq[s1[i]]++;
}
//int count=0;
for(int i=0;i<s2.size();i++){
if(freq[s2[i]]==0){
return false;
}
freq[s2[i]]--;
}
return true;
}
};

class Solution {
public:
bool areAnagrams(string& s1, string& s2) {
// code here
if(s1.size()!=s2.size()){
return false;
}
unordered_map<char,int>freq;
for(int i=0;i<s1.size();i++){
freq[s1[i]]++;
}
//int count=0;
for(int i=0;i<s2.size();i++){
if(freq[s2[i]]==0){
return false;
}
freq[s2[i]]--;
}
return true;
}
};

hashmap

0

Reply

Aditya Singh3 weeks agoSep 19, 2026 23:30 (GMT +5:30)

#Python3
class Solution:
def areAnagrams(self, s1, s2):
# code here
if len(s1) != len(s2):
return False
return sorted(s1) == sorted(s2)

1

Reply

SHIVABALAJI BOYINA3 weeks agoSep 18, 2026 11:06 (GMT +5:30)

class Solution:
def areAnagrams(self, s1, s2):
return sorted(s1) == sorted(s2)

0

Reply

keshav nandwal3 weeks agoSep 16, 2026 19:22 (GMT +5:30)

class Solution {
public:
bool areAnagrams(string& s1, string& s2) {
// code here
int n1 = s1.size(), n2 = s2.size();
if (n1 != n2)return false;
vector<int>freq(26, 0);
for (int i = 0; i<n1; ++i)freq[s1[i]-'a']++;
for (int i = 0; i<n2; ++i)freq[s2[i]-'a']--;

for (int i = 0; i<26; ++i)if (freq[i] != 0)return false;
return true;
}
};

0

Reply

keshav nandwal3 weeks agoSep 16, 2026 19:17 (GMT +5:30)

class Solution {
public:
bool areAnagrams(string& s1, string& s2) {
// code here
sort(s1.begin(), s1.end());
sort(s2.begin(), s2.end());
return s1 == s2;
}
};

0

Reply

JASMITHA THUNGA1 month agoSep 10, 2026 10:25 (GMT +5:30)

class Solution:
def areAnagrams(self, s1: str, s2: str) -> bool:
# If lengths are different, they cannot be anagrams
if len(s1) != len(s2):
return False

# Frequency array for 26 lowercase English letters
count = [0] * 26

for char1, char2 in zip(s1, s2):
count[ord(char1) - ord('a')] += 1
count[ord(char2) - ord('a')] -= 1

# If all counts are zero, the strings are anagrams
return all(c == 0 for c in count)

0

Reply

Aman Kumar1 month agoSep 02, 2026 14:57 (GMT +5:30)

class Solution {

public static boolean areAnagrams(String s1, String s2) {

// code here

if (s1.length() != s2.length())

return false;

char[] char1 = s1.toCharArray();

char[] char2 = s2.toCharArray();

Arrays.sort(char1);

Arrays.sort(char2);

boolean result = Arrays.equals(char1, char2);

return result;

}

}

0

Reply

Shreeraj Gudade1 month agoSep 01, 2026 10:25 (GMT +5:30)

//passes 7 cases out of one thousand something :)
class Solution {
public static boolean areAnagrams(String s1, String s2) {
if (s1.length() != s2.length()) {
return false;
}
for (int i = 0; i < s1.length(); i++) {
boolean found = false;
for (int j = 0; j < s2.length(); j++) {
if (s1.charAt(i) == s2.charAt(j)) {
found = true;
break;
}
}
if (!found) {
return false;
}
}
return true;
}
}

0

Reply

Sarika Kumar1 month agoAug 29, 2026 17:40 (GMT +5:30)

class Solution:
def areAnagrams(self, s1, s2):
# code here
if sorted(s1)==sorted(s2):
return 'true'
else:
return 'false'

0

Reply

sumatew7a(Edited)24/08/2026, 20:01
1 month agoAug 24, 2026 19:57 (GMT +5:30)

class Solution {
areAnagrams(s1, s2) {
// code here
return s1.split('').sort().join('') === s2.split('').sort().join('')
}
}

Explanation:

join() is used because after split() and sort(), we have an array. We need to convert it back into a string so we can compare the two strings.

For example:

"listen".split('').sort()

gives:

['e', 'i', 'l', 'n', 's', 't']

Using:

.join('')

converts it back to:

"Now we can compare:

"eilnst" === "eilnst" // true

So the process is:
split():it converts string to array
sort():arrange the characters (asc)
join():again back to string

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1121 / 1121
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:89

Time Taken0.29

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
def areAnagrams(self, s1, s2):
# code here
return sorted(s1)==sorted(s2)

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1121 / 1121
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:89

Time Taken0.29

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Anagram](https://www.geeksforgeeks.org/problems/anagram-1587115620/1)
