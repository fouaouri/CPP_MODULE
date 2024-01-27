#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>

void easyfind(T container, int b){

     std::vector<int>::iterator it = std::find(container.begin(), container.end(), b);
     if(it != container.end())
     {
     std::cout << "Value " << b << " found at position : ";
     std::cout << std::distance(container.begin(), it) << std::endl;
     }
     else
          std::cout << "The value u are looking for not found !" << std::endl;
}
