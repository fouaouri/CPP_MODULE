#pragma once

#include <iostream>
#include <stdexcept>
#include <cmath>


template <typename T>
class Array {
        T *arr;
        unsigned int len;
    public :
        Array(): arr(new T()) , len(0){};
        Array(unsigned int n) : arr(new T[n]()), len(n){};
        Array(Array &copy){
            arr = NULL;
            *this = copy;
        }
        Array &operator=(Array &operat){
            if(arr)
                delete arr;
            arr = new T[operat.len]();
            this->len = operat.len;
            for(unsigned int i = 0; i < this->len; i++)
                this->arr[i] = operat.arr[i];
            return(*this);
        }
        T &operator[](unsigned int n) const{
                if(n >= this->len)
                    throw Array::OutofBounds();
                return this->arr[n];
        };
        unsigned int    size() const{return(len);};
        class OutofBounds : public std::exception{
            const char* what() const throw(){
                return "Your index is out of bounds !";
            }
        };
        ~Array(){delete [] arr;};
};