#include <iostream>
#include <string>

class MyNumber
{
public:
    int my_number;
    std::string nameInitial;
    std::string surnameInitial;
};

int main()
{
    MyNumber my_object;

    my_object.my_number = 15;
    my_object.nameInitial = "J";
    my_object.surnameInitial = "K";

    std::cout << my_object.my_number << std::endl;
    std::cout << my_object.nameInitial << std::endl;
    std::cout << my_object.surnameInitial << std::endl;

    return 0;
}
