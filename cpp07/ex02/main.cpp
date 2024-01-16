#include "template.hpp"

int main(){
    Array <int> arr;
    // for(int i = 0; i < 5; i++)
    //     arr[i] = i;
    Array <int> arr1(arr);
    try{
        std::cout << arr[0] << std::endl;
        
        std::cout << arr[30] << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}