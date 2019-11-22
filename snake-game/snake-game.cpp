#include <iostream>
#include <vector>
#include <ctime>

class Snake
{
private:
    int snake_head_position, random_number, dollars, tail_coordinates, bonus, time, tail;
    char *map;
    bool L, R, D, U, A; // L = LEFT, R = RIGHT, D = DOWN, U = UP, A = A BOOLEAN
    std::vector <int> past; // A special vector for deleting old parts

public:
    Snake()
    {
        map = new char [2000];
        L = 1;
        R = 0;
        D = 0;
        U = 0;
        A = 0;
        tail = 1; // Actually it will not have a tail until it eats the first apple
        snake_head_position = 1000; // Position of a snake at the beggining
        dollars = 0; // Money
        bonus = 0;
        time = 40; // For bonus apples
        random_number = 1; // So first apple generation will not be bugged
	}

    ~Snake()
    {
        delete [] map;
    }

    void graphics();
    void gameLogic();
    void KEYBOARD();
    void apple();
    int gameOver();
    void start();
    friend void clearScreen();
    friend void sp(); // Choose a color function
    friend void s(); // Forget color choice
};

int main()
{
    srand((unsigned)time(0)); // Random numbers will always be random
    Snake SNAKE;
    SNAKE.start();
}