#include <iostream>
#include "Queue.h"
#include "QueueImp.cpp"
using namespace std;

int main()
{
	Queue q1;

	q1.Enqueue(10);
	q1.Enqueue(20);
	q1.Enqueue(30);
	q1.Enqueue(40);
	q1.Enqueue(50);
	q1.Enqueue(60);
	q1.Enqueue(70);
	q1.Enqueue(80);
	q1.Enqueue(90);
	q1.Enqueue(100);
	q1.Enqueue(110);

	cout << endl;

	cout << "Front of Queue: " << q1.Front() << endl;

	cout << "Back of Queue: " << q1.Back() << endl;

	cout << "Dequeue Number 1: " << q1.Dequeue() << endl;
	cout << "Dequeue Number 2: " << q1.Dequeue() << endl;

	cout << endl;

	system("PAUSE");
	return 0;
}