#include "easyfind.hpp"

int main(){
    std::vector<int> tab;
    int tab1[5] = {1, 12, 8, 0, 4};
    std::string str = "Hello how is going";
    for(int i = 0; i < 5; i++)
        tab.push_back(tab1[i]);
    std::vector<int> tabb;
    for(int i = 0; i < (int)str.length(); i++)
        tabb.push_back(str[i]);
    int b = 4;
    int c = 'h';
    easyfind(tab, b);
    easyfind(tabb, c);
}