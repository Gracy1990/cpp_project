#include<iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;
    auto sum = a + b;
    cout<<"Sum = "<<sum <<endl;
    cout << typeid(sum).name() << endl;

    double c = 1.2, d= 2.3;
    auto sum_d = c+d;
    cout<<"Sum = "<<sum_d <<endl;
    cout << typeid(sum_d).name() << endl;
    return 0;
}