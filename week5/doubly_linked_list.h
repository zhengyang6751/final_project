#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#pragma once

class doubly_linked_list
{
public:
    class Node {
    public:
        int data;
        Node* next;
        Node* prev;
    };
    doubly_linked_list();
    void addElement(int data);
    void removeElement(int data);
    void searchElement(int data);
    void printList();
    ~doubly_linked_list();

private:
    Node* head;
    Node* tail;
};

#endif