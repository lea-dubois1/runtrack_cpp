#include <iostream>
using namespace std;

int main()
{
    int num1 = 0, num2 = 0, temp = 0;
    cout << "Veuillez entrer deux entier" << endl;

    cin >> num1;
    cin >> num2;

    cout << "Avant échange, num1 = " << num1 << " et num2 = " << num2 << endl;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "Après échange, num1 = " << num1 << " et num2 = " << num2 << endl;

    return 0;
}