//
//  main.cpp
//  cpp-algorithm-club
//
//  Created by Joshua Choi on 5/13/19.
//  Copyright © 2019 Nanogram LLC. All rights reserved.
//

#include <iostream>
#include "Node/Node.hpp"
#include "LinkedList/LinkedList.hpp"
#include "Stack_Manager/Stack_Manager.hpp"
using namespace std;


// MARK: - Main
int main() {
    
    
    /**
     Linked Lists
     */
//    // MARK: - Node
//    Node* head = new Node(10);
//    head->next = new Node(11);
//    head->next->next = new Node(12);
//    head->next->next->next = new Node(13);
//    head->next->next->next->next = new Node(14);
//    head->next->next->next->next->next = new Node(15);
//    // MARK: - LinkedList
//    LinkedList linkedList = LinkedList();
//    linkedList.printLinkedList(head);
////    head = linkedList.insertNodeAtIndex(head, new Node(15), 5);
////    head = linkedList.removeNodeAtIndex(head, 1);
//    linkedList.printLinkedList(head);
    
    
    /**
     Stacks
     */
    // MARK: - Stack_Manager
    Stack_Manager stackManager = Stack_Manager();
    
    // Evaluate 5 + 4 * 2 / 3
    // 9
    // 18
    // 6
    int value = stackManager.evaluatePostfixExpression("54+");
    cout << "Result: " << value;
    
    return 0;
}
