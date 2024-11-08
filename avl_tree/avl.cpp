#include "avl.hpp"

template<typename T>
avlTree<T>::avlTree(): m_root{nullptr} {}

template<typename T>
avlTree<T>::avlTree(avlNode<T>* root): m_root{root} {}

template <typename T>
avlNode<T>* avlTree<T>::getRoot() {return m_root;}

template <typename T>
bool avlTree<T>::insert(int data, avlNode<T>* root) //protected function
{
    //base case
    if (root == nullptr)
    {
        root = new avlNode<T>(data);
        return true;
    }
    if (data < root->m_data)
        return insert(data, root->m_left);
    else if (data > root->m_data)
        return insert(data, root->m_right);
    //case that data is already in avl tree
    return false;
}

template <typename T>
bool avlTree<T>::insert(int data) //public function
{
    if (!insert(data, m_root))
        return false;
    else
    {
        balance();
        return true;
    }    
}

template <typename T>
bool avlTree<T>::remove(int data, avlNode<T>* root)
{
    //base case
    if (root->m_data == data)
    {
        delete root;
        root = nullptr;
        return true;
    }
    if (data < root->m_data)
        remove(data, root->m_left);
    else if (data > root->m_data)
        remove(data, root->m_right);
    
    //case that root is nullptr means data isnt in tree
    return false;
}

template <typename T>
bool avlTree<T>::remove(int data)
{
    if (!remove(data, m_root))
        return false;
    else
    {
        balance();
        return true;
    }
}

template <typename T>
void avlTree<T>::balance()
{
    
}

