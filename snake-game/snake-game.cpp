#include <iostream>
#include <ctime>
#include <string>
#include <chrono>
using namespace std::chrono;

#define KEY_UP 65
#define KEY_DOWN 66
#define KEY_RIGHT 67
#define KEY_LEFT 68

int main()
{
    const int height = 10;
    const int width = 20;
    std::string map [height][width];

    bool is_game_over = false;
    int snake_y = 2;
    int snake_x = 7;
    int pressed_key;
    int apples_collected = 0;
    int apples_needed = 8;
    int apple_x = (rand() % width - 2 + 1) + 2;
    int apple_y = 2 + (rand() % static_cast<int>(8 - 2 + 1));

    for (int row = 0; row < height; row++)
    {
        for (int column = 0; column < width; column++) 
        {

            if (row == 0 || row == height - 1) 
            {
                map[row][column] = "...";
            } else if (column == apple_x && row == apple_y) 
            {
                map[row][column] = " ó ";
            } else 
            {
                map[row][column] = "   ";
            }

        }
    }

    while (is_game_over != true)
    {
        system("clear");

        if (snake_y == 0 || snake_y == height - 1 || snake_x == width || snake_x == -1) {
            is_game_over = true;
            std::cout << "\n\nYou ran away! Game Over!\n" << std::endl;
            break;
        }


        for (int row = 0; row < height; row++)
        {

            for (int column = 0; column < width; column++) 
            {

                if (column == apple_x && row == apple_y && column != snake_x && row != snake_y) 
                {
                    map[row][column] = " ó ";
                }

                std::cout << map[row][column];
            }

            std::cout << "\n";
        }

        if (apples_collected == apples_needed) {
            is_game_over = true;
            std::cout << "\n\nYou win! All " << apples_collected << " apples have been collected!\n" << std::endl;
            break;
        }

        if (snake_x == apple_x && snake_y == apple_y) {
            apples_collected++;
            apple_x = (rand() % width - 1) + 1;
            apple_y = 2 + (rand() % static_cast<int>(8 - 2 + 1));
        }
        
        system("stty raw");
    
        pressed_key = getchar();


        if (pressed_key == KEY_RIGHT) 
        {
            snake_x++;
            map[snake_y][snake_x - 1] = "   ";
        }

        if (pressed_key == KEY_LEFT) 
        {
            snake_x--;
            map[snake_y][snake_x + 1] = "   ";
        }

        if (pressed_key == KEY_DOWN) 
        {
            snake_y++;
            map[snake_y - 1][snake_x] = "   ";
        }

        if (pressed_key == KEY_UP) 
        {
            snake_y--;
            map[snake_y + 1][snake_x] = "   ";
        }


        map[snake_y][snake_x] = " ༼ ";

        system("stty cooked");
    };

    return 0;
}

/* run: g++ -std=c++11 snake-game.cpp -o a.out */
