#include "node.h"
#ifndef LINKLIST_H
#define LINKLIST_H
class LinkList {
    public:
        int totalElements;
        Node* head;
        Node* tail; 
        
        LinkList(int value);
        void addElementToLast(int value);
        void travaseLinkList();
        void addElementToFirst(int value);
        void addElementToIndex(int index , int value);
        void deleteElementFromLast();
        void deleteElementFromFirst();
        void deleteElementFromIndex(int index);
};
#endif
