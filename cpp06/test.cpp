#include <iostream>

#pragma GCC diagnostic ignored "-Wpointer-to-int-cast"
struct data{
    int a;
    std::string b;
};
using  namespace std;
int main(){
    data *a = new data;
    std::cout << a << endl;
    int b = reinterpret_cast<int>(a);
    std::cout << b << endl;
    data *c = reinterpret_cast<data *>(b);
    std::cout <<  c << endl;
}

