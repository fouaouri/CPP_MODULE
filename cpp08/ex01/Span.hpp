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
        Span();
        Span(unsigned int N);
        // Span(Span &copy);
        Span & operator=(Span &operat);
        unsigned int getN() const;
        void addNumber(unsigned int a);
        unsigned int shortestSpan();
        unsigned int longestSpan();
        ~Span();
};