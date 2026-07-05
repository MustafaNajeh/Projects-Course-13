#pragma once
#include <iostream>
using namespace std;
template <class T>
class clsDynamicArray
{
	
protected:
	int _Size;
	T* _TempArray;

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

	void Resize(int NewSize) {
		if (NewSize < 0) {
			NewSize = 0;
		}

		_TempArray = new T[NewSize];

		if (NewSize < _Size) {
			_Size = NewSize;
		}

		for (int i = 0; i < _Size; i++)
		{
			_TempArray[i] = OriginalArray[i];
		}

		_Size = NewSize;

		delete[] OriginalArray;
		OriginalArray = _TempArray;


	}

};

