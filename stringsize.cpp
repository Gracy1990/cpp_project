#include <iostream>
#include<string>
using namespace std;

int main()
{
    string readMe;
    while (getline(cin,readMe))
    {
    auto len = readMe.size();
    cout<<"length of this string = "<<len <<endl;
    }
return 0;
}