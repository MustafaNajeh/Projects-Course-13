#include <iostream>
#include "clsMyStack.h"
using namespace std;

int main()
{
	clsMyStack <int> MyStack;

	MyStack.push(10);
	MyStack.push(20);
	MyStack.push(30);
	MyStack.push(40);
	MyStack.push(50);

	cout << "\nPrint Stack\n";
	MyStack.Print();

	cout << "\nStack Size: " << MyStack.size();
	cout << "\nStack Top: " << MyStack.Top();
	cout << "\nStack Bottem: " << MyStack.Bottem();

	MyStack.pop();

	cout << "\n\nafter poping: \n";
	MyStack.Print();

	cout << "\nget item (2) : " << MyStack.GetItem(2);

	MyStack.Reverse();
	cout << "\n\nitems after reverse :\n";
	MyStack.Print();

	MyStack.UpdateItem(2, 600);
	cout << "\n\nStack after Update (2): \n";
	MyStack.Print();

	MyStack.Insertafter(2, 800);
	cout << "\n\nStack after add 800 after (2)\n";
	MyStack.Print();

	MyStack.InsertAtFront(1000);
	cout << "\n\nStack after add 1000 at Top: \n";
	MyStack.Print();

	MyStack.InsertAtBack(2000);
	cout << "\n\nStack after add 1000 at Bottem: \n";
	MyStack.Print();

	MyStack.clear();
	cout << "\n\nStack after clear :\n";
	MyStack.Print();

	system("pause>0");
}