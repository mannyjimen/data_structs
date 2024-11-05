//self-balancing tree
#ifndef AVL_
#define AVL_

#include <iostream>
#include <string>

struct avlNode
{
    int m_data;
    avlNode* m_left;
    avlNode* m_right;
    int height;

    avlNode() { m_data = 0; m_left = m_right = nullptr; height = 0;}
    avlNode(int data) { m_data = data; m_left = m_right = nullptr; height = 0;}
    void setLeft(avlNode* x) {m_left = x;}
    void setRight(avlNode* x) {m_right = x;}
    int getData() {return m_data;}

    avlNode* getLeft() {return m_left;}
    avlNode* getRight() {return m_right;}
    int getHeight() {return height;}
    void setHeight(){
        height = m_left->getHeight() - m_right->getHeight();
    }

    ~avlNode()
    {
        delete m_left;
        m_left = nullptr;
        delete m_right;
        m_right = nullptr;
    }
};

class avlTree
{
    private:
        avlNode* m_root;

    public:
        //constructors
        avlTree();
        avlTree(avlNode* root);

        //getters
        avlNode* getRoot();

        //mutators
        bool insert(int data);

        bool remove(int data);

        void setRoot();
        
        bool find(int data);
        
        void balance();
  
        //print
        void printAVL();
    protected:
        bool insert(int data, avlNode* root);
        bool remove(int data, avlNode* root);
        void balance(avlNode* root);

};

#endif