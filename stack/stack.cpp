#include <iostream>
#include "stack.h"
#include "node.h"

Stack::Stack(int value) {
    Node * start = new Node(value);
    this -> top = start;
    this -> size = 1;
}

int Stack::push(int value){
    Node * tempNode = new Node(value);
    tempNode -> setNextNodeAddress(this -> top);
    this -> top = tempNode;
    this -> size++;
    return value;
}


int Stack::pop(){
    if(this-> size <= 0){
        std::cout << "Stack has no element" << std::endl;
        return -1;
    }
    Node * ptr = this -> top;
    this -> top = this -> top -> getNextNodeAddress();
    ptr -> setNextNodeAddress(NULL);
    this -> size--;
    return ptr -> getStoredData();
}

int Stack::peak() {
    return this -> top -> getStoredData();
}

void Stack::print() {
    Node * iterator = this -> top;
    while(iterator != NULL){
        std::cout << iterator -> getStoredData() << " ";
        iterator = iterator -> getNextNodeAddress();
    }
    std::cout << std::endl;
}

