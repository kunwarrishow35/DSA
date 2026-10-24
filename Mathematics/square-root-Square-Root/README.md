# Square Root

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

Square Root
Solved

Difficulty: EasyAccuracy: 54.03%Submissions: 396K+Points: 2Average Time: 20m

Given a positive integer n, find the square root of n. If n is not a perfect square, then return the floor value.
Floor value of any number is the greatest Integer which is less than or equal to that number.
Examples:
Input: n = 4
Output: 2
Explanation: Since, 4 is a perfect square, so its square root is 2.

Input: n = 11
Output: 3
Explanation: Since, 11 is not a perfect square, floor of square root of 11 is 3.
Input: n = 1
Output: 1
Explanation: 1 is a perfect square, so its square root is 1.

Constraints:
1 ≤ n ≤ 3*104

Expected Complexities

Time Complexity: O(log n)
Auxiliary Space: O(1)

Company Tags

VMWareFlipkartAccoliteAmazonMicrosoft

Topic Tags

SearchingMathematicsBinary Search

Related Interview Experiences

Flipkart Interview Set 8 Sde 1

Related Articles

Square Root Of An Integer

Discussions ( 1307 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Kunal Shaw2 years agoAug 13, 2024 22:44 (GMT +5:30)

Binary Search Intuition

Binary search is a divide-and-conquer algorithm that efficiently finds an element or its position in a sorted range by repeatedly dividing the range in half. The key idea here is that if you know that a particular value x doesn't satisfy the condition x^2≤n, then any value smaller than x also won't satisfy it. Conversely, if x^2≤n, then any value greater than x might still satisfy the condition.

Code :

long long int floorSqrt(long long int n) {
// base case
if (n == 0 || n == 1)
return n;

long long int start = 1, end = n, ans;

// binary search to find square root of a number
while (start <= end) {
long long mid = (start + end) / 2;

// check if mid*mid == n
if (mid * mid == n)
return mid;

// if mid*mid < n, then iterate on the upper half
if (mid * mid < n) {
start = mid + 1;
ans = mid;
}
// else, iterate for the lower half
else
end = mid - 1;
}
return ans;
}

Code Explanation

Let's go through the code step by step:

Base Cases:

if (n == 0 || n == 1)
return n;
If n is 0 or 1, the square root of n is n itself. So, the function returns  n.

Initial Setup:

long long int start = 1, end = n, ans;
Here, start is initialized to 1, and end is initialized to n. The variable ans will store the final result (i.e., the floor of the square root).

Binary Search:

while (start <= end) {
long long mid = (start + end) / 2;
The binary search starts. The mid variable is the midpoint between start and end.

Check if mid is the Square Root:

if (mid * mid == n)
return mid;
If mid * mid is exactly equal to n, then mid is the square root, and the function returns mid.

Adjust the Search Range:

if (mid * mid < n) {
start = mid + 1;
ans = mid;
} else {
end = mid - 1;
}
If mid * mid is less than n, then mid is a candidate for the floor of the square root, but there might be a larger integer whose square is still ≤n.
So, the search range is adjusted by setting start to mid + 1, and ans is updated to mid.
If mid * mid is greater than n, the search range is adjusted by setting end to mid - 1, since any value greater than mid will have a square larger than n.

Return the Answer:

return ans;
Once the loop ends, ans will hold the largest integer whose square is less than or equal to n, which is the floor of the square root.

Why Binary Search?
Efficiency: Binary search is efficient for this problem because it reduces the problem size by half at each step. Instead of iterating through all possible values, binary search finds the answer in O(logn) time.
Correctness: The binary search ensures that you find the largest integer x such that x^2≤n.

This approach is particularly useful for large values of n, where a simple linear search would be too slow.

7

Reply
(Show 2 Replies)

GeeksforGeeks2 years agoAug 13, 2024 10:01 (GMT +5:30)

Hi Geeks,

Only Solution 🤡 Explanation + Approches 🗿

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

5

Reply
(Show 2 Replies)

poltergeist2 weeks agoOct 06, 2026 20:02 (GMT +5:30)

class Solution {
int floorSqrt(int n) {
// code here
return (int)Math.floor(Math.sqrt(n));
}
}

0

Reply

Nandhakumar1 month agoSep 19, 2026 16:48 (GMT +5:30)

this is easy method that                                                                            int floorSqrt(int n) {
// code here
return (int) Math.sqrt(n);
}

1

Reply

Himanshu1 month agoSep 16, 2026 13:38 (GMT +5:30)

class Solution:
def floorSqrt(self, n):
if n < 2:
return n
r = n
while r * r > n:
r = (r + n // r) // 2
return r

0

Reply

Anonymous_Geek1 month agoSep 15, 2026 10:47 (GMT +5:30)

Python Solution::-

class Solution:
def floorSqrt(self, n):
return int(n**0.5)

1

Reply

Pooja S2 months agoAug 23, 2026 16:08 (GMT +5:30)

class Solution {
int floorSqrt(int n) {
// code here

int i=1;
while(i*i<=n){
i++;
}return i-1;
}
}

0

Reply

Avanishsree V P2 months agoAug 15, 2026 14:58 (GMT +5:30)

import java.util.*;
class Solution {
int floorSqrt(int n) {
// code here
return (int) Math.sqrt(n);
}
}

0

Reply

Laxmikant Hatkar2 months agoAug 05, 2026 21:04 (GMT +5:30)

class Solution {
public:
int floorSqrt(int n) {
// code here

int s = 0;
int e = n;
long long ans = -1;
long long mid = s + (e - s) / 2;
while(s <= e){
long long square = mid * mid;
if(square == n){
return mid;
}
if(square < n){
ans = mid;
s = mid + 1;
}
else{
e = mid - 1;
}
mid = s + (e - s) / 2;
}
return ans;

}
};

0

Reply

Dhananjay Kushwaha3 months agoJul 13, 2026 11:07 (GMT +5:30)

it is type casting problem

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:127

Time Taken0.03

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

import math

class Solution:
def floorSqrt(self, n: int) -> int:
return math.isqrt(n)

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:127

Time Taken0.03

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Square Root](https://www.geeksforgeeks.org/problems/square-root/1)
