#pragma once
#include "clsMyQueueArr.h";
template <class T>
class clsMyStackArr : public clsMyQueueArr<T>
{
public:
	
	void push(T item) {
	clsMyQueueArr<T>::MyQueue.InsertAtBeginning(item);
	}

	  T Top() {
		  return clsMyQueueArr<T>::front();
	  }

	  T Bottem() {
		  return clsMyQueueArr<T>::back();
	  }
};

