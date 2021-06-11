#include <iostream>
#include "LinkedList.h"
using namespace std;

// constructores
LinkedList::LinkedList(int _size, Node *_head){
    size = _size;
    head = _head;
}

LinkedList::LinkedList(){
    this -> size = 0;
    this -> head = NULL;
}

// destructor
LinkedList::~LinkedList(){}

// get
int LinkedList::getSize()const{
    return size;
}
Node *LinkedList::getHead()const{
    return head;
}

// set
void LinkedList::setSize(int _size){
    size = _size;
}
void LinkedList::setHead(Node *_head){
    head = _head;
}



// Metodo insert
void LinkedList::insert(int elemento){
	Node* nuevo = new Node(elemento, this -> head);
	nuevo -> setElem(elemento);
	nuevo -> setNext(NULL);
	
	if(this -> head == NULL || elemento < this -> head -> getElem()){
		nuevo -> setNext(this->head); // 2 -> 5       <       //  5
		this -> head = nuevo;
	}
	else{
		Node* aux = this -> head;
		while(aux -> getNext() != NULL && aux -> getNext() -> getElem() < elemento){
			aux = aux -> getNext();
		}
	
		if(aux -> getNext() == NULL){
			aux -> setNext(nuevo);
		}
		else if(aux -> getNext() ->getElem() >= elemento){
			nuevo -> setNext(aux -> getNext()); 
			aux -> setNext(nuevo);
		}
	}
		
}



// Metodo remove
void LinkedList::remove(int elemento){
	if(this -> head != NULL ){
		Node* aux = this -> head;
		if(this -> head -> getElem() == elemento){
			this -> head = this -> head -> getNext();
			delete aux;
		}	
		else{
			while(aux -> getNext() != NULL && aux -> getNext() -> getElem() != elemento){
				aux = aux -> getNext();
			}
			if(aux -> getNext() != NULL && aux -> getNext() -> getElem() == elemento ){
				Node* a_remove = aux -> getNext();
				aux -> setNext(aux -> getNext() ->  getNext());
				delete a_remove;
			}
		}

	}
}

//void LinkedList::print();


