#include <iostream>

[[deprecated]] auto add_numbers(int one, int two) 
{
    return one + two;
}

int main() 
{
    std::cout << __cplusplus << std::endl;
    std::cout << add_numbers(24, 87) << std::endl;
    return 0;
}