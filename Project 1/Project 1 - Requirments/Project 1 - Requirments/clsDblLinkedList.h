#include <iostream>
using namespace std;

#pragma once



template <class T>
class clsDblLinkedList 
{
public:

	class Node {
	public:
		T value;
		Node* prev;
		Node* next;
	};

	Node* head = NULL;

	void InsertAtBeginning(T value) {

		Node* new_node = new Node();

		new_node->value = value;
		new_node->next = head;
		new_node->prev = NULL;

		if (head != NULL) {
			head->prev = new_node;
		}
		head = new_node;
	}

	Node* Find(T value) {
		Node* Current = head;
		while (Current != NULL) {
			if (Current->value == value) {
				return Current;
			}
			Current = Current->next;

		}
		return NULL;
	}

	void InsertAfter(Node* prev_Node, T value) {

		Node* new_node = new Node();

		new_node->value = value;
		new_node->next = prev_Node->next;
		new_node->prev = prev_Node;
		if (prev_Node->next != NULL) {
			prev_Node->next->prev = new_node;
		}
		prev_Node->next = new_node;


	}

	void InsertAtEnd( T value) {

		Node* new_node = new Node();
		new_node->value = value;
		new_node->next = NULL;


		if (head == NULL) {
			new_node->prev = NULL;
			head = new_node;
		}

		else
		{
			Node* LastNode = head;

			while (LastNode->next != NULL) {
				LastNode = LastNode->next;
			}

			LastNode->next = new_node;
			new_node->prev = LastNode;
		}

	}

	void DeleteNode( Node* Current) {

		if (head == NULL || Current == NULL) {
			return;
		}

		if (head == Current) {
			head = Current->next;
		}

		if (Current->next != NULL) {
			Current->next->prev = Current->prev;
		}

		if (Current->prev != NULL) {
			Current->prev->next = Current->next;
		}

		delete Current;

	}

	void DeleteFirstNode( ) {

		Node* first_node = head;

		if (head == NULL) {
			return;
		}

		head = head->next;
		if (head != NULL) {
			head->prev = NULL;
		}
		delete first_node;
	}

	void DeleteLastNode( ) {
		if (head == NULL) {
			return;
		}

		if (head->next == NULL) {
			delete head;
			head = NULL;
			return;
		}

		Node* Current = head;
		while (Current->next->next != NULL) {
			Current = Current->next;
		}

		Node* temp = head;
		temp = Current->next;
		Current->next = NULL;
		delete temp;

	}

	void PrintNodes() {
		Node* Current = head;
		while (Current != NULL) {

			cout << Current->value << " ";
			Current = Current->next;
		}
		cout << "\n";
	}
};

