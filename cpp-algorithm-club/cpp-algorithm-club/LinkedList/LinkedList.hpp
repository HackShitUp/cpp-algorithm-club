//
//  LinkedList.hpp
//  cpp-algorithm-club
//
//  Created by Joshua Choi on 5/13/19.
//  Copyright © 2019 Nanogram LLC. All rights reserved.
//

#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>
#include <cmath>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <queue>
#include <vector>
#include "../Node/Node.hpp"
using namespace std;


/**
 Abstract: Custom class used to manage a Node object for LinkedList implementations
 */
class LinkedList {
public:
    // MARK: - Class Vars
    
    // MARK: - Node
    Node* head;
    
    // MARK: - Class Methods
    void printLinkedList(Node* head);
    Node* insertNodeAtIndex(Node* head, Node* newNode, int position);
    Node* removeNodeAtIndex(Node* head, int index);
    
    Node* insertNodeAtHead(Node* head, int data);
    
    /// MARK: - Init
    LinkedList(Node* head);
};


#endif /* LinkedList_hpp */
