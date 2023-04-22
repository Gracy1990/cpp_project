#include <iostream>
#include<string>
#include<typeinfo>
using namespace std;

int main()
{
    string s1 = "It's ", s2 = "my ", s3 ="dream ";
    string s4 = s1+ s2+ "to get my research paper";
    string s5 = " published ";
    string s6 = s4;
    s6 += s5;
    string s7(3, 'E');
    string s8 = "in the I";
    string s9 = s6+s8+s7;
    cout<<s9;

    return 0;
}