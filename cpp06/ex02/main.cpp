#include "main.hpp"

Base * generate(void){
    srand(time(0));
    int a = rand() % 3;
    if(a == 0)
        return (new A);
    else if(a == 1)
        return (new B);
    else
        return (new C);
}

void identify(Base* p){
    if(dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if(dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if(dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Not found !!" << std::endl;
}

void identify(Base& p){
    try{
        A &a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a;
    }
     catch(std::exception &e){

    }
    try{
        B &b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        (void)b;

    }
     catch(std::exception &e){

    }
    try{
        C &c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        (void)c;

    }
    catch(std::exception &e){

    }
}

int main(){
    Base *a = generate();
    Base *b = NULL;
    // Base *b = generate();
    // Base *c = generate();
    // Base &d = a;
    // Base &e = b;
    // Base &f = c;

     identify(*a);
     identify(*b);

    //  identify(c);
    //  identify(b);
    // std::cout << identify(e) << std::endl;
    // std::cout << identify(c) << std::endl;
    // std::cout << identify(f) << std::endl;

}