#include <iostream>

float notes[5];
float sum = 0;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Insert your " << i + 1 << " note: " << std::endl;
        std::cin >> notes[i];
        sum += notes[i];
    }

    std::cout << "\nSum of your notes is: " << sum << std::endl;

    return 0;
}