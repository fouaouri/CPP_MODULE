#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
# include <iterator>
#include <stack>

template <typename T>

class MutantStack : public std::stack<T>{
    private :
        std::stack<T> stack;
    public :
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        MutantStack(): stack(std::stack<T>()){};
        MutantStack(MutantStack &copy){*this = copy;};
        MutantStack &operator=(MutantStack &operat){
            this->stack = operat.stack;
            return(*this);
        };
        ~MutantStack(){};
        std::stack<T> getStack(){return(this->stack);};
        iterator begin() {return(std::stack<T>::c.begin());};
        iterator end()  {return(std::stack<T>::c.end());};
        iterator rbegin()  {return(std::stack<T>::c.rbegin());};
        iterator rend() {return(std::stack<T>::c.rend());};
        const_iterator begin() const {return(std::stack<T>::c.begin());};
        const_iterator end() const {return(std::stack<T>::c.end());};
        const_iterator rbegin() const {return(std::stack<T>::c.rbegin());};
        const_iterator rend() const {return(std::stack<T>::c.rend());};
};