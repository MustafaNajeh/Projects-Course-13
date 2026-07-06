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

	cout << "\nItem (2): " << MyDynamicArray.GetItem(5);

	MyDynamicArray.Revers();
	cout << "\nAfter Revers :\n";
	MyDynamicArray.PrintList();

	MyDynamicArray.clear();
	cout << "\nAfter clear :\n";
	MyDynamicArray.PrintList();

	system("pause>0");
 	return 0;
}

