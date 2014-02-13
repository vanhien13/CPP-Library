/*
   title:       ShortBook.h
   description: this file contains the definition of a 
                class that represents a single book title...
*/
#include <iostream>
#include <string>
using namespace std;

#define SHORTBOOK

const string Blank = "";

class ShortBook  {
	string bkTitle;       //These are obvious variables...
	string bkAuthor;      //This is a little oversimplified...some 
	                      //books have more than one author...
	string bkPublisher;

public:
    ShortBook();    //Define some appropriate constructors...  
	ShortBook(string,string, string);

	void SetTitle(string);  //The usual set of mutators...
	void SetAuthor(string);
	void SetPublisher(string);

	string GetTitle();   //...and accessors...
	string GetAuthor();
	string GetPublisher();

    string OutPut();
	
};
