#include <iostream>
#include "clsMyQueueArr.h"
using namespace std;

int main()
{
	clsMyQueueArr <int> MyQueue;

	MyQueue.push(10);
	MyQueue.push(20);
	MyQueue.push(30);
	MyQueue.push(40);
	MyQueue.push(50);

	cout << "\nPrint queue\n";
	MyQueue.Print();

	cout << "\nQueue Size: " << MyQueue.size();
	cout << "\nQueue front: " << MyQueue.front();
	cout << "\nQueue back: " << MyQueue.back();

	MyQueue.pop();

	cout << "\n\nafter poping: \n";
	MyQueue.Print();

	cout << "\nget item (2) : " << MyQueue.GetItem(2);

	MyQueue.Reverse();
	cout << "\n\nitems after reverse :\n";
	MyQueue.Print();

	MyQueue.UpdateItem(2, 600);
	cout << "\n\nQueue after Update (2): \n";
	MyQueue.Print();

	MyQueue.Insertafter(2, 800);
	cout << "\n\nQueue after add 800 after (2)\n";
	MyQueue.Print();

	MyQueue.InsertAtFront(1000);
	cout << "\n\nQueue after add 1000 at front: \n";
	MyQueue.Print();

	MyQueue.InsertAtBack(2000);
	cout << "\n\nQueue after add 1000 at back: \n";
	MyQueue.Print();

	MyQueue.clear();
	cout << "\n\nQueue after clear :\n";
	MyQueue.Print();

	MyQueue.Reverse();
	MyQueue.Print();


	system("pause>0");
}