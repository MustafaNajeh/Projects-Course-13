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

	MyDynamicArray.InsertAtBeginning(400);
	cout << "\nArray After Insert 400 at Beginning:";
	cout << "\nArray Size : " << MyDynamicArray.Size() << "\n";
	MyDynamicArray.PrintList();

	MyDynamicArray.InsertBefor(2,500);
	cout << "\nArray After Insert 500 Befor index 2:";
	cout << "\nArray Size : " << MyDynamicArray.Size() << "\n";
	MyDynamicArray.PrintList();

	MyDynamicArray.InsertAfter(2,600);
	cout << "\nArray After Insert 600 After index 2:";
	cout << "\nArray Size : " << MyDynamicArray.Size() << "\n";
	MyDynamicArray.PrintList();

	MyDynamicArray.InsertAtEnd(800);
	cout << "\nArray After Insert 800 at End:";
	cout << "\nArray Size : " << MyDynamicArray.Size() << "\n";
	MyDynamicArray.PrintList();






	system("pause>0");
 	return 0;
}

