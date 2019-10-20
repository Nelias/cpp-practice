#include <iostream>
#include <string>

int main()
{
    std::string word;
    std::cout << "What word do you want to cut into pieces?" << std::endl;
    getline(std::cin, word);
    word.shrink_to_fit();
    std::cout << "You picked: " << word << std::endl;

    for (int i = 0; i < word.length(); i++)
    {
        std::cout << word[i] << " ";

        if (i == word.length())
        {
            std::cout << "\n";
        }
    }

    return 0;
}