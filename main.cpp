//
//  main.cpp
//  SD-LIST-DELETE(L,k)
//
//  Created by Sumitha on 6/9/17.
//  Copyright © 2017 Sumitha. All rights reserved.
//

#include <iostream>
#include "SD-LIST-DELETE(L,k).hpp"

int main() {
    
    head = insertAtFirst(head,1);
    head = insertAtFirst(head,2);
    head = insertAtFirst(head,3);
    head = insertAtFirst(head,4);
    cout << "Sorted Doubly Linked List : ";
    displayList();
    cout << "SD-LIST-DELETE(head,2) : ";
    head = sortedListDelete(head,2);
    displayList();

    return 0;
}
