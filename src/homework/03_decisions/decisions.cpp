//write include statement for decisions header
#include<iostream>
#include<string>
#include "decisions.h"

using std::string;

string get_letter_grade_using_if(int grade)
{
	string letter = "";
	if(grade>=90 && grade<=100)
	    letter = 'A';
	else if(grade>=80 && grade<=89)
	    letter = 'B';
	else if(grade>=70 && grade<=79)
	    letter = 'C';
	else if(grade>=60 && grade<=69)
	    letter = 'D';
	else if(grade>=0 && grade<=59)
	    letter = 'F';
	return letter;
}

string get_letter_grade_using_switch(int grade)
{
	string letter = "";
    switch(grade/10)
	{
		case 1:
		    letter='A';
			break;
		case 2:
		    letter='B';
			break;
		case 3:
		    letter='C';
			break;
		case 4:
		    letter='D';
			break;
		case 5:
		    letter='F';
			break;
	}
	return letter;
}

//Write code for function(s) code here