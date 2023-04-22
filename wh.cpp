#include <iostream>
int main()
{
    int count = 1, sum = 0;
    while (count <= 10)
            { sum += count; //same as sum = sum + count
              count = count + 1; 
            }
            std::cout << "Sum of 1 to 1o = " <<sum <<std::endl;
            return 0;
}