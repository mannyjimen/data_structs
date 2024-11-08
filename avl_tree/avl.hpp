//self-balancing tree
#ifndef AVL_
#define AVL_

#include <iostream>
#include <string>

template <typename T>
struct avlNode
{
    T m_data;
    avlNode<T>* m_left = nullptr;
    avlNode<T>* m_right = nullptr;
    int height = 0;

    avlNode<T>(const T& data): m_data{data} {}
    avlNode<T>(const T& data, avlNode<T>* left, avlNode<T>* right, int h = 0) 
    : m_data{data}, m_left{left}, m_right{right}, height{h} {}
    
    //copy constructor
    avlNode<T>(const avlNode<T>& rhs) {
        m_data = rhs.m_data;
        if (rhs.m_left)
            m_left = new avlNode<T>(rhs.m_left); //hard copy
        if (rhs.m_right)
            m_right = new avlNode<T>(rhs.m_right); //hard copy
        m_right = rhs.m_right;
        height = rhs.height;
    }
    //move constructor
    avlNode<T>(avlNode<T> && rhs) {
        m_data = std::move(rhs.m_data);
        m_left = rhs.m_left;
        rhs.m_left = nullptr;
        m_right = rhs.m_right;
        rhs.m_right = nullptr;
    } 

    //copy assignment
    avlNode<T>& operator=(const avlNode<T>& rhs) 
    {
        if (this != &rhs)
        {
            m_data = rhs.m_data;

            if (m_left != nullptr)
                delete m_left;
            if (m_right != nullptr)
                delete m_right;

            if (rhs.m_left) //hard copy left node
                m_left = new avlNode<T>(rhs.m_left);
            if (rhs.m_right) //hard copy right node
                m_right = new avlNode<T>(rhs.m_right);
        }
        return *this;
        
    }
    //move assignment
    avlNode<T>& operator=(avlNode<T>&& rhs)
    {
        if (this != &rhs)
        {
            m_data = std::move(rhs.m_data); 
            m_left = rhs.m_left; //shallow copy 
            m_right = rhs.m_right; //shallow copy
            height = rhs.height;
        }
        return *this;
    }
    
    ~avlNode()
    {
        delete m_left;
        delete m_right;
    }
};

template <typename T>
class avlTree
{
    private:
        avlNode<T>* m_root;

    public:
        //constructors
        avlTree<T>();
        avlTree<T>(avlNode<T>* root);

        //getters
        avlNode<T>* getRoot();
        bool find(int data);
        //mutators
        bool insert(int data);
        bool remove(int data);

        void setRoot();

        //balancing tree
        void balance();
        //print
        void printAVL();
    protected:
        bool insert(int data, avlNode<T>* root);
        bool remove(int data, avlNode<T>* root);
        void balance(avlNode<T>* root);

};

#endif