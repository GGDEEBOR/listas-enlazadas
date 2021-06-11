#include <iostream>
#include "LinkedList.cpp"
#include "Node.cpp"
using namespace std;


int main(){
    LinkedList a;
    a.insert(2);
    a.insert(1);
    a.insert(6);
    a.insert(3);
    a.insert(9);
    a.insert(7);
    a.insert(4);
    // 1, 2, 3, 4, 6, 7, 9
	cout <<a;
    cout <<endl;
    // Elimino el elemento 6
    a.remove(6);
    cout << "Eliminando el elemento 6: "<<endl;
    cout <<a;
    //1, 2, 3, 4, 7, 9
    a.remove(3);
    cout << "Eliminando el elemento 6: "<<endl;
    cout <<a;
    // 1, 2, 4, 7, 9



    return 0;
}
