#pragma once
#include <iostream>
using namespace std;
template <class T>
class clsDynamicArray
{
	

	int _Size;
public:
	T* OriginalArray;
	clsDynamicArray(int index) {
		if (index < 0)
			index = 0;

		_Size = index;
		OriginalArray = new T[index];
	}

	~clsDynamicArray() {
		delete[] OriginalArray;
	}


	bool SetItem(int index, T Item) {
		if (index >= _Size || _Size < 0) {
			return false;
		}
		OriginalArray[index] = Item;
		return true;
	}

	void PrintList() {
		for (int i = 0; i < _Size; i++) {
			cout << OriginalArray[i] << " ";
		}
		cout << "\n";
	}

	int Size() {
		return _Size;
	}

	bool IsEmpty() {
		return _Size == 0 ? true : false;
	}


};

