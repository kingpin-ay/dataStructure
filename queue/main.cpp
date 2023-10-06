#include <iostream>
#include "queue.h"

int main () {
    Queue a = Queue(5);
    a.enqueue(43);
    a.print();
    a.dequeue();
    a.print();
    a.dequeue();
    a.dequeue();
    a.enqueue(77);
    a.print();
    return 0;
}
