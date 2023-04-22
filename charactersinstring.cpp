#include <iostream>
#include<string>
using namespace std;

int main()
{
string readMe ("Hello There");
for (auto ch : readMe)
cout << ch <<endl;

return 0;
}