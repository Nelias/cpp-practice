#include <iostream>
#include <cmath>

auto first_number = 5;

int main() 
{
    std::cout << "The power of 6 to 6 is: " << pow(6, 6) << std::endl;

    std::cout << "Type a number: ";
    std::cin >> first_number;
    std::cout << "Your number is: " << first_number << std::endl;
    
    return 0;
}
