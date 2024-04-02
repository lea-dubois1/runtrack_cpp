#include <iostream>
using namespace std;

int main()
{
    string input = "";
    int numLetterBegin = 0;
    char temp;

    cout << "Veuillez un entier : ";
    cin >> input;

    for (int i = input.length(); i > input.length() / 2; i--)
    {
        temp = input[i - 1];
        input[i - 1] = input[numLetterBegin];
        input[numLetterBegin] = temp;
        numLetterBegin++;
    }

    cout << "result : " << input << endl;
    return 0;
}