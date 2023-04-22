#include<iostream>
using namespace std;

int main()
{
    using letter = char;    // letter is a synonym for char
    using num = int;        // num is a synonym for int
    letter a = 'A';
    letter b = 'B';
    num n1 = 65;
    num n2 = 66;
    cout<<"The ASCII value of "<<a <<" is "<<n1 <<endl;
    cout<<"The ASCII value of "<<b <<" is "<<n2 <<endl;
    return 0;
};
