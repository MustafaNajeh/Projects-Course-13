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

	T GetItem(int Item) {
		if (Item < 0 || Item >= _Size) {
			Item = 0;
		}
		return OriginalArray[Item];

	}

	void Revers() {
		int Counter = 1;
		int temp = 0;
		for (int i = 0; i < (_Size / 2) ; i++) {
			temp = OriginalArray[i];
			OriginalArray[i] = OriginalArray[_Size - Counter];
			OriginalArray[_Size - Counter] = temp;
			Counter++;
		}
	
		//abouhadhud 
		/*_TempArray = new T[_Size];

		int counter = 0;
		for (int i = _Size - 1; i >= 0; i--) {
			_TempArray[counter] = OriginalArray[i];
			counter++;
		}
		delete[] OriginalArray;
		OriginalArray = _TempArray;*/
	}

	void clear() {
		_Size = 0;
		//_TempArray = new T[0];
		delete[] OriginalArray;
		//OriginalArray = _TempArray;
	}


};

