# 75 DAYS GFG POTD ARTICLE CHALLENGE CHALLENGE(DAY 3/75)

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

Reverse a String
Solved

Difficulty: BasicAccuracy: 69.49%Submissions: 623K+Points: 1Average Time: 15m

Given a string s, reverse the string.
Examples:
Input: s = "Geeks"
Output: "skeeG"

Input: s = "for"
Output: "rof"
Input: s = "a"
Output: "a"

Constraints:
1 ≤ s.size() ≤ 106
s consists only of English alphabets

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Topic Tags

Strings

Related Articles

Cpp Program To Print Reverse Of A String Using RecursionReverse A String In C Cpp Different MethodsReverse A String In JavaString Reverse

Discussions ( 1590 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Gevendra Verma(Edited)25/06/2026, 12:26
3 years agoAug 27, 2023 00:16 (GMT +5:30)

75 DAYS GFG POTD ARTICLE CHALLENGE CHALLENGE(DAY 3/75)
Reversing a String: Exploring Approaches and Optimized Solutions
Reversing a string is a common programming task that involves rearranging the characters of a given string in the opposite order. While the concept might seem straightforward, there are several approaches to achieve this goal, each with its own trade-offs in terms of time and space complexity. In this article, we'll dive deep into the process of reversing a string, exploring different approaches, providing optimized code examples, performing dry runs, and analyzing the time and space complexities.

Understanding the Problem

Before we delve into the various methods for reversing a string, let's establish a clear understanding of the problem. Given a string `s` of length `n`, our objective is to obtain a new string where the characters appear in reverse order.

Iterative Reversal

One of the simplest ways to reverse a string is by iteratively swapping the characters from the two ends towards the center. This approach involves initializing two pointers: one at the beginning of the string and the other at the end. With each iteration, we swap the characters at these pointers and move them towards each other until they meet at the center.

Optimized Iterative Reversal Code

class Solution:
def reverseString(self, input_word):
word_length = len(input_word)

if word_length < 2:
return input_word

char_list = list(input_word)
left_ptr, right_ptr = 0, word_length - 1

while left_ptr <= right_ptr:
char_list[left_ptr], char_list[right_ptr] = char_list[right_ptr], char_list[left_ptr]
left_ptr, right_ptr = left_ptr + 1, right_ptr - 1

return "".join(char_list)

Dry Run

Let's dry run the given code with an example input to see how it works. For this example, let's use the input string "Hello":

1. Initialize `Solution` class instance:
- `word_reverser = Solution()`

2. Call the `reverseWord` method with the input "Hello":
- `result = word_reverser.reverseWord("Hello")`

3. Inside the `reverse_word` method:
- `word_length = 5` (length of "Hello")
- Since `word_length` is not less than 2, we proceed to the next step.

4. Create a list of characters from the input word:
- `char_list = ['H', 'e', 'l', 'l', 'o']`

5. Initialize two pointers, `left_ptr` and `right_ptr`, to the start and end of the list:
- `left_ptr = 0`
- `right_ptr = 4`

6. Start swapping characters at `left_ptr` and `right_ptr`:
- Swap `'H'` and `'o'`: `char_list = ['o', 'e', 'l', 'l', 'H']`
- Move `left_ptr` to the right by 1: `left_ptr = 1`
- Move `right_ptr` to the left by 1: `right_ptr = 3`

7. Continue swapping:
- Swap `'e'` and `'l'`: `char_list = ['o', 'l', 'l', 'e', 'H']`
- Move `left_ptr` to the right by 1: `left_ptr = 2`
- Move `right_ptr` to the left by 1: `right_ptr = 2`

8. Now `left_ptr` and `right_ptr` are equal, so the loop stops.

9. Convert the character list back to a string:
- `result = "olleH"`

10. Return the reversed string:
- Return `"olleH"`

So, when you call `word_reverser.reverse_word("Hello")`, it will return `"olleH"` as the output.

Time and Space Complexity

The time complexity of this approach is O(n), where n is the length of the string. We iterate through half of the string's length and perform constant-time swaps.

The space complexity is O(n) as well, due to the space needed to convert the string into a list of characters.

Conclusion

Reversing a string is a fundamental problem in programming that can be approached using various methods.

15

Reply
(Show 10 Replies)

Anonymous_Geek1 month agoSep 20, 2026 16:48 (GMT +5:30)

Trying my beat 100 Days of DSA 01/100

CODE:--

public class Solution {

// Method 1: Reversing a String
public static String reverseString(String s) {
StringBuilder sb = new StringBuilder(s);
return sb.reverse().toString();
}

// Method 2: Reversing an Integer Array (In-Place / Optimized)
public static void reverseArray(int[] arr) {
int start = 0;
int end = arr.length - 1;

// Two-pointer approach: swap elements from ends moving inward
while (start < end) {
int temp = arr[start];
arr[start] = arr[end];
arr[end] = temp;
start++;
end--;
}
}

// Main Method to test both functions
public static void main(String[] args) {
// Testing String reversal
String originalStr = "hello";
String reversedStr = reverseString(originalStr);
System.out.println("Reversed String: " + reversedStr);

// Testing Array reversal
int[] arr = {1, 5, 9, 7, 6, 3};
reverseArray(arr);

System.out.print("Reversed Array: ");
for (int i = 0; i < arr.length; i++) {
System.out.print(arr[i] + " ");
}
System.out.println();
}
}

concept :- makeing the array with 2 pointers 1 start goes +1 and other pointer goes end of it and move  -1 and use temp to swap them them print them mail class looks like

public static void main(String[] args) {
String originalStr = "hello";
String reversedStr = reverseString(originalStr);
System.out.println("Reversed String: " + reversedStr);

int[] arr = {1, 5, 9, 7, 6, 3};
reverseArray(arr);

System.out.print("Reversed Array: ");
for (int i = 0; i < arr.length; i++) {
System.out.print(arr[i] + " ");
}
System.out.println();
}

0

Reply

lbrce1 month agoSep 18, 2026 22:08 (GMT +5:30)

class Solution {
public static String reverseString(String s) {

// code here
StringBuilder rev = new StringBuilder(s);
rev.reverse();
return rev.toString();

}
}

0

Reply

Sakshi Gupta(Edited)27/08/2026, 15:48
1 month agoAug 27, 2026 14:55 (GMT +5:30)

class Solution {
public static String reverseString(String s) {
// code here
StringBuilder sb = new StringBuilder(s);
sb.reverse();
return sb.toString();

}
}

class Solution {
public static String reverseString(String s) {
// code here
char[] arr= s.toCharArray();
int left = 0;
int right = arr.length-1;
while(left<right){

char temp a= arr[left];
arr[left] = arr[right];
arr[right]=temp;
left++;
right--;

}
return new String(arr);
}
}

0

Reply

g. akhil2 months agoAug 15, 2026 14:22 (GMT +5:30)

class Solution {
public static String reverseString(String s) {
// code here
String reverse = "";
char ch;
for(int i = 0; i < s.length(); i++){
ch = s.charAt(i);
reverse = ch + reverse;
}
return reverse;
}
}

0

Reply
(Show 1 Replies)

sumatew7a(Edited)13/08/2026, 12:40
2 months agoAug 13, 2026 12:40 (GMT +5:30)

class Solution {

reverseString(s) {
// code here
return s.split('').reverse().join('')
}
}

0

Reply

Shubham Kumar2 months agoAug 08, 2026 19:32 (GMT +5:30)

class Solution {
public static String reverseString(String s) {
// code here
StringBuilder sb = new StringBuilder(s);
sb.reverse();
return sb.toString();
}
}

0

Reply

SK Mirajul Islam2 months agoAug 06, 2026 22:35 (GMT +5:30)

class Solution:
def reverseString(self, s: str) -> str:
return s[::-1]

1

Reply

CHARAN BIRRU2 months agoAug 06, 2026 12:14 (GMT +5:30)

class Solution:
def reverseString(self, s: str) -> str:
# code here
return s[::-1]

0

Reply

shubham singh3 months agoJul 22, 2026 00:39 (GMT +5:30)

return s.split("").reverse().join("")

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:90

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

class Solution:
def reverseString(self, s: str) -> str:
# code here
return s[::-1]

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:90

Time Taken0.04

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[75 DAYS GFG POTD ARTICLE CHALLENGE CHALLENGE(DAY 3/75)](https://www.geeksforgeeks.org/problems/reverse-a-string/1)
