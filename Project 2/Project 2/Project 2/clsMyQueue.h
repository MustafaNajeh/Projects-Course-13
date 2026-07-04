#pragma once
#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;
template <class T>
class clsMyQueue
{
private:

	clsDblLinkedList <T> MyQueue;
	

public :

	void push(T value) {

		MyQueue.InsertAtEnd(value);
	}

	void Print() {
		MyQueue.PrintNodes();
	}

	void pop() {
		MyQueue.DeleteFirstNode();
	}

	int size() {
		return MyQueue.Size();
	}

	int front() {
		return MyQueue.GetItem(0);
	}

	int back() {
		return MyQueue.GetItem(size() - 1);
	}

};

