#include<iostream>
#include <string>
using namespace std;

int main()
{
    string readMe;
    while (getline(cin,readMe))
    cout << readMe << endl;
    return 0;
    
}