#include <iostream>
int main()
{
         int choice = 0;
         std::cout << "Enter:" << std::endl << "1 - for coffee."<< std::endl
                   <<"2 - for Tea." <<std::endl;
         std::cin >> choice;
         if (choice == 1)
                 {
                 std::cout << "Your coffee is on its way. Thank you.";
                 }
    else if (choice <2)
                 {
                 std::cout << "Your tea is on its way. thank you.";
                 }
    else         {
                 std::cout << "You have entered a wrong option";
                 }
        return 0;
}
   