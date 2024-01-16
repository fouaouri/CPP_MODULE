#include <iostream>

// #pragma GCC diagnostic ignored "-Wpointer-to-int-cast"
struct data{
    int a;
    std::string b;
};
using  namespace std;
// int main(){
//     data *a = new data;
//     std::cout << a << endl;
//     int b = reinterpret_cast<int>(a);
//     std::cout << b << endl;
//     data *c = reinterpret_cast<data *>(b);
//     std::cout <<  c << endl;
// }

int main(){
    // int a = 5;
    // float b = 15.99;
    // // a = b;
    // b = static_cast<float>(a);
    // cout << b << endl;
    char c;
    // int *a = (int *)(c);
    // *a = 5;
    int *b = static_cast<int*>(&c);
    cout << b << endl;
}