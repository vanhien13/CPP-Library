
/*
   title:       BorrowRecord.h
   description: this file contains the definition of a 
                class that represents a single book title in the
				context of a library inventory....
*/
#include <iostream>
#include <string>
using namespace std;


#define BORROWRECORD
#ifndef SHORTBOOK
#include "ShortBook.h"
#endif

class BorrowRecord : public ShortBook  {
	string BkID;
	string Last;
	string First;
	string uID;
	string DueDate;

public:
	BorrowRecord(); //Define some useful constructors...
    BorrowRecord(string, string, string, string);
	BorrowRecord(string, string, string, string, string);
	BorrowRecord(string, string, string, string, string, string);
	BorrowRecord(string, string, string, string, string, string, string);

	void SetBkID(string);  //...and mutators
	void SetLast(string);
	void SetFirst(string);
	void SetUserID(string);
	void SetDDate(string);

	string GetBkID();  //...as well as accessors...
	string GetLast();
    string GetFirst();
	string GetUserID();
	string GetDDate();
	string OutPut(); //The universal format...
};
