#pragma once
#include <iostream>
#include "clsMyQueue.h";
using namespace std;
template <class T>
class clsMyStack : public clsMyQueue<T>
{

public:

	void push(T item) {
		clsMyQueue<T>::MyQueue.InsertAtBeginning(item);
	}

	T Top() {
		return clsMyQueue<T>::front();
	}
	
	T Bottem() {
		return clsMyQueue<T>::back();
	}



	
};

