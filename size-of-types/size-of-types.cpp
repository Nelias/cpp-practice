#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of short int: " << sizeof(short int) << endl;
    cout << "Size of long int: " << sizeof(long int) << endl;
    cout << "Size of long long: " << sizeof(long long) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;
    cout << "\n"
         << endl;
    cout << argc << endl;
    cout << argv[1] << endl;
    cout << "This is the size of your argument: " << sizeof(argv[1]) << endl;
}