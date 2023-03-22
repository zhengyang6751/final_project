#ifndef HW5_H
#define HW5_H
#pragma once
#include <iostream>
class hw5
{
public:
    class Node {
        public:
        int data;
        Node* next;
    };
    hw5();
    void addElement(int data);
    void removeElement(int data);
    void searchElement(int data);
    void printList();
    ~hw5();

private:
    Node* head;

};

#endif