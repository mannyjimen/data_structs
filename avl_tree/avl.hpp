//self-balancing tree
#ifndef AVL_
#define AVL_

#include <iostream>
#include <string>

template <typename T>
struct avlNode
{
    T m_data;
    avlNode<T>* m_left;
    avlNode<T>* m_right;
    int height;

    avlNode<T>() {m_left = m_right = nullptr; height = 0;}
    avlNode<T>(T data) { m_data = data; m_left = m_right = nullptr; height = 0;}
    
    //copy constructor
    avlNode(const avlNode<T>& rhs) {
        m_data = rhs.m_data;
        m_left = rhs.m_left;
        m_right = rhs.m_right;
        height = rhs.height;
    }
    //move constructor
    avlNode(avlNode<T> && rhs) {
        m_data = rhs.m_data;
        m_left = rhs.m_left;
        rhs.m_left = nullptr;
        m_right = rhs.m_right;
        rhs.m_right = nullptr;
    } 
    
    void height_check() { }
    
    ~avlNode()
    {
        delete m_left;
        delete m_right;
    }
};

// template <typename T>
// class avlTree
// {
//     private:
//         avlNode<T>* m_root;

//     public:
//         //constructors
//         avlTree();
//         avlTree(avlNode* root);

//         //getters
//         avlNode* getRoot();

//         //mutators
//         bool insert(int data);

//         bool remove(int data);

//         void setRoot();
        
//         bool find(int data);


//         void balance();
  
//         //print
//         void printAVL();
//     protected:
//         bool insert(int data, avlNode* root);
//         bool remove(int data, avlNode* root);
//         void balance(avlNode* root);

//};

#endif