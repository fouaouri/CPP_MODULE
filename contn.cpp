#include <iostream>
#include <vector>
#include <array>
#include <map>
#include <unordered_map>

using namespace std;
// int main(){
//     std::vector<int> nb = {1, 3, 2, 0};
//     nb.push_back(7);
//     for (const auto &num : nb) {
//         std::cout << num << " ";
//     }
// }

// int main() {
//     std::vector<int> numbers = {1, 2, 3, 4, 5};

//     for (auto it = numbers.begin(); it != numbers.end(); ++it) {
//         std::cout << *it << " ";
//     }

//     return 0;
// }

int main(){
    // int *a = new int[10]() ;
    // cout << a[5] << endl;

    // std::array<int , 2>b;
    // b[20] = 6;
    // cout << b.size() << endl;
    // cout << *b.data() << endl;
    // cout << b[20] << endl;
    std::unordered_map<string, int>b;
    b["one"] = 1;
    b["two"] = 2;
    b["three"] = 3;
    b["four"] = 4;
    // b["five"] = 5;

    for(auto i : b)
        cout << i.first << " = " << i.second << endl;

}