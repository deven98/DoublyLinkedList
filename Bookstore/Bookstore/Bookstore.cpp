// Bookstore.cpp : Defines the entry point for the console application.
//=

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;
//Initial commit

class Book
{
private:
	string name, pub;
	int price, stock;


public:
	Book *next;
	void addBook()
	{
		Book *newBook = new Book;
		cout << "Enter the book name\n";
		cin >> name;
		cout << "Enter the price";
		cin >> price;
		cout << "Enter the publisher's name\n";
		cin >> pub;
		cout << "Enter the number of books\n";
		cin >> stock;
		if (head == NULL) //create a head
		{
			newBook->next = NULL;
			head = newBook;
		}
		else// insert at head
		{
			newBook->next = head;
			head = newBook;
		}
		return;
	}

	void displayBook()
	{
		Book *temp = head;
		while (temp != NULL)
		{
			cout << "Title: " << name << endl;
			cout << "Publisher: " << pub << endl;
			cout << "Price: " << price << endl;
			cout << "There are " << stock << " books" << endl << endl;
			temp = temp->next;
		}
		return;
	}
};

Book *head;

int main()
{
	head = NULL;
	bool isSeller;
	cout << "Enter 1 to buy books\nEnter 2 to sell\n";
	int c;
	cin >> c;
	if (c == 1)
		isSeller = false;
	else
		isSeller = true;

	if (isSeller)
	{
		int choice;
		cout << "Enter 1 to add a book\nEnter 2 to display all the books\n";
		cin >> choice;
		switch (choice)
		{

		case 1:
		{
			head->addBook();
			break;
		}

		case 2:
		{
			head->displayBook();
			break;
		}
		}


	}
	else
	{
		do {

			cout << "Welcome to the book store" << endl;
			cout << "1. Search book" << endl;
			cout << "2. Display Books" << endl;
			cout << "3. Check cart" << endl;
			cout << "4. Checkout" << endl;

			int input;
			cin >> input;
			switch (input) {

			case 1:

				break;
			case 2:

				break;
			case 3:

				break;
			case 4:

				break;
			default:
				cout << "Invalid input";
			}

		} while (true);

	}
	return 0;
}

