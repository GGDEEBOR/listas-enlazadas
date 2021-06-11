#ifndef __LINKEDLIST__H__
#define __LINKEDLIST__H__
#include <iostream>
#include "Node.h"
class LinkedList{
    private: // variables miembro
        int size;
        Node* head;
    public:

        // constructores
        LinkedList(int, Node*);
        LinkedList();

        // destructor
        ~LinkedList();

        // get
        int getSize()const;
        Node* getHead()const;


        // set
        void setSize(int);
        void setHead(Node*);


		void insert(int elemento);
        void remove(int elemento);
        //void print();


        // sobrecarga del operador de salida
        friend std::ostream& operator<< (std::ostream& ouput, const LinkedList &o){	
    		Node* current = o.head;
			while(current){
                ouput << current->getElem() <<" ";
 				current = current->getNext();
		    }
      		std::cout << std::endl;
	}

};

#endif
