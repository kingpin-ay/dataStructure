#ifndef CLINKLIST_H
#define CLINKLIST_H
#include "node.h"

class CLinkList {
    public:
        Node* head;
        Node* tail;
        int totalElements;

        CLinkList(int value);
        void traverse();
    
        void addNodeToLast(int value);
        void addNodeToFirst(int value);
        int addNodeToIndex(int index , int value);
        
        void deleteNodeFromLast();
        void deleteNodeFromFirst();
        void deleteNodeFromIndex(int index);
};

#endif
