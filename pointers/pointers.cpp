#include <iostream>
#include <string>

void double_array(int input_array[])
{
    for (int i = 0; i < sizeof(&input_array); i++)
    {
        input_array[i] = input_array[i] * 2;
    }
}

int main()
{
    std::string food = "Pizza";

    std::string *ptr = &food;

    std::cout << food << std::endl;
    std::cout << &food << std::endl;

    *ptr = "Broccoli";

    std::cout << ptr << std::endl;
    std::cout << food << std::endl << std::endl;


    int cool_array[4] = {333, 55, 24, 78453};

    double_array(cool_array);

    std::cout << "this is my new doubled array: ";

    for (int i = 0; i < sizeof(&cool_array); i++)
    {
        if (i != sizeof(&cool_array) - 1) {
            std::cout << cool_array[i] << ", ";
        } else {
            std::cout << cool_array[i];

        }
    }

    std::cout << std::endl << "this is a pointer to the memory cell of the first value in the array: ";
    std::cout << cool_array << std::endl;

    std::cout << "this is with use of &: ";
    std::cout << &cool_array << std::endl;

    std::cout << "this is the first value: ";
    std::cout << *cool_array << std::endl;


    return 0;
}
