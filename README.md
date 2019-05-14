# cpp-algorithm-club
## Copyright © 2019, Josh Choi X Nanogram, LLC
Data structures in C++.

### Notes on C++
C++ isn't everyone's favorite language so here are some notes on implementation:
- A ```.hpp``` file represents a class' definitions of variables, functions, constructors, initialization, etc.
- A ```.cpp``` file implements the class' declarations, functions, constructors, etc.  

## How To Execute in Terminal
All folders will include a _*main.cpp*_ file. This file should execute the program successfully.
1. Navigate to the specific folder with the specified main program.
2. In your terminal, execute main.cpp with the following:
```
sudo g++ main.cpp
./a.out
```
OR
```
sudo g++ -o NameOfExecutable main.cpp
./NameOfExecutable
```

Table of Contents:
- [Linked Lists](#Linked-Lists)
    - [What](#What)
    - [Why?](#Why?)
    - [Terms](#Terms)
    - [Notes on Linked Lists](#-Notes-on-Linked-Lists)
    
- [Sorting Algorithms](#Sorting-Algorithms)
    - [Selection Sort](#Selection-Sort)
    - [Bubble Sort](#Bubble-Sort)
    - [Insertion Sort](#Insertion-Sort)
    - [Merge Sort](#Merge-Sort)
    - [Radix Sort](#Radix-Sort)


## Linked Lists
### What?
Linked List = A linear collection of data elements (much like an array) whose order is *not* given by their physical placement in memory. Instead, each element, or _*Node*_, points to the next element, or _*Node*_. The collection of these elements represent a sequence.
### Why?
In a typical array declaration in C++ like the following:
```
int newArray[4] = { 6, 5, 4, 2 };
```
Re-sizing the array would require computational effort to: 
1. Allocate new bytes (for instance, an Int variable would require an allocation of 4 bytes of memory) in a memory's address contiguously.
2. Copy the previously allocated data in the addresses to the newly allocated memory addresses.
3. Delete the old copy.
A linked list implementation allows one to implement values in a Node without contiguously allocating memory.

### Terms
- Node: An element in a Linked List that stores a pointer value to the next, sequential element in the Linked List.
- Head: The first (or front) element in the Linked List. With this, you can access the entire Linked List.
- Tail: The last (or end) element in the Linked List. 

### Notes on Linked Lists
- How to Check if a Linked List is Empty via its _*Head*_
```
if (head == NULL) {
    cout << "The linked list is empty!\n";
}
```





## Sorting Algorithms
## Merge Sort
## Selection Sort
## Bubble Sort
## Insertion Sort
## Radix Sort





## Trees
- Root Node: The top of the binary tree (the node without any parent nodes)
- Leaf Nodes: The ends of the binary tree (the node without any other leaf nodes)
## Binary Trees
_*T*_ is a binary tree if either
- _*T*_ has no nodes
- _*T*_ is of the form of
```
    r (root)
    / \
  TL   TR
```
where r is a node and TL and TR are both binary trees.

## Height of Trees
- The level of a node n:
    - Iff _*n*_ is the root of T, it is at level 1
    - Iff _*n*_ is the root of T, its level is 1 greater than the level of its parent
- The _*Height*_ of a tree T is represented in terms of the levels of its nodes (empty T = 0; otherwise T's height = _maximum level of its nodes_)

