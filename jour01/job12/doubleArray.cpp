#include "doubleArray.hpp"

int main()
{
    size_t size = 3;
    int intArray[size] = {1, 2, 3};
    doubleArray(intArray, size);
    displayArray(intArray, size);
    return 0;
}

void doubleArray(int *intArray, const size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        intArray[i] *= 2;
    }
}

void displayArray(const int *intArray, const size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << intArray[i] << endl;
    }
}