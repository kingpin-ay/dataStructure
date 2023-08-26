#include <iostream>
#include "clinklist.h"

int main(){
    std::cout << "the original list" << "\n";
    CLinkList trialList = CLinkList(77);
    trialList.addNodeToFirst(66);
    trialList.addNodeToLast(88);
    trialList.addNodeToLast(99);
    trialList.addNodeToIndex(1, 5);
    trialList.addNodeToIndex(3, 78);
    trialList.traverse();

    std::cout << "delete from last" << "\n";
    trialList.deleteNodeFromLast();
    trialList.traverse();
    std::cout << "delete from first" << "\n";
    trialList.deleteNodeFromFirst();
    trialList.traverse();
    std::cout << "delete from second index" << "\n";
    trialList.deleteNodeFromIndex(2);
    trialList.traverse();
    return 0;
}
