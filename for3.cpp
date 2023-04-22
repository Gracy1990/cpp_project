#include <iostream>
int main()
{
    int sum = 0, val;
    std::cout << "Enter the number till which the sum has to be calculated";
    std::cin>> val;
    for (int i=1; i<=val; i++)
           { 
            sum += i; // same as sum = sum + i 
           }
    std::cout << "sum of 1 to "<<val <<"  = " <<sum <<std::endl;
    return 0;
}