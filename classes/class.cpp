#include <iostream>

class MyNumber
{
public:
    int my_number;
};

int main()
{
    MyNumber my_object;

    my_object.my_number = 15;

    std::cout << my_object.my_number << std::endl;

    return 0;
}
