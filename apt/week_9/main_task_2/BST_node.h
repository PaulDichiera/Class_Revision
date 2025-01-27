#ifndef BST_NODE_H
#define BST_NODE_H

#include <memory>

class BST_Node {
    public:
        BST_Node(int data);
        BST_Node(const BST_Node& other);
        ~BST_Node();

        int data;

        std::shared_ptr<BST_Node> left;
        std::shared_ptr<BST_Node> right;
};

#endif //BST_NODE_H