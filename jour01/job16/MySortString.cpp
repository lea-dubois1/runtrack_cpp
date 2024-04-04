#include "MySortString.hpp"

int main()
{
    char str[] = "Hello World !";
    std::cout << MySortString(str) << std::endl;

    return 0;
}

char* MySortString(char* str)
{
    size_t size = std::strlen(str);
    char temp = ' ';

    for (size_t i = size; i > 1; i--)
    {
        for (size_t j = 0; j < i - 1; j++)
        {
            if (str[j + 1] < str[j])
            {
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    return str;
}

