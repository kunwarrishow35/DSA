# Morris traversal for Inorder

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

Inorder Traversal
Solved

Difficulty: BasicAccuracy: 67.15%Submissions: 224K+Points: 1Average Time: 15m

Given a  root of a Binary Tree, your task is to return its Inorder Traversal.

Note: An inorder traversal first visits the left child (including its entire subtree), then visits the node, and finally visits the right child (including its entire subtree).

Examples:

Input: root = [1, 2, 3, 4, 5]

Output: [4, 2, 5, 1, 3]
Explanation: The inorder traversal of the given binary tree is [4, 2, 5, 1, 3].

Input: root = [8, 1, 5, N, 7, 10, 6, N, 10, 6]

Output: [1, 7, 10, 8, 6, 10, 5, 6]
Explanation: The inorder traversal of the given binary tree is [1, 7, 10, 8, 6, 10, 5, 6].

Constraints:
1 ≤ size of binary tree ≤ 3*104
0 ≤ node.data ≤ 105

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Company Tags

AmazonSnapdealAdobe

Topic Tags

Tree

Related Articles

Inorder Traversal Of Binary TreeInorder Tree Traversal Without Recursion And Without Stack

Discussions ( 495 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Lakshya Pratap Singh3 days agoOct 01, 2026 15:04 (GMT +5:30)

Morris traversal for Inorder

class Solution {
public:
vector<int> inOrder(Node* root) {
// code here
vector<int> v;
Node* curr = root;
while (curr != NULL) {
if (curr -> left == NULL) {
v.push_back(curr->data);
curr = curr -> right;
} else {
Node* prev = curr->left;
while (prev->right != NULL && prev->right != curr) {
prev = prev->right;
}
if (prev -> right == NULL) {
prev -> right = curr;
curr = curr -> left;
} else {
prev -> right = NULL;
v.push_back(curr->data);
curr = curr -> right;
}
}
}
return v;
}
};

0

Reply

SHIVABALAJI BOYINA2 weeks agoSep 18, 2026 11:21 (GMT +5:30)

class Solution:
def ino(self, root, ans):
if root == None:
return
self.ino(root.left, ans)
ans.append(root.data)
self.ino(root.right, ans)
def inOrder(self, root):
# code here
ans = []
self.ino(root, ans)
return ans

0

Reply

Prince Kumar1 month agoSep 04, 2026 02:06 (GMT +5:30)

class Solution {
public:
void InOrder(Node*root,vector<int>&ans){
if(root == NULL)
return;

InOrder(root->left,ans);
ans.push_back(root->data);
InOrder(root->right,ans);
}
vector<int> inOrder(Node* root) {
// code here
vector<int>ans;
InOrder(root,ans);
return ans;
}
};

0

Reply

Raman Singh1 month agoAug 30, 2026 16:34 (GMT +5:30)

class Solution:
def ino(self, root, ans):
if root == None:
return
self.ino(root.left, ans)
ans.append(root.data)
self.ino(root.right, ans)
def inOrder(self, root):
# code here
ans = []
self.ino(root, ans)
return ans

1

Reply

Ronak Mulani1 month agoAug 18, 2026 19:25 (GMT +5:30)

class Solution {

void in(Node root,ArrayList<Integer> ans){
if(root==null){
return;
}
in(root.left,ans);
ans.add(root.data);
in(root.right,ans);
}

public ArrayList<Integer> inOrder(Node root) {
//  code here
ArrayList<Integer> ans = new ArrayList<>();
in(root,ans);
return ans;
}
}

0

Reply

Anonymous_Geek2 months agoJul 27, 2026 15:57 (GMT +5:30)

class Solution {
public ArrayList<Integer> inOrder(Node root) {
List<Integer>data=new ArrayList<>();
inorder(root,data);
return (ArrayList<Integer>)data;

}
void inorder(Node root,List<Integer>List){
if(root==null){
return;
}
inorder(root.left,list);
list.add(root.data);
inorder(root.right,list)

}
}

0

Reply

FAIZAN AHMED3 months agoJun 30, 2026 12:14 (GMT +5:30)

The expected output:

[4, 2, 5, 1, 3]

is not preorder. It is inorder traversal:

Left → Root → Right

Your function is named:

def inOrder(self, root):

so GFG expects inorder traversal, despite the problem title you copied earlier mentioning preorder.

Use this:

class Solution:
def inOrder(self, root):
ans = []

def inorder(node):
if node is None:
return

inorder(node.left)
ans.append(node.data)
inorder(node.right)

inorder(root)
return ans

Complexity

Time: O(n)

Space: O(h) (recursion stack), where h is the height of the tree.

Your previous output:

[1, 2, 4, 5, 3]

was preorder (Root → Left → Right), while the judge expects inorder (Left → Root → Right).

1

Reply

Aditya Srivastava4 months agoJun 03, 2026 10:06 (GMT +5:30)

My C++ Solution using Morris Traversal

class Solution {
public:
vector<int> inOrder(Node* root) {

Node* curr= root;
vector<int> ans;

while(curr!= NULL){
if(!curr->left){
ans.push_back(curr->data);
curr= curr->right;
}
else{
Node* pred= curr->left;
while(pred->right != NULL && pred->right != curr){
pred= pred->right;
}

if(pred->right == NULL){//Temporary links create
pred->right= curr;
curr= curr->left;
}
else{
pred->right= NULL;
ans.push_back(curr->data);//Temporary links break
curr= curr->right;
}
}
}
return ans;
}
};

4

Reply

MOHIT4 months agoMay 30, 2026 21:18 (GMT +5:30)

hard hai yr 💀

0

Reply

Kanha Sharma(Edited)05/05/2026, 12:53
5 months agoMay 05, 2026 00:38 (GMT +5:30)

#70

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:80

Time Taken0.07

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

''' Structure of Binary Tree Node
class Node:
def __init__(self, val):
self.data = val
self.left = None
self.right = None
'''

class Solution:
def inOrder(self, root):
result = []

def inorder(node):
if node is None:
return

inorder(node.left)
result.append(node.data)
inorder(node.right)

inorder(root)
return result

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 2 / 2Your Total Score:80

Time Taken0.07

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Morris traversal for Inorder](https://www.geeksforgeeks.org/problems/inorder-traversal/1)
