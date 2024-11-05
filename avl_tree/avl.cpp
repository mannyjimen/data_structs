#include "avl.hpp"

avlTree::avlTree(): m_root{nullptr} {}
avlTree::avlTree(avlNode* root): m_root{root} {}

avlNode* avlTree::getRoot() {return m_root;}

bool avlTree::insert(int data, avlNode* root) //protected function
{
    //base case
    if (root == nullptr)
    {
        root = new avlNode(data);
        return true;
    }
    if (data < root->getData())
        return insert(data, root->getLeft());
    else if (data > root->getData())
        return insert(data, root->getRight());
    //case that data is already in avl tree
    return false;
}

bool avlTree::insert(int data) //public function
{
    if (!insert(data, m_root))
        return false;
    else
    {
        balance();
        return true;
    }    
}

bool avlTree::remove(int data, avlNode* root)
{
    //base case
    if (root->getData() == data)
    {
        delete root;
        root = nullptr;
        return true;
    }
    if (data < root->getData())
        remove(data, root->getLeft());
    else if (data > root->getData())
        remove(data, root->getRight());
    
    //case that root is nullptr means data isnt in tree
    return false;
}

bool avlTree::remove(int data)
{
    if (!remove(data, m_root))
        return false;
    else
    {
        balance();
        return true;
    }
}

void avlTree::balance()
{
    
}

