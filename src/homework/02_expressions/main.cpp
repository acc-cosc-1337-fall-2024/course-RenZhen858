#include<iostream>
#include "hwexpressions.h"

using namespace std;

int main()
{
	double meal_amount, tip_rate,total=0;

	cout<<"Enter Meal Amount :$";
	cin>>meal_amount;

	cout<<"Enter Tip Rate :%";
	cin>>tip_rate;

	double sales_tax_amount=get_sales_tax_amount(meal_amount);

	double tip_amount=get_tip_amount(meal_amount, tip_rate);

	total=meal_amount+sales_tax_amount+tip_amount;


	cout<<"Meal Amount :$"<<meal_amount<<endl;
	cout<<"Sales Tax :$"<<sales_tax_amount<<endl;
	cout<<"Tip Amount :$"<<tip_amount<<endl;
	cout<<"Total :$"<<total<<endl;

	return 0;
}
