#include "template.hpp"

template <typename T>
void print(T a){
    std::cout << a << std::endl;
}

int main(){
    int arr[5] = {2, 1, 8, 15, 0};
    std::string str[2] = {"Hello World", "Titim"};
    iter(arr, 5, print);
    iter(str, 2, print);

}