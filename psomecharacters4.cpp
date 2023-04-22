#include <iostream>
#include<string>
using namespace std;

int main()
{
const string hexdigits = "0123456789ABCDEF"; 
cout << "Enter a string of 0-15 numbers,"
<<"separated by spaces."
<<" When finished, press ENTER: "<<endl;
string result;
string::size_type ip;
while (cin >> ip)
if (ip < hexdigits.size())
result += hexdigits[ip];
cout << "Your hex number is: " << result << endl;
return 0;

}