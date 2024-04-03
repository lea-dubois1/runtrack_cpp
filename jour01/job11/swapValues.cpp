#include "swapValues.hpp"

int main()
{
    int num1 = 1, num2 = 2;
    int &ref1 = num1, &ref2 = num2;

    cout << "Avant swap : ref1 = " << ref1 << ", ref2 = " << ref2 << endl;

    swapValues(ref1, ref2);

    cout << "Après swap : ref1 = " << ref1 << ", ref2 = " << ref2 << endl;

    return 0;
}

void swapValues(int &ref1, int &ref2)
{
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}