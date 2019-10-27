#include <iostream>
#include <string>

int main()
{
    std::string food = "Pizza";

    std::string *ptr = &food;

    std::cout << food << std::endl;
    std::cout << &food << std::endl;

    *ptr = "Broccoli";

    std::cout << ptr << std::endl;
    std::cout << food << std::endl;

    return 0;
}