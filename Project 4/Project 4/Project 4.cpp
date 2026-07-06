#include <iostream>
#include "clsDynamicArray.h"
using namespace std;

int main()
{
	clsDynamicArray<int> MyDynamicArray(5);

	MyDynamicArray.SetItem(0, 10);
	MyDynamicArray.SetItem(1, 20);
	MyDynamicArray.SetItem(2, 30);
	MyDynamicArray.SetItem(3, 40);
	MyDynamicArray.SetItem(4, 50);

	cout << "Is Empty ? : " << MyDynamicArray.IsEmpty();
	cout << "\nArray Size : " << MyDynamicArray.Size();
	cout << "\n\nArray Items :\n";
	MyDynamicArray.PrintList();

	MyDynamicArray.DeleteLastIndex();
	cout << "\nArray Size : " << MyDynamicArray.Size();
	cout << "\ndelete Last index :\n";
	MyDynamicArray.PrintList();

	MyDynamicArray.DeleteFirstIndex();
	cout << "\nArray Size : " << MyDynamicArray.Size();
	cout << "\ndelete First index :\n";
	MyDynamicArray.PrintList();

	system("pause>0");
 	return 0;
}

