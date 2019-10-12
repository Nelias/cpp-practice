#include <iostream>
#include <chrono>
#include <thread>
#include "sprites.hpp"

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

void animate(const char *sprite, int time)
{
    system("clear");
    cout << sprite << endl;
    sleep_for(milliseconds(time));
}

int main()
{
    for (int i = 0; i < 100; i++)
    {
        if (i == 0 || i == 50)
        {
            animate(right_one, 1000);
        }
        animate(right_two, 100);
        animate(right_middle, 100);
        animate(right_three, 100);
    }
    return 0;
}
