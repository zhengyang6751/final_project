#include "doubly_linked_list.h"
#include <iostream>
using namespace std;
doubly_linked_list::doubly_linked_list()
{
    head = NULL;
    tail = NULL;
}
void doubly_linked_list::addElement(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = NULL;
        newNode->prev = tail;
        if (head == NULL) {
            head = newNode;
        }
        else {
            tail->next = newNode;
        }
        tail = newNode;
        cout << "Element " << data << " added to the list." << endl;
    }
void doubly_linked_list::removeElement(int data) {
        Node* temp = head;
        while (temp != NULL && temp->data != data) {
            temp = temp->next;
        }
        if (temp == NULL) {
            cout << "Element " << data << " not found in the list." << endl;
            return;
        }
        if (temp == head && temp == tail) {
            head = NULL;
            tail = NULL;
        }
        else if (temp == head) {
            head = temp->next;
            head->prev = NULL;
        }
        else if (temp == tail) {
            tail = temp->prev;
            tail->next = NULL;
        }
        else {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
        }
        delete temp;
        cout << "Element " << data << " removed from the list." << endl;
    }
void doubly_linked_list::searchElement(int data) {
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
    
    // function to print the elements of the list
void doubly_linked_list::printList() {
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
doubly_linked_list::~doubly_linked_list()
{

}