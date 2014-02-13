/*
   title:       BorrowBookListUI.h
   description: this file contains the definition of a 
                class that allow practical access to the book list
*/
#include <iostream>
#include <string>
using namespace std;

#define BORROWBOOKLISTUI

#ifndef BORROWBOOKLIST
#include "BorrowBookList.h"
#endif



class BorrowBookListUI  {
	BorrowBookList BookInventory;

public:
	BorrowBookListUI();  //Again, the default is all we need..

	void Menu();   //Define a minimalist set of member
	void Fill();   //  functions...
	void FindbyID();
	void FindbyTitle();
  void FindbyAuthor();
	void FindbyUserID();
	void FindbyLastName();
	void RemoveBook();
	void RemoveUser();
	void Checkout();
	void Return();
	void ShowbyDate();
};
