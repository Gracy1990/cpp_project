#include <iostream>
#include<string>
using namespace std;

int main()
{
    string readMe ("hello there");
    decltype(readMe.size()) i;
    for (i = 0; i!= readMe.size() && !isspace(readMe[i]); ++i)
            readMe[i] = toupper(readMe[i]);
    cout<< readMe <<endl;
}