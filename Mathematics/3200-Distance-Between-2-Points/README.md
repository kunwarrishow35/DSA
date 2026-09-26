# Distance Between 2 Points

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

Distance Between 2 Points
Solved

Difficulty: BasicAccuracy: 49.98%Submissions: 28K+Points: 1

Given coordinates of 2 points as (x1, y1, x2 and y2) on a cartesian plane, find the distance between them and round the result to the nearest integer.
Examples:
Input: 0 0 2 -2
Output: 3
Explanation: Distance between (0, 0) and (2, -2) is 3.

Input: -20 23 -15 68
Output: 45
Explanation: Distance between (-20, 23) and (-15, 68) is 45.

Constraints:
-1000 <= x1, y1, x2, y2 <= 1000

Expected Complexities

Time Complexity: O(1)
Auxiliary Space: O(1)

Company Tags

Zoho

Topic Tags

MathematicsGeometric

Related Interview Experiences

Zoho Interview Experience Set 22 Experienced

Related Articles

Program Calculate Distance Two Points

Discussions ( 68 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

amit parmar1 month agoAug 26, 2026 21:52 (GMT +5:30)

import math
class Solution:
def distance(self, x1: int, y1: int, x2: int, y2: int) -> int:
return round(math.sqrt(((x1-x2)**2)+((y1-y2)**2)))

0

Reply

Anshul Dangi3 months agoJun 27, 2026 10:32 (GMT +5:30)

class Solution {
public int distance(int x1, int y1, int x2, int y2) {
int a = x2-x1;
int b = y2-y1;
return (int)Math.round(Math.sqrt(a*a + b*b));
}
}

1

Reply

NIKHIL BABHULKAR7 months agoFeb 11, 2026 23:10 (GMT +5:30)

One Liner Java

class Solution {
public int distance(int x1, int y1, int x2, int y2) {
return (int) Math.round(Math.sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));
}
}

0

Reply

manojchatzcy7 months agoJan 30, 2026 12:34 (GMT +5:30)

class Solution {
public int distance(int x1, int y1, int x2, int y2) {
// Code here
int a=x2-x1;
int b=y2-y1;
int res=(int)Math.round(Math.sqrt(Math.pow(a,2)+Math.pow(b,2)));
return res;
}
}

1

Reply

Selvarasan S8 months agoJan 24, 2026 22:52 (GMT +5:30)

// User function Template for Java

class Solution {
public int distance(int x1, int y1, int x2, int y2) {
// Code here
int s1 = (x1-x2);
int s2 = (y1-y2);

double sum=Math.sqrt(s1*s1+s2*s2);
int f = (int)Math.round(sum);
return f;
}

}

0

Reply

ramyaadiwf3r8 months agoJan 13, 2026 14:39 (GMT +5:30)

class Solution {
public:
int distance(int x1, int y1, int x2, int y2) {
int x=round(sqrt(pow(x2-x1,2)+pow(y2-y1,2)));
return x;
}
};

0

Reply

DAYAPULI SRINIVASULA RAO8 months agoJan 12, 2026 14:57 (GMT +5:30)

class Solution:

def distance(self, x1, y1, x2, y2):

# Code here

# we have to know the formula

import math

a=x2-x1

b=y2-y1

res=math.sqrt(a**2+b**2)

# just do it rounddd

return round(res)

1

Reply

Vimal Raj Nagarajan8 months agoJan 11, 2026 21:57 (GMT +5:30)

class Solution {
public int distance(int x1, int y1, int x2, int y2) {

long dx = x2 - x1;
long dy = y2 - y1;
long r = dx*dx + dy*dy;

long a = 0;
while ((a + 1L) * (a + 1L) <= r) {
a++;
}

// round instead of ceil
if (4*r >= 4*a*a + 4*a + 1)
return (int)(a + 1);
else
return (int)a;
}
}

Without Inbuilt Functions....( java )

0

Reply

Mukesh Kumar Pathak10 months agoNov 29, 2025 21:17 (GMT +5:30)

class Solution {
public:
int distance(int x1, int y1, int x2, int y2){
int d1 = abs(x1-x2);
int d2 = abs(y1-y2);

return int(round(sqrt(d1*d1 + d2*d2)));
}
};

0

Reply

JAGADESWARAN R10 months agoNov 17, 2025 11:11 (GMT +5:30)

Time Taken0.11
Accuracy :100%

class Solution {
public int distance(int x1, int y1, int x2, int y2) {
// Code here
int x = x2 - x1;
int y = y2 - y1;
double dis = Math.sqrt(x*x + y*y);
int result = (int)Math.round(dis);
return result;
}
}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1006 / 1006
Attempts : Correct / Total1 / 2Accuracy : 50%

Points Scored 1 / 1Your Total Score:70

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

import math

class Solution:

def distance(self, x1: int, y1: int, x2: int, y2: int) -> int:
# code here
return round((math.sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))))

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1006 / 1006
Attempts : Correct / Total1 / 2Accuracy : 50%

Points Scored 1 / 1Your Total Score:70

Time Taken0.04

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Distance Between 2 Points](https://www.geeksforgeeks.org/problems/distance-between-2-points3200/1)
