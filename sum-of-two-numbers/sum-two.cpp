#include <iostream>
#include <string>
#include "sum.hpp"

int first_number = 5;
int second_number = 15;

int main()
{
    std::cout << "The sum of " + std::to_string(first_number) + " and " + std::to_string(second_number) + " is " + std::to_string(sum_two(first_number, second_number)) << std::endl;
    return 0;
}
