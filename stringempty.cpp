#include <iostream>
#include<string>
using namespace std;

int main()
{
    string readMe;
    while (getline(cin,readMe))
        {
            if (!readMe.empty())
                {cout<<"The string is:"<<endl;
                cout << readMe << endl;
                cout << readMe << endl;
                }
            else
                cout<<"The string is empty"<<endl;
        }
        return 0;
}