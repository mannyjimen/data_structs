#include "avl.hpp"

int main()
{
    // avlNode<int> first(5);
    // avlNode<int>* psecond = new avlNode<int>(8);
    // avlNode<int>* pthird = new avlNode<int>(3);
    // avlNode<int> third(7, pthird, psecond, 1);
    
    // std::cout << third.m_left->height;
    avlNode<int> once(5);
    avlNode<int> twice(std::move(once));
    std::cout << once.m_data << " " << twice.m_data << "\n";
}
