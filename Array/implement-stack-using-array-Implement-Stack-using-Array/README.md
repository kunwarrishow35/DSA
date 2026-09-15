# Implement Stack using Array

## Problem

CoursesSale

Tutorials

Practice

Jobs

Switch to Light Mode

Menu

Back to Explore Page

Ask A DoubtMy Doubts

FREQUENTLY ASKED QUESTIONS

ProblemEditorialSubmissionsComments

Implement Stack using Array
Solved

Difficulty: BasicAccuracy: 54.76%Submissions: 342K+Points: 1Average Time: 25m

Implement a Stack using an Array, where the size of the array, n is given.
The Stack must support the following operations:

(i) push(x): Insert an element x at the top of the stack.
(ii) pop(): Remove the element from the top of the stack.
(iii) peek(): Return the top element if not empty, else -1.
(iv) isEmpty(): Return true if the stack is empty else return false.
(v) isFull(): Return true if the stack is full else return false.

There will be a sequence of queries queries[][]. The queries are represented in numeric form:

1 x : Call push(x)

2 : Call pop()

3 : Call peek()

4  : Call isEmpty()

5 : Call isFull()

You just have to implement the functions push, pop, peek, isEmpty, and isFull. The driver code will handle the output.

Note: All the queries are valid.

Examples:

Input: n = 3, q = 6, queries[][] = [[1, 5], [1, 3], [3], [2], [4], [5]]
Output: [3, false, false]
Explanation: Queries on stack are as follows:
push(5) : Insert 5 at the top of the stack.
push(3) : Insert 3 at the top of the stack.
peek() : Return the top element i.e. 3.
pop() : Remove the top element i.e. 3.
isEmpty() : return false as the stack is not empty.
isFull() : return false as the stack is not full. Capacity = 3.

Input: n = 1, q = 5, queries[][] =  [[2], [3], [4], [1, 9], [5]]
Output: [-1, -1, true, true]
Explanation: Queries on stack are as follows:
pop(): Since stack is empty, nothing is popped.
peek(): Return the top element. Since the stack is empty, return -1.
isEmpty(): Return true as the stack is empty.
push(9): Insert 9 at the top of the stack. The stack will be [9].
isFull(): Return true as the stack is full. Capacity = 1.

Constraints:
1 ≤ n ≤ 103
1 ≤ q ≤ 103
0 ≤ x ≤ 105

Expected Complexities

Time Complexity: O(1)
Auxiliary Space: O(1)

Company Tags

FactSetVisaGoldman SachsQualcommKritikal Solutions

Topic Tags

ArraysStack

Related Articles

Implement Stack Using Array

Discussions ( 372 Threads )

Commenting as Rishow KunwarComment Anonymously

💡Discussion Guidelines
Please avoid posting complete solutions or full code in the comments.
Ask questions, share hints, discuss approaches, or report any issues. Let's help everyone learn together.

Rahul Gupta5 days agoSep 09, 2026 23:24 (GMT +5:30)

class myStack {
int size;
int top;
int*arr;
public:
myStack(int n) {
// Define Data Structures
size=n;
top=-1;
arr=new int[n];
}

bool isEmpty() {
// check if the stack is empty
return top==-1;
}

bool isFull() {
// check if the stack is full
return top==size-1;
}

void push(int x) {
// inserts x at the top of the stack
if(top==size-1) return;
top++;
arr[top]=x;
}

void pop() {
// removes an element from the top of the stack
if(top==-1) return;
top--;
}

int peek() {
// Returns the top element of the stack
if(top==-1) return -1;
return arr[top];

}
};

0

Reply

Easwer2 weeks agoAug 31, 2026 02:23 (GMT +5:30)

class myStack:
def __init__(self, n):
# Define Data Structures

self.n = n
self.stackArray = [0] * n
self.topIndex = -1

def isEmpty(self):
# Check if stack is empty

if self.topIndex == -1:
return True
return False

def isFull(self):
# Check if stack is full

if self.topIndex >= self.n-1:
return True
return False

def push(self, x):
# Insert x at the top of the stack

if not self.isFull():
self.topIndex += 1
self.stackArray[self.topIndex] = x

def pop(self):
# Removes an element from the top of the stack

if not self.isEmpty():
x = self.stackArray[self.topIndex]
self.topIndex -=1
self.stackArray[self.topIndex]
return x
return -1

def peek(self):
# Returns the top element of the stack

if not self.isEmpty():
return self.stackArray[self.topIndex]
return -1

0

Reply

SHIVABALAJI BOYINA1 month agoAug 14, 2026 10:18 (GMT +5:30)

class myStack:
def __init__(self, n):
self.n = n
self.stack = [0] * n
self.top = -1

def isEmpty(self):
return self.top == -1

def isFull(self):
return self.top == self.n - 1

def push(self, x):
if not self.isFull():
self.top += 1
self.stack[self.top] = x

def pop(self):
if not self.isEmpty():
x = self.stack[self.top]
self.top -= 1
return x
return -1

def peek(self):
if not self.isEmpty():
return self.stack[self.top]
return -1

0

Reply

GATTU JITHIN1 month agoAug 12, 2026 14:27 (GMT +5:30)

class myStack {
int top;
vector<int> arr;
int size;
public:
myStack(int n) {
top = -1;
size = n;
arr.resize(n);
}

bool isEmpty() {
return top == -1;
}

bool isFull() {
return top == size - 1;
}

void push(int x) {
if (isFull())   return;
arr[++top] = x;
}

void pop() {
if (isEmpty())  return;

top--;
}

int peek() {
if (isEmpty())  return -1;
return arr[top];
}
};

0

