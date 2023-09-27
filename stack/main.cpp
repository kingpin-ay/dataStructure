#include <iostream>
#include "stack.h"


int main() {
    Stack newone = Stack(5); // 5
    newone.print(); 
    newone.push(81); // 81 5
    newone.push(67); // 67 81 5
    newone.print();
    newone.pop();  // 81 5
    newone.pop();  // 5
    newone.print();
    newone.pop();  // nothing in stack
    newone.pop();  // stack underflow
    newone.push(77); // 77
    newone.push(88); // 88 77
    newone.push(99); // 99 88 77
    newone.push(100);  // 100 99 88 77
    newone.push(24);   // 24 100 99 88 77
    newone.push(87); // 87 24 100 99 88 77
    newone.print();
    return 0;
}
