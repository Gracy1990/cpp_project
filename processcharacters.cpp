#include <iostream>
#include<string>
using namespace std;

int main()
{
    string readMe ("Hello, There!!!");
    int punct_count = 0;
    for (auto ch: readMe)
            if (ispunct(ch))
            ++punct_count;
    cout << "Number of punctuation characters in "<<readMe
             <<"= "<<punct_count;
}