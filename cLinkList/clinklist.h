#ifndef CLINKLIST_H
#define CLINKLIST_H
#include "node.h"

class CLinkList {
    public:
        Node* head;
        Node* tail;
    
        CLinkList(int value);
        void traverse();
};

#endif
