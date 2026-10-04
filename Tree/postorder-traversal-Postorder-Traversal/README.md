# Postorder Traversal

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

Postorder Traversal

Difficulty: BasicAccuracy: 74.96%Submissions: 159K+Points: 1Average Time: 15m

Given the root of a Binary Tree, return its Postorder Traversal.

Note: A postorder traversal first visits the left child (including its entire subtree), then visits the right child (including its entire subtree), and finally visits the node itself.

Examples:

Input: root = [19, 10, 8, 11, 13]

Output: [11, 13, 10, 8, 19]
Explanation: The postorder traversal of the given binary tree is [11, 13, 10, 8, 19].

Input: root = [11, 15, N, 7]

Output: [7, 15, 11]
Explanation: The postorder traversal of the given binary tree is [7, 15, 11].

Constraints:
1 ≤ size of binary tree ≤ 3*104
0 ≤ node.data ≤ 105

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Company Tags

Morgan StanleySnapdealWalmart

Topic Tags

Tree

Related Articles

Morris Traversal For PostorderPostorder Traversal Of Binary Tree

Discussions ( 247 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Prince Kumar1 month agoSep 04, 2026 02:15 (GMT +5:30)

class Solution {
public:
void PostOrder(Node*root,vector<int>&ans){
if(root == NULL)
return;
PostOrder(root->left,ans);
PostOrder(root->right,ans);
ans.push_back(root->data);
}
vector<int> postOrder(Node* root) {
// code here
vector<int>ans;
PostOrder(root,ans);
return ans;

}
};

0

Reply

Raman Singh1 month agoAug 30, 2026 16:36 (GMT +5:30)

class Solution:
def post(self, root, ans):
if root == None:
return
self.post(root.left, ans)
self.post(root.right, ans)
ans.append(root.data)
def postOrder(self, root):
# code here
ans = []
self.post(root, ans)
return ans

1

Reply

Ronak Mulani1 month agoAug 18, 2026 19:27 (GMT +5:30)

class Solution {

void post(Node root,ArrayList<Integer> ans){
if(root==null){
return;
}
post(root.left,ans);
post(root.right,ans);
ans.add(root.data);
}

public ArrayList<Integer> postOrder(Node root) {
//  code here
ArrayList<Integer> ans = new ArrayList<>();
post(root,ans);
return ans;
}
}

0

Reply

Mohseenahmed Peerwale3 months agoJun 25, 2026 14:15 (GMT +5:30)

class Solution:
def postOrder(self, root):
# code here
if root is None:
return []
return self.postOrder(root.left) + self.postOrder(root.right) + [root.data]

0

Reply

Rohit Kumar4 months agoMay 17, 2026 01:19 (GMT +5:30)

/*
class Node {
public:
int data;
Node* left;
Node* right;

Node(int val) {
data = val;
left = NULL;
right = NULL;
}
};
*/

class Solution {
public:
void findPost(Node* root, vector<int> &res){
if(root == NULL) return;
findPost(root->left, res);
findPost(root->right, res);
res.push_back(root->data);
}
vector<int> postOrder(Node* root) {
// code here
vector<int> res;
findPost(root, res);
return res;
}
};

0

Reply

Anonymous_Geek5 months agoApr 22, 2026 15:47 (GMT +5:30)

fr fr gng gng

0

Reply

Tina Florip6 months agoMar 18, 2026 10:07 (GMT +5:30)

// code here
ArrayList<Integer> postorder = new ArrayList<>();
if (root == null) return postorder;

Stack<Node> st = new Stack<>();
Node curr = root;
Node lastVisited = null;

while (curr != null || !st.isEmpty()) {
if (curr != null) {
st.push(curr);
curr = curr.left;
} else {
Node peekNode = st.peek();
if (peekNode.right != null && lastVisited != peekNode.right) {
curr = peekNode.right;
} else {
postorder.add(peekNode.data);
lastVisited = st.pop();
}
}
}
return postorder;

0

Reply

farnaz6 months agoMar 13, 2026 15:56 (GMT +5:30)

class Solution {
public ArrayList<Integer> postOrder(Node root) {
// code here
ArrayList<Integer> postorder = new ArrayList<>();
if (root == null) return postorder;

Stack<Node> st = new Stack<>();
Node curr = root;
Node lastVisited = null;

while (curr != null || !st.isEmpty()) {
if (curr != null) {
st.push(curr);
curr = curr.left;
} else {
Node peekNode = st.peek();
if (peekNode.right != null && lastVisited != peekNode.right) {
curr = peekNode.right;
} else {
postorder.add(peekNode.data);
lastVisited = st.pop();
}
}
}
return postorder;
}
}

0

Reply

JAMPULA YASHWANTH7 months agoMar 02, 2026 13:46 (GMT +5:30)

code in  java

class Solution {
public ArrayList<Integer> postOrder(Node root) {
// code here
ArrayList<Integer> postorder = new ArrayList<>();
if (root == null) return postorder;

Stack<Node> st = new Stack<>();
Node curr = root;
Node lastVisited = null;

while (curr != null || !st.isEmpty()) {
if (curr != null) {
st.push(curr);
curr = curr.left;
} else {
Node peekNode = st.peek();
if (peekNode.right != null && lastVisited != peekNode.right) {
curr = peekNode.right;
} else {
postorder.add(peekNode.data);
lastVisited = st.pop();
}
}
}
return postorder;
}
}

0

Reply

Jatavath Kumar Nayak7 months agoFeb 19, 2026 10:21 (GMT +5:30)

class Solution {
public ArrayList<Integer> postOrder(Node root) {
// code here
ArrayList<Integer> postorder = new ArrayList<>();
if (root == null) return postorder;

Stack<Node> st = new Stack<>();
Node curr = root;
Node lastVisited = null;

while (curr != null || !st.isEmpty()) {
if (curr != null) {
st.push(curr);
curr = curr.left;
} else {
Node peekNode = st.peek();
if (peekNode.right != null && lastVisited != peekNode.right) {
curr = peekNode.right;
} else {
postorder.add(peekNode.data);
lastVisited = st.pop();
}
}
}
return postorder;
}
}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom Input
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / TotalYou can see all your attempts in submission tabAccuracy : 100%

Points Scored You can see the score in submission tab
Time Taken0.07

Calculating score…

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

''' Structure of Binary Tree Node
class Node:
def __init__(self, val):
self.data = val
self.left = None
self.right = None
'''

class Solution:
def postOrder(self, root):

res = []
def postorder(node):
if node is None:
return
postorder(node.left)
postorder(node.right)
res.append(node.data)

postorder(root)
return res

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom Input
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1111 / 1111
Attempts : Correct / TotalYou can see all your attempts in submission tabAccuracy : 100%

Points Scored You can see the score in submission tab
Time Taken0.07

Calculating score…

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Postorder Traversal](https://www.geeksforgeeks.org/problems/postorder-traversal/1)
