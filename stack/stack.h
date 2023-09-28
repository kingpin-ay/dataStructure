#include "node.h"
#ifndef STACK_H
#define STACK_H


class Stack {
    private:
        Node* top;
        int size;

    public: 
        Stack(int value);
        int push(int value);
        int pop();
        int peak();
        void print();
};

#endif
