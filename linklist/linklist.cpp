#include <cstddef>
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


void LinkList::addElementToFirst(int value){
    Node* newNode = new Node(value);
    newNode -> setNextNodeAddress(this->head);
    this->head = newNode;
    this->totalElements++;
}

void LinkList::addElementToIndex(int index , int value){
    if(index <= 0) this ->addElementToFirst(value);
    else if(index >= this->totalElements - 1) this -> addElementToLast(value);
    else{
        Node* iterator = this->head;
        for(int i = 0; i < index ; i++){
            iterator = iterator -> getNextNodeAddress();
        }
        Node* newNode = new Node(value);
        newNode -> setNextNodeAddress(iterator->getNextNodeAddress());
        iterator -> setNextNodeAddress(newNode);
        this -> totalElements++;
    }
}


void LinkList::travaseLinkList() {
    Node* iterator = this -> head;
    for(int i = 0 ; i<this-> totalElements ; i++){
        std::cout << iterator ->getStoredData() << "\t";
        iterator = iterator -> getNextNodeAddress();
    }   
    std::cout << "\n";
}


void LinkList::deleteElementFromLast(){

    Node* iterator = this -> head;
    for(int i = 0 ; i< this-> totalElements - 2 ; i++){
        iterator = iterator -> getNextNodeAddress();
    }
    iterator -> setNextNodeAddress(NULL);
    this -> tail = iterator;
    this -> totalElements--;
}


void LinkList::deleteElementFromFirst(){
    Node* tempPointerToHead = this -> head;
    head = head -> getNextNodeAddress();
    tempPointerToHead -> setNextNodeAddress(NULL);
    tempPointerToHead -> setStoredData(0);
    this -> totalElements--;
}


void LinkList::deleteElementFromIndex(int index){ 
    if(this -> totalElements <= 0) std::cout << "No Node exists"<<"\n"; 
    else{
        if(index >= this -> totalElements -1) this -> deleteElementFromLast();
        else if (index <= 0 ) this -> deleteElementFromFirst();
        else {
            Node* iterator = this -> head;
            for(int i = 0 ; i< index-1 ; i++){
                iterator = iterator -> getNextNodeAddress();
            }
            Node* nextNodePoint = iterator -> getNextNodeAddress() -> getNextNodeAddress();
            iterator -> setNextNodeAddress(nextNodePoint);
            this -> totalElements--;
        }
    }
}













