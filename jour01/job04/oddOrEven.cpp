#include <iostream>
using namespace std;

int main()
{
    int inputNum = 0, sum = 0;
    cout << "Veuillez entrer un entier" << endl;

    cin >> inputNum;

    if (inputNum % 2 == 0)
    {
        cout << inputNum << " est pair" << endl;
    }
    else
    {
        cout << inputNum << " est impair" << endl;
    }

    return 0;
}