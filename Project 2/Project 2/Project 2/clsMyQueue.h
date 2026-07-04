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

	T size() {
		return MyQueue.Size();
	}

	T front() {
		return MyQueue.GetItem(0);
	}

	T back() {
		return MyQueue.GetItem(size() - 1);
	}

	T GetItem(int index){
		return MyQueue.GetItem(index);
	}

	void Reverse() {
		 MyQueue.Reverse();
	}

	void UpdateItem(int index , T value) {
		MyQueue.UpdateItem(index, value);
	}

	void Insertafter(int index, T value) {
		MyQueue.InsertAfter(index, value);
	}

	void InsertAtFront(T value) {
		MyQueue.InsertAtBeginning(value);
	}

	void InsertAtBack(T value) {
		MyQueue.InsertAtEnd(value);
	}

	void clear() {
		MyQueue.Clear();
	}

};

