// #include "avl.hpp"

// avlTree::avlTree(): m_root{nullptr} {}
// avlTree::avlTree(avlNode* root): m_root{root} {}

// avlNode* avlTree::getRoot() {return m_root;}

// bool avlTree::insert(int data, avlNode* root) //protected function
// {
//     //base case
//     if (root == nullptr)
//     {
//         root = new avlNode(data);
//         return true;
//     }
//     if (data < root->m_data)
//         return insert(data, root->m_left);
//     else if (data > root->m_data)
//         return insert(data, root->m_right);
//     //case that data is already in avl tree
//     return false;
// }

// bool avlTree::insert(int data) //public function
// {
//     if (!insert(data, m_root))
//         return false;
//     else
//     {
//         balance();
//         return true;
//     }    
// }

// bool avlTree::remove(int data, avlNode* root)
// {
//     //base case
//     if (root->m_data == data)
//     {
//         delete root;
//         root = nullptr;
//         return true;
//     }
//     if (data < root->m_data)
//         remove(data, root->m_left);
//     else if (data > root->m_data)
//         remove(data, root->m_right);
    
//     //case that root is nullptr means data isnt in tree
//     return false;
// }

// bool avlTree::remove(int data)
// {
//     if (!remove(data, m_root))
//         return false;
//     else
//     {
//         balance();
//         return true;
//     }
// }

// void avlTree::balance()
// {
    
// }

