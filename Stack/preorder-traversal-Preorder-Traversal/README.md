# Preorder Traversal

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

Preorder Traversal
Solved

Difficulty: BasicAccuracy: 62.73%Submissions: 218K+Points: 1Average Time: 15m

Given the root of a binary tree, return its preorder traversal.  A preorder traversal first visits the node, then visits the left child (including its entire subtree), and finally visits the right child (including its entire subtree).

Examples:

Input: root = [1, 4, N, 4, 2]

Output: [1, 4, 4, 2]
Explanation: The preorder traversal of the given binary tree is [1, 4, 4, 2]

Input: root = [6, 3, 2, N, 1, 2, N]

Output: [6, 3, 1, 2, 2]
Explanation: The preorder traversal of the given binary tree is [6, 3, 1, 2, 2]

Constraints:
1 ≤ size of binary tree ≤ 3*104
0 ≤ node.data ≤ 105

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Company Tags

FlipkartAmazonMicrosoftWalmart

Topic Tags

StackTree

Related Interview Experiences

Flipkart Interview Experience Set 22 For Sde 2

Related Articles

Morris Traversal For PreorderPreorder Traversal Of Binary Tree

Discussions ( 502 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

GeeksforGeeks2 months agoJul 23, 2026 23:23 (GMT +5:30)

Hi Geeks! Thanks for reporting this. The technical issue affecting today's POTD has now been resolved, and everything is working normally again. We sincerely apologize for the inconvenience caused. We truly appreciate your consistency and continued participation in the POTD, and thank you for your patience and support while we resolved the issue.

0

Reply
(Show 1 Replies)

Raman Singh1 month agoAug 30, 2026 16:30 (GMT +5:30)

'''Structure of Tree Node
class Node:
def __init__(self,val):
self.data = val
self.left = None
self.right = None
'''

class Solution:
def pre(self, root, ans):
if root == None:
return
ans.append(root.data)
self.pre(root.left, ans)
self.pre(root.right, ans)

def preOrder(self, root):
# code here
ans = []
self.pre(root, ans)
return ans

1

Reply

Ronak Mulani1 month agoAug 18, 2026 19:23 (GMT +5:30)

class Solution {

void pre(Node root,ArrayList<Integer> ans){
if(root==null){
return;
}
ans.add(root.data);
pre(root.left,ans);
pre(root.right,ans);
}

public ArrayList<Integer> preOrder(Node root) {
//  code here
ArrayList<Integer> ans = new ArrayList<>();
pre(root,ans);
return ans;
}
}

0

Reply

BUSHRA2 months agoJul 23, 2026 22:57 (GMT +5:30)

Hello @geeksforgeeks Team, its going to be my 693th streak but due to the glitch on the website the potd is not getting marked.. Please fix the issue by 11.50 pm today 23-07-2026..
Please acknowledge this.

0

Reply
(Show 1 Replies)

Anonymous_Geek2 months agoJul 23, 2026 22:57 (GMT +5:30)

Hello @geeksforgeeks Team, its going to be my th str503eak but due to the glitch on the website the potd is not getting marked.. Please fix the issue by 11.50 pm today 23-07-2026....
Please acknowledge this.

0

Reply
(Show 1 Replies)

AYEMAN CHOUDHARY2 months agoJul 23, 2026 22:54 (GMT +5:30)

@geeksforgeeks i have solved the today's potd but it is not marked as solved.
Kindly help us to resolve this issue.

Reply

1

Reply
(Show 1 Replies)

Prabhakar Rayal2 months agoJul 23, 2026 22:53 (GMT +5:30)

@geeksforgeeks i have solved the today's potd but it is not marked as solved.
Kindly help us to resolve this issue.

0

Reply
(Show 1 Replies)

Sangharsh Meshram(Edited)23/07/2026, 22:51
2 months agoJul 23, 2026 22:50 (GMT +5:30)

@geeksforgeeks i have solved the today's potd but it is not marked as solved.
Kindly help us to resolve this issue.

0

Reply
(Show 2 Replies)

PATHIREDDI VARA KALYAN2 months agoJul 23, 2026 22:48 (GMT +5:30)

Dear @geeksforgeeks Team,Could u solve the issue which was raised by the  many of the members ,as most of us are maintaining Daily Streak everyday ,But  Today's POTD is not being Calculated ,Please try to solve this by atleast by 11:45 PM

1

Reply
(Show 1 Replies)

Diksha Dabhole2 months agoJul 23, 2026 22:44 (GMT +5:30)

@geeksforgeeks i have solved the today's potd but it is not marked as solved.
Kindly help us to resolve this issue.

0

Reply
(Show 1 Replies)

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:81

Time Taken0.09

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
20
21
22
23
24

'''Structure of Tree Node
class Node:
def __init__(self,val):
self.data = val
self.left = None
self.right = None
'''

class Solution:
def preOrder(self, root):
result = []

def preorder(node):
if node is None:
return

result.append(node.data)

preorder(node.left)

preorder(node.right)

preorder(root)
return result

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 1 / 1Your Total Score:81

Time Taken0.09

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Preorder Traversal](https://www.geeksforgeeks.org/problems/preorder-traversal/1)
