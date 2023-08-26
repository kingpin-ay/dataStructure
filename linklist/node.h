#ifndef NODE_H
#define NODE_H

class Node {
    private:
        int storedData;
        Node* nextNodeAddress;

    public:
        Node(int value);
        int getStoredData();
        void setStoredData(int value);
        Node* getNextNodeAddress();
        void setNextNodeAddress(Node* nextItemAddress);
};

#endif

