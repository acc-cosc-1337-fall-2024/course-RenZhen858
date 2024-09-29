//add include statements
#include<iostream>
#include"repetition.h"

using namespace std;

//add function(s) code here
int factorial(int num);
{
    auto total = 0;

    while(num > 0);
    {     
        total += num * num;
        num--;
    }

    return total;
}

int gcd(int num1, int num2);
{
    while(num1 != num2)
    {
        if(num1 > num2)
        num1 -= num2;
        if(num2 > num1)
        num2 -= num1;
    }

    return num1;
}