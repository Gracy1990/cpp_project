#include<iostream>
using namespace std;

int main()
{
    typedef double wages; // wages is a snonym for double
    typedef float percent; // percent is a synonym for float
    wages w1 = 1000;
    wages w2 = 1500;
    percent p1 = 10.5;
    percent p2 = 15.5;
    cout<<"The wages earned by worker-1 = $"<<w1 <<endl;
    cout<<"The wages earned by worker-2 = $"<<w2 <<endl;
    cout<<"Worker-1 will get a raise by "<<p1 <<"%" <<endl;
    cout<<"Worker-2 will get a raise by "<<p2 <<"%" <<endl;
    return 0;
}