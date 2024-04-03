#include <iostream>
using namespace std;

#ifndef FIBONACCI
#define FIBONACCI

template <int N>
struct Fibonacci 
{
    static const int value = Fibonacci<N - 1>::value + Fibonacci<N - 2>::value;
};

template <>
struct Fibonacci<0>
{
    static const int value = 0;
};

template <>
struct Fibonacci<1>
{
    static const int value = 1;
};

template <int N>
int fibonacci();

#endif