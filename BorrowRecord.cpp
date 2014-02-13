/*
   title:       BorrowRecord.cpp
   description: this file contains the definitions of the member
                functions for the class...
*/

#include "BorrowRecord.h"

BorrowRecord::BorrowRecord() //Define the default constructor...
{
	BkID = Blank;
	LastName = Blank;
	FirstName = Blank;
	UserID = Blank;
	DueDate = Blank;
}


BorrowRecord::BorrowRecord(string Tle, string Auth, string Pub, string ID): ShortBook(Tle, Auth, Pub)
{
	BkID = ID;
	LastName = Blank;
	FirstName = Blank;
	UserID= Blank;
	DueDate = Blank;
}

BorrowRecord::BorrowRecord(string Tle, string Auth, string Pub, string ID, string Last):ShortBook(Tle,Auth,Pub)
{
	BkID = ID;
	LastName = Last;
	FirstName = Blank;
    UserID= Blank;
	DueDate = Blank;
}

BorrowRecord::BorrowRecord(string Tle, string Auth, string Pub, string ID, string Last, string First):ShortBook(Tle,Auth,Pub)
{
	BkID = ID;
	LastName = Last;
	FirstName = First;
    UserID= Blank;
	DueDate = Blank;
}

BorrowRecord::BorrowRecord(string Tle, string Auth, string Pub, string ID, string Last, string First, string uID):ShortBook(Tle,Auth,Pub)
{
	BkID = ID;
	LastName = Last;
	FirstName = First;
    	UserID= uID;
	DueDate = Blank;
}

void BorrowRecord::SetBkID(string ID) { BkID = ID;}  
void BorrowRecord::SetLast(string Last) {LastName = Last;}
void BorrowRecord::SetFirst(string First) {FirstName = First;}
void BorrowRecord::SetUserID(string uID) {UserID = uID;}
void BorrowRecord::SetDDate(string DDate) {DueDate = DDate;}

string BorrowRecord::GetBkID()  { return BkID; }
string BorrowRecord::GetLast() { return LastName; }
string BorrowRecord::GetFirst() { return FirstName;}
string BorrowRecord::GetUserID() { return UserID;}
string BorrowRecord::GetDDate    { return DueDate;}

string BorrowRecord::OutPut()
{
   return "\n=============================\n" +
	ShortBook::OutPut() + "\n" +
	BkID + "\n" +
	LastName + "\n" +
	FirstName + "\n" +
	UserID + "\n" +
	DueDate + "\n";
}  