Reply

SOURAV BARIK1 month agoAug 10, 2026 17:06 (GMT +5:30)

class myStack {
int top;
vector<int> arr;
int size;
public:
myStack(int n) {
top = -1;
size = n;
arr.resize(n);
}

bool isEmpty() {
return top == -1;
}

bool isFull() {
return top == size - 1;
}

void push(int x) {
if (isFull())   return;
arr[++top] = x;
}

void pop() {
if (isEmpty())  return;

top--;
}

int peek() {
if (isEmpty())  return -1;
return arr[top];
}
};

1

Reply

Anonymous_Geek1 month agoAug 10, 2026 09:58 (GMT +5:30)

class myStack:
def __init__(self, n):
# Define Data Structures
self.stack=[]
self.n=n

def isEmpty(self):
# Check if stack is empty
return len(self.stack)==0

def isFull(self):
# Check if stack is full
return len(self.stack)==self.n

def push(self, x):
# Insert x at the top of the stack
if self.n > len(self.stack):
self.stack.append(x)

def pop(self):
# Removes an element from the top of the stack
if not self.isEmpty():
return self.stack.pop()
return -1

def peek(self):
# Returns the top element of the stack
if self.isEmpty():
return -1
return self.stack[-1]

0

Reply

Anonymous_Geek4 months agoMay 09, 2026 23:44 (GMT +5:30)

class myStack:
def __init__(self, n):
# Define Data Structures
self.stack=[]
self.n=n

def isEmpty(self):
# Check if stack is empty
return len(self.stack)==0

def isFull(self):
# Check if stack is full
return len(self.stack)==self.n

def push(self, x):
# Insert x at the top of the stack
if self.n > len(self.stack):
self.stack.append(x)

def pop(self):
# Removes an element from the top of the stack
if not self.isEmpty():
return self.stack.pop()
return -1

def peek(self):
# Returns the top element of the stack
if self.isEmpty():
return -1
return self.stack[-1]

0

Reply

Amit Maurya5 months agoMar 24, 2026 19:29 (GMT +5:30)

class myStack {
int size;
int arr[];
int top;
public myStack(int n) {
top=-1;
arr=new int[n];
size=n;
}

public boolean isEmpty() {
if(top==-1)
{
return true;
}
return false;
}

public boolean isFull() {
if(top==size-1){
return true;
}
return false;
}

public void push(int x) {
if(!isFull()){
arr[++top]=x;

}
}

public void pop() {
if(!isEmpty()){
top--;
}

}

public int peek() {
if(!isEmpty()){
return arr[top];

}
return -1;
}
}

The stack is implemented using an array, where top keeps track of the index of the last inserted element.

In push(x), first check if the stack is not full, then increment top and insert the element.

In pop(), check if the stack is not empty, then decrement top to remove the top element.

In peek(), return the element at index top if the stack is not empty.

isEmpty() and isFull() handle boundary conditions using the value of top.

3

Reply

Tina Florip6 months agoMar 18, 2026 13:13 (GMT +5:30)

class myStack {
int top;
int[] arr;
int size;

public myStack(int n) {
// Define Data Structures
top = - 1;
arr = new int[n];
size = n;
}

public boolean isEmpty() {
// check if the stack is empty
return top == - 1;
}

public boolean isFull() {
// check if the stack is full
if(top == size - 1){
return true;
}
else{
return false;
}
}

public void push(int x) {
// Inserts x at the top of the stack
if(isFull()){
return;
}
top++;
arr[top] = x;
}

public void pop() {
// Removes an element from the top of the stack
if(isEmpty()){
return;
}
top--;
}

public int peek() {
// Returns the top element of the stack
if(isEmpty()){
return - 1;
}
return arr[top];
}
}

0

Reply

24H51A05T5-JELLAKULA AKHIL B.Tech-CSE(2024-28)6 months agoMar 18, 2026 10:05 (GMT +5:30)

class myStack {
int top;
int[] arr;
int size;

public myStack(int n) {
top = - 1;
arr = new int[n];
size = n;

}

public boolean isEmpty() {
return top == - 1;
}

public boolean isFull() {
if(top == size - 1){
return true;
}
else{
return false;
}
}

public void push(int x) {
if(isFull()){
return;
}
top++;
arr[top] = x;
}

public void pop() {
if(isEmpty()){
return;
}
top--;
}

public int peek() {
if(isEmpty()){
return - 1;
}
return arr[top];
}
}

0

Reply

If you are facing any issue on this page. Please let us know.

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1120 / 1120
Attempts : Correct / Total1 / 2Accuracy : 50%

Points Scored 4 / 4Your Total Score:31

Time Taken0.91

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
25
26
27
28

class myStack:
def __init__(self, n):
self.stack = []
self.n = n

def isEmpty(self):
if self.stack == []:
return True
return False

def isFull(self):
if len(self.stack) == self.n:
return True
return False

def push(self, x):
if not self.isFull():
self.stack.append(x)

def pop(self):
if not self.isEmpty():
return self.stack.pop()
return -1

def peek(self):
if not self.isEmpty():
return self.stack[-1]
return -1

הההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההההה
XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX

Output Window

Compilation ResultsCustom InputY.O.G.I. (AI Bot)
Problem Solved Successfully
Suggest Feedback

Test Cases Passed1120 / 1120
Attempts : Correct / Total1 / 2Accuracy : 50%

Points Scored 4 / 4Your Total Score:31

Time Taken0.91

Custom Input

If you are facing any issue on this page. Please let us know.

## Problem Link

[Implement Stack using Array](https://www.geeksforgeeks.org/problems/implement-stack-using-array/1)
