//write include statements
#include<iostream>
#include "decisions.h"
using namespace std;
int main()
{
	int input_grade;
	cout<<"Enter the numeral grade to be convertedd into Alphabetical grade: ";
	cin>>input_grade;
	cout<<"\n";
	if(input_grade<=100 && input_grade>=0)
	{
		cout<<"grade for "<<input_grade<<" by using if_else is: "
<<get_letter_grade_using_if(input_grade)<<"\n";
	    cout<<"grade for "<<input_grade<<" by using switch is: "
<<get_letter_grade_using_switch(input_grade)<<"\n";   
	}
	else
	{
		cout<<"given number is out of range\n";
	}
	return 0;
}