//
//  Stack_Manager.cpp
//  cpp-algorithm-club
//
//  Created by Joshua Choi on 5/13/19.
//  Copyright © 2019 Nanogram LLC. All rights reserved.
//

#include "Stack_Manager.hpp"



/// Converts an infix expression to a postfix expression.
/// @param
string Stack_Manager::convertInfixToPostfix(string expression) {
    /// Initialized String value representing the postfix expression
    string postfixExpression = "";
    
    // Loop through the expression
    for (int i = 0; i < expression.length(); i++) {
        // Ignore whitespaces and delimitters
        if (expression[i] == ' ' || expression[i] == ',') {
            
        } else if (isValidNumber(expression[i]) == true) {
            // Numeric value
            // Append the value to the stack
            
            
        } else if (isValidOperand(expression[i]) == true) {
            // Operand
            
        }
    }
    
    // 54+2*3/
    
    // Return the postfixExpression
    return postfixExpression;
}

/// Evaluates whether a postfix expression.
/// @param expression A Character value representing the infix expression.
int Stack_Manager::evaluatePostfixExpression(string expression) {
    /**
     1. Loop through character in string
     2. If character is operand, push the value of the operand onto the stack
     3. Otherwise, evaluate the result by popping the last 2 elements in the stack and calculating their expression
     */
    
    // MARK: - Stack
    stack<int> values;
    
    // Loop through the expression
    for (int i = 0; i < expression.length(); i++) {
        // Ignore whitespaces and delimitters
        if (expression[i] == ' ' || expression[i] == ',') {
            continue;
        } else if (isValidNumber(expression[i]) == true) {
        // Numeric value
            // Append the value to the stack
            values.push(expression[i]);
        } else if (isValidOperand(expression[i]) == true) {
            // Operand
            // Get the rhs int value
            int rhs = values.top();
            values.pop();
            // Get the lhs int value
            int lhs = values.top();
            values.pop();
            // Calculate the value and append it to the stack
            switch (expression[i]) {
            case '+':
                // Append the value to the stack
                values.push(lhs + rhs);
                break;
            case '-':
                // Append the value to the stack
                values.push(lhs - rhs);
                break;
            case '*':
                // Append the value to the stack
                values.push(lhs * rhs);
                break;
            case '/':
                // Append the value to the stack
                values.push(lhs / rhs);
                break;
            }
        }
    }
    
    cout << "Result: " << values.top() << endl;
    
    // Return the top of the stack
    return values.top();
}

/// Determines if a character value is a valid integer.
/// @param value A Character value representing the potential number.
bool Stack_Manager::isValidNumber(char value) {
    return (value >= '0' && value <= '9') ? true : false;
}

/// Determines if a character value is a valid operand.
/// @param operand A Character value representing the potential operator.
bool Stack_Manager::isValidOperand(char operand) {
    return (operand == '+' || operand == '-' || operand == '*' || operand == '/') ? true : false;
}
