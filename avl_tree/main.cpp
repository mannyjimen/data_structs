#include "avl.hpp"

int main()
{
    avlNode<int>* doug = new avlNode<int>(5);
    avlNode<int>* cher = new avlNode<int>(7);
    avlNode<int>* trav = new avlNode<int>(2);
    avlNode<int>* kite = new avlNode<int>(1);
    avlNode<int>* marj = new avlNode<int>(8);

    doug->m_right = cher;  
    trav->m_left = kite;
    cher->m_right = trav;
    kite->m_left = marj;
    
    doug->updateHeight();
    std::cout << doug->height << "\n";

    //          doug
    //      null     cher
    //                   trav
    //                 kite
    //              marj

    // avlNode<std::string> once("Hello");
    // avlNode<std::string> twice = (std::move(once));
    // std::cout << "Once Data: " << once.m_data << "\n" << "Twice Data: " << twice.m_data << "\n";
}
