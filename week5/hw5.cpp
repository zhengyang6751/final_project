#include "hw5.h"
#include <iostream>
using namespace std;
hw5::hw5()
{
    head = NULL;
}
void hw5::searchElement(int data){
    Node* temp = head;
        while (temp != NULL && temp->data != data) {
            temp = temp->next;
        }
        if (temp == NULL) {
            cout << "Element " << data << " not found in the list." << endl;
        }
        else {
            cout << "Element " << data << " found in the list." << endl;
        }
}
void hw5::addElement(int data){
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
    }
    else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    cout << "Element " << data << " added to the list." << endl;
}
void hw5::removeElement(int data){
    Node* temp = head;
        Node* prev = NULL;
        while (temp != NULL && temp->data != data) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL) {
            cout << "Element " << data << " not found in the list." << endl;
            return;
        }
        if (prev == NULL) {
            head = temp->next;
        }
        else {
            prev->next = temp->next;
        }
        delete temp;
        cout << "Element " << data << " removed from the list." << endl;
}
void hw5::printList(){
    if (head == NULL) {
            cout << "List is empty." << endl;
        }
        else {
            cout << "List elements: ";
            Node* temp = head;
            while (temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
}
hw5::~hw5()
{

}