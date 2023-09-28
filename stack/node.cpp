#include<iostream>
#include"node.h"

Node::Node(int value){
    this -> storedData = value;
    this -> nextNodeAddress = NULL;
}

int Node::getStoredData(){
    return this -> storedData;
}

void Node::setStoredData(int value){
    this -> storedData = value;
}

Node* Node::getNextNodeAddress(){
    return Node::nextNodeAddress;
}


void Node::setNextNodeAddress(Node* nextItemAddress){
    Node::nextNodeAddress = nextItemAddress;
}



