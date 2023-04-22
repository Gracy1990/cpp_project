#include <iostream>
#include<string>
using namespace std;

int main()
{
string readMe ("Hello, There!!!");
for (auto &ch : readMe)
    ch = toupper (ch);
cout << "Converted string = "<<readMe;


return 0;
}