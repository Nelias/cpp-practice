#include <iostream>
#include <string>

int main()
{
    std::string string_one = "a nice name";

    std::string string_two = "even better name";

    char ch[80];

    string_one.copy(ch, 11, 0);

    std::cout << "The new copied character array is: ";
    std::cout << ch << std::endl
              << std::endl;

    std::cout << "The 1st string before swapping is: ";
    std::cout << string_one << std::endl;
    std::cout << "The 2nd string before swapping is: ";
    std::cout << string_two << std::endl;

    string_one.swap(string_two);

    std::cout << "The 1st string after swapping is: ";
    std::cout << string_one << std::endl;
    std::cout << "The 2nd string after swapping is: ";
    std::cout << string_two << std::endl;

    return 0;
}