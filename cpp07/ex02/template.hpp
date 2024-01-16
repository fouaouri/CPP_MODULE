#pragma once

#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
    public :
        T *arr;
        unsigned int len;
        Array(): arr(new T[0]) , len(0){};
        Array(unsigned int n) : arr(new T[n]), len(n){};
        Array(Array &copy){
            *this = copy;
        };
        Array &operator=(Array &operat){
            this->len = operat.len;
            for(int i = 0; i < this->len; i++)
                this->arr[i] = operat.arr[i];
            return(*this);
        }
        T &operator[](unsigned int n) const{
            std::cout << "hey" << std::endl;
                if(n <= this->len)
                {
                    for(int i = 0; i < this->len; i++)
                        if(i == n)
                            return(this->arr[i]);
                }
                else
                    throw Array::OutofBounds();
        };
        unsigned int    size() const{return(len);};
        class OutofBounds : public std::exception{
            const char* what() const throw(){
                return "Your index is out of bounds !";
            }
        };
        ~Array(){delete [] arr;};
};