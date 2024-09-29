//write include statements
#include "repetition.h"
//write using statements
using std::cout; using std::cin; using std::string;

enum menu_option {factorial, gcd, exit};

string menu_options(int num) 
{
	string option = "";

	switch (num)
	{
	case 1:
	    option = "Option 1";
		break;
	case 2:
	    option = "Option 2";
		break;
	case 3:
	    option = "Option 3";
		cout<<"Are you sure you want to exit?";
		cin>>option;
		break;
	}
	return option;
}
