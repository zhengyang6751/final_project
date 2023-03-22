#ifndef H_Queue
#define H_Queue

#include <iostream>

using namespace std;

class Queue
{
public:
	Queue();
	void Enqueue(int i);  // Insert value
	int Dequeue();   // Remove the first value
	bool Full();
	bool Empty();
	int Front(); // Access the next element
	int Back();  // Access the last element

private:
	int size;
	//int length;
	int list[10];
	int queueFront;
	int queueBack;
};

#endif