#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string sentence;
    cout << "What sentence would you like to save in your file?" << endl;
    cin >> sentence;
    ofstream myfile;
    myfile.open("sentence.txt");
    myfile << sentence;
    myfile.close();
    return 0;
}