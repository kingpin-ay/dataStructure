#include <iostream>
#include "node.h"
#include "queue.h"


Queue::Queue(int value) {
    Node* ptr = new Node(value);
    this -> head = ptr;
    this -> size = 1;
}


int Queue::enqueue(int value) {
    Node* newNode = new Node(value);
    newNode -> setNextNodeAddress(this -> head);
    this -> head = newNode;
    this -> size++;
    return value;
}

int Queue::dequeue(){
    if(this -> size <= 0){
        std::cout << "queue is already empty" << "\n";
        return 1900;
    }
    Node* iterator = this -> head;
    if(this -> size != 1){ 
        while(iterator -> getNextNodeAddress() -> getNextNodeAddress() != NULL){
            iterator = iterator -> getNextNodeAddress();
        }   

        int value = iterator -> getNextNodeAddress() -> getStoredData();
        iterator -> setNextNodeAddress(NULL);
        this -> size--;
        return value;
    }else{
        int value = iterator -> getStoredData();
        this -> head = NULL;
        this -> size--; 
        return value;
    }
}

void Queue::print(){
    Node* iterator = this -> head;
    while(iterator != NULL){
        std::cout << iterator -> getStoredData() << " ";
        iterator = iterator -> getNextNodeAddress();
    }
    std::cout << "\n";
}
