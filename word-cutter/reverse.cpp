

#include <iostream>
#include <string>

int main()
{
    std::string word;
    std::cout << "What word do you want to reverse?" << std::endl;
    getline(std::cin, word);
    word.shrink_to_fit();
    std::cout << "You picked: " << word << std::endl;

    // Declaring reverse iterator
    std::string::reverse_iterator iter_reverse;

    // Displaying reverse string
    std::cout << "The reverse string using reverse iterators is : ";
    for (iter_reverse = word.rbegin(); iter_reverse != word.rend(); iter_reverse++)
        std::cout << *iter_reverse;
    std::cout << std::endl;

    return 0;
}