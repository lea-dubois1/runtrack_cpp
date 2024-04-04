#include "oddOrEvenBits.hpp"

int main()
{
    cout << isEven(1) << endl;
    cout << isEven(2) << endl;

    return 0;
}

bool isEven(unsigned num)
{
    return (num & 1) != 1;
}