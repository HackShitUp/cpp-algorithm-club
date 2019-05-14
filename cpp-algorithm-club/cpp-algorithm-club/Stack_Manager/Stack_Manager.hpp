//
//  Stack_Manager.hpp
//  cpp-algorithm-club
//
//  Created by Joshua Choi on 5/13/19.
//  Copyright © 2019 Nanogram LLC. All rights reserved.
//

#ifndef Stack_Manager_hpp
#define Stack_Manager_hpp

#include <stdio.h>
#include <iostream>
#include <stack>
#include <stdexcept>
#include <string>
#include <limits>
using namespace std;

/**
 Abstract: Custom class used to evaluate a postfix expression
 */
class Stack_Manager {
public:
    /// Initialized Stack object used to store all of the values
    stack<int> values;
    /// Initialized Stack object used to store all of the operators in a postfix expression
    stack<char> operators;
    
    // MARK: - Class Methods
    string convertInfixToPostfix(string expression);
    int evaluatePostfixExpression(string expression);
    bool isValidNumber(char value);
    bool isValidOperand(char operand);
};

#endif /* Stack_Manager_hpp */
