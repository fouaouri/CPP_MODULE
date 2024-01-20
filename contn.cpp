#include <iostream>
#include <vector>

// int main(){
//     std::vector<int> nb = {1, 3, 2, 0};
//     nb.push_back(7);
//     for (const auto &num : nb) {
//         std::cout << num << " ";
//     }
// }

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    for (auto it = numbers.rbegin(); it != numbers.rend(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}