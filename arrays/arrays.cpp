#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n, numbers[100];
    cout << "Pick a range: " << endl;
    cin >> n;

    cout << "Insert only " << n << " numbers!" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    cout << "The first number is " << numbers[0] << endl;
    cout << "The last number is " << numbers[n - 1] << endl;
}