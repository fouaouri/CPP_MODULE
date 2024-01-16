#include "template.hpp"

int main(){
    Array <int> arr(5);
    for(int i = 0; i < (int)arr.len; i++)
        arr.arr[i] = i;
    try{
        std::cout << arr.arr[3] << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}