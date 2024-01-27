#pragma once 

#include <iostream>
#include <vector>
#include <algorithm>
# include <iterator>

class Span{
    private :
        unsigned int N;
        std::vector<int> arr;
    public :
        int flag;
        Span();
        Span(unsigned int N);
        Span(const Span &copy);
        Span & operator=(const Span &operat);
        unsigned int getN() const;
        void addNumber(unsigned int a);
        unsigned int shortestSpan();
        unsigned int longestSpan();
        ~Span();
};