#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

class NotFoundException : public std::exception {
     const char * what() const throw(){
          return("The value u are looking for not found !");
     }
};

template <typename T>

void easyfind(T container, int b){

     std::vector<int>::iterator it = std::find(container.begin(), container.end(), b);
     if(it != container.end())
     {
          std::cout << "Value " << *it << " found at position : ";
          std::cout << std::distance(container.begin(), it) << std::endl;
     }
     else
          throw NotFoundException();
}
