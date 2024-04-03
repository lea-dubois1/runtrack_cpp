#include "cube.hpp"

int main()
{
    cout << cubeSum(7) << endl;
    return 0;
}

int cubeSum(int num)
{
    return num == 5 ? pow(num, 3) : pow(num, 3) + cubeSum(num - 1);
}