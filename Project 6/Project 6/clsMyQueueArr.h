#pragma once
#include <iostream>
#include "clsDynamicArray.h";
using namespace std;
template <class T>
class clsMyQueueArr
{
protected:
	clsDynamicArray<T> MyQueue;
public:
	void push(T value) {

		MyQueue.InsertAtEnd(value);
	}

	void Print() {
		MyQueue.PrintList();
	}

	void pop() {
		MyQueue.DeleteFirstIndex();
	}

	int size() {
		return MyQueue.Size();
	}

	bool IsEmpty() {
		return MyQueue.IsEmpty();
	}

	T front() {
		return MyQueue.GetItem(0);
	}

	T back() {
		return MyQueue.GetItem(size() - 1);
	}

	T GetItem(int index) {
		return MyQueue.GetItem(index);
	}

	void Reverse() {
		MyQueue.Revers();
	}

	void UpdateItem(int index, T value) {
		MyQueue.SetItem(index, value);
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
		MyQueue.clear();
	}
};

