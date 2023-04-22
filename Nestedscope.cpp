#include <iostream>
using namespace std;
int reused = 42;         // reused has block scope
int main()
{
int unique = 0;         // unique has block scope
                        // output #1: uses global reused; prints 42 0
cout << reused << " " << unique << endl;
int reused = 0;         // new, local object named hides global reused
                        // output #2: uses local reused; prints 0 0
cout << reused << " " << unique << endl;
                        // output #3: explicitly requests the global reused; prints 42 0
cout << ::reused << " " << unique << endl;
return 0;
}