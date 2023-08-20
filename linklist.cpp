#include<iostream>
#include "linklist.h"
#include "node.h"

LinkList::LinkList(int value) {
    Node* originNode = new Node(value);
    this -> head = originNode;
    this -> tail = originNode;
    this -> totalElements = 0;
    this -> totalElements++;
}

void LinkList::addElementToLast(int value){
    Node* newNode = new Node(value);
    this -> tail -> setNextNodeAddress(newNode);
    this -> tail = newNode;
    this -> totalElements++;
}

void LinkList::travaseLinkList() {
    Node* iterator = this -> head;
    for(int i = 0 ; i<this-> totalElements ; i++){
        std::cout << iterator ->getStoredData() << "\t";
        iterator = iterator -> getNextNodeAddress();
    }    
}


