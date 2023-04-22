  #include <iostream>
int main()
{
    int num = 0;
    std::cout << "Enter any number." << std::endl;
    std::cin >> num;
    if (num >10)
         {
        std::cout << "The number is greater than 10.";
         }
    else if (num <10)
         {
          std::cout << "The number is less than 10.";
         }
    else {
          std::cout << "The number is equal to 10.";
         }
        return 0;
}
    