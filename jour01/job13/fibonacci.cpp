#include "fibonacci.hpp"

template <int N>
int fibonacci()
{
    return Fibonacci<N>::value;
}

int main()
{
    cout << "Le 1er terme de la suite de Fibonacci est : " << fibonacci<1>() << endl;
    cout << "Le 2eme terme de la suite de Fibonacci est : " << fibonacci<2>() << endl;
    cout << "Le 3eme terme de la suite de Fibonacci est : " << fibonacci<3>() << endl;
    cout << "Le 4eme terme de la suite de Fibonacci est : " << fibonacci<4>() << endl;
    cout << "Le 5eme terme de la suite de Fibonacci est : " << fibonacci<5>() << endl;
    cout << "Le 6eme terme de la suite de Fibonacci est : " << fibonacci<6>() << endl;
    cout << "Le 7eme terme de la suite de Fibonacci est : " << fibonacci<7>() << endl;
    cout << "Le 8eme terme de la suite de Fibonacci est : " << fibonacci<8>() << endl;
    cout << "Le 9eme terme de la suite de Fibonacci est : " << fibonacci<9>() << endl;
    cout << "Le 10eme terme de la suite de Fibonacci est : " << fibonacci<10>() << endl;

    return 0;
}