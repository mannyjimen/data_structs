#include "avl.hpp"

int main()
{
    avlNode* first = new avlNode(5);
    avlNode* second = new avlNode(4);
    avlNode* third = new avlNode(7);

    avlTree erd(first);
    erd.insert(6);

    std::cout << erd.getRoot()->getRight()->getData();

}