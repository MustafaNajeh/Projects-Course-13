#include <iostream>
#include "clsDblLinkedList.h"
using namespace std;

int main() {

	clsDblLinkedList <int> MydblLinkedList;

	MydblLinkedList.InsertAtBeginning(5);
	MydblLinkedList.InsertAtBeginning(4);
	MydblLinkedList.InsertAtBeginning(3);
	MydblLinkedList.InsertAtBeginning(2);
	MydblLinkedList.InsertAtBeginning(1);

	cout << "\nLinked List Content: \n";
	MydblLinkedList.PrintNodes();

	clsDblLinkedList<int>::Node* N1 = MydblLinkedList.Find(2);
		
	if (N1 != NULL) {
		cout << "\nNode value is Found\n";
	}
	else {
		cout << "\nNode is Not Found\n";
	}

	MydblLinkedList.InsertAfter(N1, 500);
	cout << "\nAfter Inserting 500 after 2:\n";
	MydblLinkedList.PrintNodes();

	MydblLinkedList.InsertAtEnd(700);
	cout << "\nAfter Inserting 700 at End:\n";
	MydblLinkedList.PrintNodes();

	clsDblLinkedList<int>::Node* N2 = MydblLinkedList.Find(4);
	MydblLinkedList.DeleteNode(N2);
	cout << "\nAfter Deleting 4:\n";
	MydblLinkedList.PrintNodes();

	MydblLinkedList.DeleteFirstNode();
	cout << "\nAfter Deleting First Node\n";
	MydblLinkedList.PrintNodes();

	MydblLinkedList.DeleteLastNode();
	cout << "\nAfter Deleting Last Node\n";
	MydblLinkedList.PrintNodes();

	system("pause>0");
	return 0;
}