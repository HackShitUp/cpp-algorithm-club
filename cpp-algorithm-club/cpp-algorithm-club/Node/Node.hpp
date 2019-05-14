//
//  Node.hpp
//  cpp-algorithm-club
//
//  Created by Joshua Choi on 5/13/19.
//  Copyright © 2019 Nanogram LLC. All rights reserved.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
#include <cmath>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <queue>
#include <vector>
using namespace std;

/**
 Custom class representing a given Node object. May be used for Linked Lists and Tree implementations
 */
class Node {
public:
    // MARK: - Class Vars
    
    /**
     The following variables may be utilized for Linked List implementations
     */
    /// Initialized Int value representing the integer value this Node object stores
    int data;
    /// Initialized Node pointer repreenting the next Node value in a given linked list
    Node* next;
    
    /**
     The following pointers may be utilized for Tree implementations
     */
    Node* left;
    Node* right;
    
    /// MARK: - Init
    Node(int value);
};

#endif /* Node_hpp */
