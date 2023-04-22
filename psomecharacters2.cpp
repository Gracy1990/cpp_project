#include <iostream>
#include<string>
using namespace std;

int main()
{
string readMe ("hello there");
if (!readMe.empty())
        readMe[0] = toupper(readMe[0]);
cout<< readMe <<endl;

return 0;
}

