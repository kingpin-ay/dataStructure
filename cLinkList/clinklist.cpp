#include <cstddef>
#include <iostream>
#include "clinklist.h"
#include "node.h"

CLinkList::CLinkList(int value){
    Node* newNode = new Node(value);
    newNode -> setNextNodeAddress(newNode);
    this->head = newNode;
    this->tail = newNode;
    this -> totalElements = 1;
}

void CLinkList::traverse(){
    Node* iterator = this -> head;
    std::cout<< "---Printing Linklist---" << "\n";
    while(true){
        std::cout<< "[ " << iterator -> getStoredData() << " , " << iterator -> getNextNodeAddress() <<  " ]" << "\n";
        if(iterator -> getNextNodeAddress() == this -> head) break;
        iterator = iterator -> getNextNodeAddress();
    }
    std::cout << "\n";
}

void CLinkList::addNodeToLast(int value){
    Node* newNode = new Node(value);
    newNode -> setNextNodeAddress( this->head );
    this -> tail -> setNextNodeAddress(newNode);
    this -> tail = newNode;
    this -> totalElements++;
}

void CLinkList::addNodeToFirst(int value){
    Node* newNode = new Node(value);
    newNode -> setNextNodeAddress(this -> head);
    this -> head = newNode ;
    this -> tail -> setNextNodeAddress(this -> head);
    this -> totalElements++;
}

int CLinkList::addNodeToIndex(int index , int value){
    if (index >= this->totalElements){
        this -> addNodeToLast(value);
        return 1; 
    }

    if( index <= 0 ){
        this -> addNodeToFirst(value);
        return 1;
    }

    Node* newNode = new Node(value);
    Node* iterator = this -> head;

    for(int i = 0; i < index - 1 ; i++) iterator = iterator -> getNextNodeAddress();
    newNode -> setNextNodeAddress(iterator -> getNextNodeAddress());
    iterator -> setNextNodeAddress(newNode);
    this -> totalElements++;
    return 1;
}


void CLinkList::deleteNodeFromLast(){
    Node* iterator = this -> head;
    while(iterator -> getNextNodeAddress() != this -> tail) {
        iterator = iterator ->getNextNodeAddress();
    }
    this -> tail = iterator;
    this -> tail -> setNextNodeAddress(this -> head);
    this -> totalElements--;
}

void CLinkList::deleteNodeFromFirst(){
    this -> head = this -> head -> getNextNodeAddress();
    this -> tail -> setNextNodeAddress(this -> head);
    this -> totalElements--;
}

void CLinkList::deleteNodeFromIndex(int index ){
    Node* iterator = this -> head;
    for(int i = 0; i < index - 1 ; i++) iterator = iterator -> getNextNodeAddress();
    Node* tempNodeStorage = iterator -> getNextNodeAddress();
    iterator -> setNextNodeAddress(tempNodeStorage -> getNextNodeAddress());
    tempNodeStorage -> setNextNodeAddress(NULL);
    this -> totalElements--;
}







