#include <iostream>

int main()
{
    char word[15];
    std::cout << "What word do you want to cut into pieces?" << std::endl;
    std::cin >> word;
    std::cout << "You picked: " << word << std::endl;

    for (int i = 0; i < 15; i++)
    {
        std::cout << word[i] << " ";
        if (i == 15)
        {
            std::cout << "\n";
        }
    }
    return 0;
}