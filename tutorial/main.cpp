#include <iostream>
#include <vector>
#include <set>

int main() {
    std::vector<int> x = {0, 1, 2, 3, 4};

    /* for文
    for (auto it = x.begin(); it != x.end(); ++it) {
        std::cout << *it << std::endl;
    } */

    /* 範囲for文
    for (auto&& e : x) {
        std::cout << e << std::endl;
    } */

    // C++23 範囲for文: シンプルに書ける
    for (auto e : x) {
        std::cout << e << std::endl;
    }

    return 0;
}