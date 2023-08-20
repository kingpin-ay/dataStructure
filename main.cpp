#include <iostream>
#include "linklist.h"

int main(){
    LinkList trial = LinkList(6);
    trial.addElementToLast(7);
    trial.addElementToLast(5);
    trial.addElementToLast(8);
    trial.travaseLinkList();
    return 0;
}
