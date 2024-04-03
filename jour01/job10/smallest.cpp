#include "smallest.hpp"

int main(int argc, char **argv)
{
    int **intArray = new int*[argc - 1];

    for (int i = 1; i < argc; i++)
    {
        intArray[i - 1] = new int;
        *intArray[i - 1] = stoi(argv[i], 0, 10);
    }

    cout << findSmallestInt(intArray, argc - 1) << endl;
    return 0;
}

int findSmallestInt(int **intArray, const size_t size)
{
    int number = 0;
    int smallest = 0;

    for (size_t i = 0; i < size - 1; i++)
    {
        if(smallest > *intArray[i] || i == 0)
        {
            smallest = *intArray[i];
        }
    }
    
    return smallest;
}