#include "avl.hpp"

int main()
{
    avlNode* first = new avlNode(5);
    avlNode* second = new avlNode(3);
    avlNode* third = new avlNode(7);

    first->setLeft(second);
    first->setRight(third);

    std::cout << first->getData() << "\n" << first->getLeft()->getData() << " " << first->getRight()->getData();
    std::cout << std::endl;  

}