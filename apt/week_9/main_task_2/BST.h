#ifndef BST_H
#define BST_H

#include "BST_node.h"

#include <memory>

class BST {
    public:
        BST();
        ~BST();

        void clear();
        bool contains(const int data) const;
        void add(const int data);

    private:
        std::shared_ptr<BST_Node> root;
};

#endif // BST_H