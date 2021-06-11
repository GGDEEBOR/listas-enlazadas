#include <iostream>
#include "Node.h"
using namespace std;

// Constructores
Node::Node(int _elem, Node* _next){
    elem = _elem;
    next = _next;
}
Node::Node(){
    this -> elem = elem;
    this -> next = next;
}

// Get
int Node::getElem()const{
    return elem;
}

Node* Node::getNext()const{
    return next;
}


// Set
void Node::setElem(int _elem){
    elem = _elem;
}

void Node::setNext(Node*_next){
    next = _next;
}
