#include <iostream>
#include "clinklist.h"
#include "node.h"

CLinkList::CLinkList(int value){
    Node* newNode = new Node(value);
    newNode -> setNextNodeAddress(newNode);
    this->head = newNode;
    this->tail = newNode;
}

void CLinkList::traverse(){
    Node* iterator = this -> head;
    while(true){
        std::cout<< iterator -> getStoredData() << "\t";
        if(iterator -> getNextNodeAddress() == this -> head) break;
        iterator = iterator -> getNextNodeAddress();
    }
    std::cout << "\n";
}
