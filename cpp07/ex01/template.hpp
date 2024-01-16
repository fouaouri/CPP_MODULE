#pragma once

#include <iostream>
#include <string>

template <typename T,typename T1>
void    iter(T *arr, int size, void (*fun)(T1)){
    for (int i = 0; i < size; i++)
        fun(arr[i]);
}
