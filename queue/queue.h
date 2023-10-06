#include "node.h"
#ifndef QUEUE_H
#define QUEUE_H

class Queue {
        
    public:
        Node* head;
        int size;
        Queue(int value); 
        int enqueue(int value);
        int dequeue();
        void print();
};


#endif
