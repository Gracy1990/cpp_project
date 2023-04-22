#include <iostream>
int main()
{
    int sum = 0, value = 0;
    //reas until end-of file, calculating a running total of all values read
    while (std::cin >> value)
            sum += value; // same as sum = sum + value
    std::cout << "sum = " << sum << std::endl;
    return 0;
}