#pragma once

#include <iostream>
#include <string>

template <typename T>
void    iter(T *arr, int size, void (*fun)(T)){
    for (int i = 0; i < size; i++)
        fun(arr[i]);
}
