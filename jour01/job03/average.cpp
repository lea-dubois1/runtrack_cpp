#include <iostream>
using namespace std;

int main()
{
    int inputNum = 0, sum = 0;
    cout << "Veuillez entrer 5 entiers" << endl;

    for (int i = 0; i < 5; i++)
    {
        cin >> inputNum;
        sum += inputNum;
    }

    cout << sum / 5 << endl;
    return 0;
}