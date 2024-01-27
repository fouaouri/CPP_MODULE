#include "Span.hpp"

Span::Span(unsigned int N) : N(N), arr(std::vector<int>()){

}

Span::Span(const Span &copy){
    *this = copy;
}

Span & Span::operator=(const Span &operat){
    this->N = operat.N ;
     this->arr =operat.arr ;
    return(*this);
}

void Span::addNumber(unsigned int a){
    this->arr.push_back(a);
    this->flag += 1;
}

unsigned int Span::getN() const{
    return(this->N);
}

unsigned int Span::shortestSpan(){
    if(arr.empty())
    {
        std::cout << "Error : empty vector ." << std::endl;
        exit(1);
    }
    std::sort(this->arr.begin(), this->arr.end());
    std::vector<int> arrr;
    for(int i = 0; i < this->flag; i++)
        arrr.push_back(abs(this->arr[i + 1] - this->arr[i]));
    std::vector<int>::iterator out = std::min_element(arrr.begin(), arrr.end());
    return(*out);
}

unsigned int Span::longestSpan(){
    if(arr.empty())
    {
        std::cout << "Error : empty vector ." << std::endl;
        exit(1);
    }
    unsigned int out = 0;
    std::vector<int>::iterator max = std::max_element(this->arr.begin(), this->arr.end());
    std::vector<int>::iterator min = std::min_element(this->arr.begin(), this->arr.end());

    out = *max - *min;
    return (out);
}

Span::~Span(){

};
