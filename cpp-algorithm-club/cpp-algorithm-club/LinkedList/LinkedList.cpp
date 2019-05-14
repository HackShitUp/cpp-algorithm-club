//
//  LinkedList.cpp
//  cpp-algorithm-club
//
//  Created by Joshua Choi on 5/13/19.
//  Copyright © 2019 Nanogram LLC. All rights reserved.
//

#include "LinkedList.hpp"

/// MARK - Init
/// @param head A Node pointer object representing the head of the linked list.
LinkedList::LinkedList() {
    cout << "Initialized LinkedList.";
}

/// Print the data values in a given Linked List.
/// @param head The head of the Linked List.
void LinkedList::printLinkedList(Node* head) {
    cout << "\nValues in linked list: ";
    /**
     Logic: Loop through the linked list until we've reached its end. We do this by updating the current Node value with its NEXT Node pointer.
     1. Loop through the linked list
     2. Log its data value
     3. Update the current Node (head) with its next Node pointer value
     */
    // Loop through the linked list until we've reached its end
    while (head != NULL) {
        // Log the data value
        cout << head->data;
        
        // Log the arrow unless it's NOT the last value
        (head->next == NULL) ? cout << "" : cout << "->";
        
        // MARK: - Node
        // Update the node with the next Node
        head = head->next;
    }
    cout << "\n\n";
}

/// Insert a Node to the linked list at its specified index.
/// @param head The head of the linked list.
/// @param newNode The new Node to insert to the linked list.
/// @param index An Int value representing the index to add the Node in the linked list.
Node* LinkedList::insertNodeAtIndex(Node* head, Node* newNode, int index) {
    /**
     Logic:
     1. If the index is 0...
        - (A) Update the new Node's next Node with the head and
        - (B) Return the new Node.
     2. Otherwise, loop through the linked list until it has reached the specified index and...
        - (A) Update the new Node's next Node with the previous Node's next Node.
        - (B) Update the previous Node's next Node to the new Node.
        - (C) Set the current Node as the new Node
     */
    
    // Determine if the index is 0
    if (index == 0) {
        // Update the next Node with the head
        newNode->next = head;
        // Return the new Node
        return newNode;
    } else {
        // Otherwise, loop through the linked list until we've reached its index
        
        // MARK: - Node
        Node* currentNode = head;
        Node* previousNode = NULL;
        
        /// Initialized Int value used to keep track of the Node's index in the linked list.
        int i = 0;
        
        // Loop through the linked list until we've reached its end
        while (currentNode != NULL) {
            // If the current counter is equal to the specified index...
            if (i == index) {
                // - (A) Update the new Node's next Node with the previous Node's next Node.
                // - (B) Update the previous Node's next Node to the new Node.
                // - (C) Set the current Node as the new Node
                newNode->next = previousNode->next;
                previousNode->next = newNode;
                currentNode = newNode;
            }
            
            // Update the previous Node's next Node with the current Node
            previousNode = currentNode;
            // Update the current Node as its next Node
            currentNode = currentNode->next;
            
            // Increment the counter
            i++;
        }
        
        return head;
    }
}


/// Remove a Node from the linked list at its specified index.
/// @param head The head of the linked list.
/// @param index An Int value representing the index to add the Node in the linked list.
Node* LinkedList::removeNodeAtIndex(Node* head, int index) {
    
    /**
     1. If the index is 0
        - (A) If the head's next Node is NULL, return the head and do nothing
        - (B) Otherwise, if not NULL, Store the head's next Node and delete the head and return the next Node
     2. Otherwise, loop through the linked list until we've reached the specified index
        - (A) Update the previous Node's next Node with the current Node's next Node
        - (B) Delete the current Node
     */
    
    // If the index is 0...
    if (index == 0) {
        // And the next Node is NOT NULL, delete it
        if (head->next != NULL) {
            // MARK: - Node
            Node* nextNode = head->next;
            delete head;
            // Return the next Node
            return nextNode;
        } else {
            // Otherwise, return the head
            return head;
        }
        
    } else {
        // Otherwise, loop through the linked list until we've reached its index
        
        // MARK: - Node
        Node* currentNode = head;
        Node* previousNode = NULL;
        
        /// Initialized Int value used to keep track of the Node's index in the linked list.
        int i = 0;
        
        // Loop through the linked list until we've reached its end
        while (currentNode != NULL) {
            // If the current counter is equal to the specified index...
            if (i == index) {
                // - (A) Update the previous Node's next Node with the current Node's next Node
                previousNode->next = currentNode->next;
                // - (B) Delete the current Node
                delete currentNode;
            }
            
            // Update the previous Node's next Node with the current Node
            previousNode = currentNode;
            // Update the current Node as its next Node
            currentNode = currentNode->next;
            
            // Increment the counter
            i++;
        }
        
        return head;
    }
}
