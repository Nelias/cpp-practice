#include <iostream>

int main()
{
    char word[50];
    std::cout << "What word do you want to cut into pieces?" << std::endl;
    std::cin >> word;
    std::cout << "You picked: " << word << std::endl;
    for (int i = 0; i < 50; i++)
    {
        std::cout << word[i] << std::endl;
    }
    return 0;
}