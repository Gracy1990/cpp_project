#include<iostream>
using namespace std;

int main()
{
int ival = 50;
int *p = &ival;
cout<<"ival = "<<ival <<endl <<"p = "<<p <<endl <<"*p = "<<*p <<endl;    
*p = 51;
cout<<"New ival = "<<ival <<endl <<endl <<"New p = "<<p <<"endl <<New *p = "
<<*p; ival = 52;
cout<<"New ival = "<<ival <<endl <<"New p = "<<p <<endl <<"New *p = "<<*p;
return 0;
}