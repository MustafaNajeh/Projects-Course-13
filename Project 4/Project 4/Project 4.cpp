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

	int index = MyDynamicArray.Find(30);
	if (index == -1) {
		cout << "\nItem Was Not Found\n";
	}
	else
	{
		cout << "\nItem (30) Was Found :" << index;
	}

	MyDynamicArray.DeleteItem(30);
	cout <<"\nAfter delete item 30";
	cout << "\nArray Size : " << MyDynamicArray.Size();
	cout << "\nArray Items :\n";
	MyDynamicArray.PrintList();




	system("pause>0");
 	return 0;
}

