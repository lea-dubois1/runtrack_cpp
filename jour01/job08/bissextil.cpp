#include <iostream>
using namespace std;

int main()
{
    int input = 0;

    cout << "Veuillez entrer une année : ";
    cin >> input;

    if((input % 4 == 0 && input % 100 != 0) || input % 400 == 0)
    {
        cout << "L'année " << input << " est bissextile" << endl;
    }
    else
    {
        cout << "L'année " << input << " n'est pas bissextile" << endl;
    }
    
    return 0;
}