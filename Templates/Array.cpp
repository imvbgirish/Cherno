#include "Array.h"

template<typename T, typename N>
int Array<T, N>::add(T a, N b)
{
    return a+b;
}

template class Array<int,float>;
