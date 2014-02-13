/*
   title:       BorrowBookList.h
   description: this file contains the definition of a 
                class that represents a collection of books 
				in the context of a library.
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define BORROWBOOKLIST

#ifndef BORROWRECORD
#include "BorrowRecord.h"
#endif

class BorrowBookList  {
	vector<BorrowRecord> BookList;  //This implements the list of book records...
	vector<BorrowRecord>::iterator ThroughTheList; //to facilitate serial access...
	string FileName;

public:
	BorrowBookList() {FileName = "TEMP";}
	BorrowBookList(String FName) {FileName = FName;}
    void WriteToFile();
	void ReadFromFile();
	void AddRecord(BorrowRecord);  //Nothing surprising in the list of
	BorrowRecord SearchID(string);   //  member functions...
	BorrowRecord SearchTittle(string);
    BorrowRecord SearchAuthor(string);
	BorrowRecord SearchuID(string);
	BorrowRecord SearchLast(string);
	BorrowRecord SearchbyDate(string);
	bool Remove(string);
	bool RemoveuID(string);
	void Show();
	BorrowRecord Checkout(string);
	BorrowRecord Return(string);
};
