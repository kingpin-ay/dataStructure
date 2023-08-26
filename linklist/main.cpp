#include <iostream>
#include "linklist.h"

int main(){
    LinkList trial = LinkList(6);
    trial.addElementToLast(7);
    trial.addElementToLast(5);
    trial.addElementToLast(8);
    trial.travaseLinkList();
    trial.addElementToFirst(45);
    trial.addElementToIndex(2, 82);
    trial.travaseLinkList();
    trial.addElementToIndex(99, 99);
    trial.addElementToIndex(-78, -78);
    trial.travaseLinkList();
    trial.deleteElementFromLast();
    trial.travaseLinkList();
    trial.deleteElementFromFirst();
    trial.travaseLinkList();
    trial.addElementToLast(7);
    trial.addElementToLast(5);
    trial.addElementToLast(8);
    trial.deleteElementFromIndex(1);
    trial.travaseLinkList();
    return 0;
}
