#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int *intArray = new int[argc - 1];
    int number = 0;
    int smallest = 0;

    for (int i = 1; i < argc; i++)
    {
        intArray[i - 1] = stoi(argv[i], 0, 10);
    }

    for (int i = 0; i < argc - 1; i++)
    {
        if(smallest > intArray[i] || i == 0)
        {
            smallest = intArray[i];
        }
    }
    
    cout << smallest << endl;
    return 0;
}