// Use `g++ -std=c++11 stack.cpp -o a.out` to compile this program

#include <stack>
#include <iostream>
#include <string>

int main()
{
    std::stack < int > numbersStack;
    
    for (int i = 0; i < 5; i++) 
    {
        numbersStack.push(i * 11);
        std::cout << "added ";
        std::cout << numbersStack.top();
        std::cout << " to the numbers stack" <<  std::endl;
    }

    while( numbersStack.empty() == false )
    {
        std::cout << numbersStack.top() << ", ";
        numbersStack.pop();
    }

    std::cout << "have been removed from the stack!" << std::endl;
   
    return 0;
}