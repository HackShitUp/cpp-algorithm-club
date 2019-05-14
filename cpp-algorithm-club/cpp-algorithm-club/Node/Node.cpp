//
//  Node.cpp
//  cpp-algorithm-club
//
//  Created by Joshua Choi on 5/13/19.
//  Copyright © 2019 Nanogram LLC. All rights reserved.
//

#include "Node.hpp"

/// MARK: - Init
/// @param value An Int value representing the integer to store for this node object.
Node::Node(int value) {
    // Set the data
    this->data = value;
    // Set the next Node to null
    next = nullptr;
};
