/*
   title:       ShortBook.cpp
   description: this file contains the definition of  
                the member functions of this class...
*/ 
#include "ShortBook.h"

ShortBook::ShortBook()  //Default constructor...
{
	bkTitle = Blank;
	bkAuthor = Blank;
	bkPublisher = Blank;
}

ShortBook::ShortBook(string Title, string Author, string Publisher )  //Initializing constructor...
{
	bkTitle = Title;
	bkAuthor = Author;
	bkPublisher = Publisher;
}

//Define some appropriate mutators...

void ShortBook::SetTitle(string Title)         { bkTitle = Title; }
void ShortBook::SetAuthor(string Author)       { bkAuthor = Author; }
void ShortBook::SetPublisher(string Publisher) {bkPublisher = Publisher; }

//...and accessors...

string ShortBook::GetTitle()    { return bkTitle; }  
string ShortBook::GetAuthor()   { return bkAuthor; }
string ShortBook::GetPublisher(){ return bkPublisher; }

//Sometimes we want to convert the values to a universal form...

string ShortBook::OutPut()
{
	return "\n==============================\n" +
		   bkTitle + "\n" +
		   bkAuthor + "\n" +
		   bkPublisher + "\n" +
		   "==============================\n";
}
