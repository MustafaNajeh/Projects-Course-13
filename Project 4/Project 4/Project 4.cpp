#include <iostream>
#include "clsDynamicArray.h"
using namespace std;

int main()
{
	clsDynamicArray<int> MyDynamicArray(3);

	MyDynamicArray.SetItem(0, 10);
	MyDynamicArray.SetItem(1, 20);
	MyDynamicArray.SetItem(2, 30);

	cout << "Is Empty ? : " << MyDynamicArray.IsEmpty();
	cout << "\nArray Size : " << MyDynamicArray.Size();
	cout << "\n\nArray Items :\n";

	MyDynamicArray.PrintList();


	MyDynamicArray.Resize(1);
	cout << "\n\nArray Size : " << MyDynamicArray.Size();
	cout << "\n\nArray Items :\n";
	MyDynamicArray.PrintList();

	MyDynamicArray.Resize(5);
	cout << "\n\nArray Size : " << MyDynamicArray.Size();
	cout << "\n\nArray Items :\n";
	MyDynamicArray.PrintList();

	system("pause>0");
 	return 0;
}

