#include "Queue.h"
#include <iostream>

Queue::Queue()
{
	size = 0;
	queueFront = 0;
	queueBack = -1;
}

void Queue::Enqueue(int i)
{
	if(size == 10)
	{
		cout << "Queue is Full" << endl;
	}
	else
	{
		size++;
		//list[length] = i;
		//length++;
		queueBack = (queueBack+1)%10;
		list[queueBack] = i;
	}
}

int Queue::Dequeue()
{
	int value;
	if(size == 0)
	{
		cout << "Queue is Empty." << endl;
	}
	else
	{
		value = list[queueFront];
		queueFront = (queueFront+1)%10;
		size = size - 1;
		if(size == 0)
		{
			queueFront = 0;
			queueBack = -1;
		}
	}
	return value;
}

int Queue::Front()
{
	if(Empty())
	{
		cout << "Queue is empty." << endl;
	}
	else
	{
		int value;
		value = list[queueFront];
		return value;
	}
}

int Queue::Back()
{
	if(Empty())
	{
		cout << "Queue is empty." << endl;
	}
	else
	{
		int value;
		value = list[queueBack];
		return value;
	}
}

bool Queue::Empty()
{
	return (size==0);
}

bool Queue::Full()
{
	return (size==10);
}

