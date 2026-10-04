# Detect Loop in Linked List

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

Detect Loop in Linked List
Solved

Difficulty: MediumAccuracy: 43.49%Submissions: 543K+Points: 4Average Time: 20m

Given a singly linked list, find if the given linked list contains a loop or not. A loop exists in a linked list if the next pointer of the last node points to any other node in the list (including itself), rather than being null.

Note: Internally, pos(1 based index) is used to denote the position of the node that tail's next pointer is connected to. If pos = 0, it means the last node points to null. Note that pos is not passed as a parameter.
Examples:
Input: pos = 2,

Output: true
Explanation: There exists a loop as last node is connected back to the second node.

Input: pos = 0,

Output: false
Explanation: There exists no loop in given linked list.

Input: pos = 1,

Output: true
Explanation: There exists a loop as last node is connected back to the first node.

Constraints:
1 ≤ size of linked list ≤ 105
1 ≤ node.data ≤ 103
0 ≤ pos ≤ size of binary tree

Expected Complexities

Time Complexity: O(n)
Auxiliary Space: O(1)

Company Tags

PaytmVMWareAccoliteAmazonOYO RoomsSamsungSnapdealD-E-ShawHikeMakeMyTripWalmartMAQ SoftwareAdobeSAP LabsQualcommVeritasMahindra ComvivaLybrate

Topic Tags

Linked Listtwo-pointer-algorithm

Related Interview Experiences

Accolite Interview Experience Set 6 On CampusVmware Interview Experience Set 4 CampusPaytm Interview Experience Set 11 2 Years ExperiencedWalmart Labs Interview Experience Set 5 On CampusWalmart Lab Interview Experience Set 8 Off Campus 3 Years ExperienceQualcomm Interview Set 2Qualcomm Interview Experience Set 7 Off CampusQualcomm Interview Experience Set 8 ExperiencedMakemytrip Interview Experience Set 8 On CampusVeritas Interview Experience Set 2 CampusSamsung Rnd Bangalore Interview 2018Adobe Interview Experience 2020 Internship Off Campus

Related Articles

Detect Loop In A Linked List

Discussions ( 795 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Vivek Kushwaha5 days agoSep 29, 2026 05:14 (GMT +5:30)

class Solution {
public:
bool detectLoop(Node* head) {
Node* slow=head;
Node* fast=head;

while(fast!=NULL && fast->next!=NULL){
slow=slow->next;
fast=fast->next->next;
if(slow==fast)
return true;
}
return false;

}
};

0

Reply

Raman Singh1 month agoAug 11, 2026 18:23 (GMT +5:30)

class Solution:
def detectLoop(self, head):
# code here
slow = fast = head
while fast and fast.next:
slow = slow.next
fast = fast.next.next
if slow == fast:
return 1
return 0

1

Reply

Kritika2 months agoJul 13, 2026 19:13 (GMT +5:30)

/*
class Node {
public:
int data;
Node *next;

Node(int x) {
data = x;
next = NULL;
}
} */

class Solution {
public:
bool detectLoop(Node* head) {
if(head==NULL) return false;
Node * slow = head;
Node *fast=head;
while(fast!=NULL && fast->next!=NULL){
slow=slow->next;
fast=fast->next->next;
if(slow==fast) return true;
}return false;
}
};

0

Reply

Jana Jana2 months agoJul 13, 2026 06:34 (GMT +5:30)

Too simple solution:

class Solution {
public boolean detectLoop(Node head) {
Node temp=head;

HashMap<Node,Integer> map=new HashMap<>();

while(temp!=null){
if(map.containsKey(temp)){
return true;
}
map.put(temp,1);
temp=temp.next;
}

return false;
}
}

1

Reply

Karan2 months agoJul 06, 2026 22:33 (GMT +5:30)

class Solution {
public boolean detectLoop(Node head) {
Node slow = head;
Node fast = head;
boolean cycle = false;

while(fast != null && fast.next != null){
slow = slow.next;
fast = fast.next.next;

if(fast != null && slow == fast){
cycle = true;
break;
}
}
return cycle;
}
}

1

Reply

Shivam3 months agoJul 03, 2026 15:00 (GMT +5:30)

class Solution {
public:
bool detectLoop(Node* head) {
// M-4 Jugaad
Node *temp=head;
int i=1;
while(i<100000 && temp) //since maximum nodes can be 100000 so if there will be
{                       // loop so i must increase.
temp=temp->next;
i++;
}
if(i==100000)
return 1;
else
return 0;

}
};

0

Reply

Rahul Gupta3 months agoJun 17, 2026 11:11 (GMT +5:30)

class Solution {
public:
bool detectLoop(Node* head) {
// code here
Node*slow=head;
Node*fast=head;

if(head==NULL)
{
return false;
}
while(fast!=NULL&&fast->next!=NULL)
{
slow=slow->next;
fast=fast->next->next;
if(slow==fast)
{
return true;
}
}

return false;
}
};

0

Reply

Binary Baba(Edited)28/05/2026, 01:29
4 months agoMay 28, 2026 01:27 (GMT +5:30)

/*
class Node {
public:
int data;
Node *next;

Node(int x) {
data = x;
next = NULL;
}
} */

class Solution {
public:
bool detectLoop(Node* head) {
// code here
bool loop = false;
while(head) {
loop |= (head->data < 0);
if(loop) break;

head->data *= -1;
head = head->next;
}
//we will revert the val if needed
return loop;
}
};

0.18 sec according to the GFG

1

Reply

Ayush Ranjan4 months agoMay 23, 2026 20:22 (GMT +5:30)

class Solution {
public:
bool detectLoop(Node* head) {
// code here
// We will solve it by unorder mapping to reduce the time utilised in the
// previous code

Node*curr=head;
unordered_map<Node*,bool>visited;
while(curr)
{
if(visited[curr]==1)
return 1;

visited[curr]=1;
curr=curr->next;
}
return 0;
}
};                                                                                                                                         While this code compile in 0.38 seconds according to the GFG because of in the given code space complexity is O(n) but we have to solve it in order of O(1). So that difference un the previous submitted code and this code.

0

Reply

Ayush Ranjan4 months agoMay 23, 2026 20:19 (GMT +5:30)

class Solution {
public:
bool detectLoop(Node* head) {
// code here
// We will solve it by unorder mapping to reduce the time utilised in the
// previous code

Node*slow=head;
Node*fast=head;
while(fast!=NULL&&fast->next!=NULL)
{
slow=slow->next;
fast=fast->next->next;
if(slow==fast)
return 1;
}
return 0;
}
};

The Given Code compile in GFG time 0.16 seconds

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1116 / 1116
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 4 / 4Your Total Score:87

Time Taken0.17

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
20
21
22
23

''' Linked List Node Structure
class Node:
def __init__(self, data):
self.data = data
self.next = None
'''

class Solution:
def detectLoop(self, head):
# code here
slow = head
fast = head

while fast is not None and fast.next is not None:
fast = fast.next.next
slow = slow.next

if slow == fast:
return True
return False

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1116 / 1116
Attempts : Correct / Total1 / 1Accuracy : 100%

Points Scored 4 / 4Your Total Score:87

Time Taken0.17

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Detect Loop in Linked List](https://www.geeksforgeeks.org/problems/detect-loop-in-linked-list/1)
