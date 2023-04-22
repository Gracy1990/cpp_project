#include<iostream>
using namespace std;

int main()
{
    const int ci = 0, &cj = ci;
    decltype (ci) x = 0;
    decltype(cj) y = x;
    decltype (cj) z = 0;

    cout << typeid(ci).name() << endl;
    cout << typeid(cj).name() << endl;
    cout << typeid(x).name() << endl;
    cout << typeid(y).name() << endl;
    cout << typeid(z).name() << endl;
    return 0;
}