#ifndef NODE_H
#define NODE_H

class Node {
    public:
        Node(int data, Node* next = nullptr);
        Node(Node& other);

        int data;
        Node* next;
};

#endif //NODE_H