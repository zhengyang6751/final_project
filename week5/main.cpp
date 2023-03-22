#include <iostream>
#include "hw5.cpp"
#include "doubly_linked_list.cpp"
using namespace std;
int main(){
    hw5 myList;
    myList.printList();
    myList.addElement(5);
    myList.addElement(3);
    myList.addElement(8);
    myList.printList();
    myList.searchElement(3);
    myList.searchElement(6);
    myList.removeElement(3);
    myList.printList();
    myList.removeElement(9);
    myList.printList();
    cout << endl;

    doubly_linked_list myList2;
    myList2.printList();
    myList2.addElement(5);
    myList2.addElement(3);
    myList2.addElement(8);
    myList2.printList();
    myList2.searchElement(3);
    myList2.searchElement(6);
    myList2.removeElement(3);
    myList2.printList();
    myList2.removeElement(9);
    myList2.printList();
    return 0;
}