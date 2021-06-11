#ifndef __NODE__H__
#define __NODE__H__
#include <iostream>
class Node{
    private: // Variables Miembro
        int elem;
        Node* next;
    public:
        // Constructores
        Node(int, Node*);
        Node();

        // Get
        int getElem()const;
        Node* getNext()const;

        
        // Set
        void setElem(int);
        void setNext(Node*);

};

#endif
