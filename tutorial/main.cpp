#include <iostream>
#include <array>

int main() {
    std::array<int, 3> array_1 = {1, 2, 3};
    std::array<int, 3> array_2 = array_1;

    for (int i = 0; i < array_2.size(); ++i) {
        std::cout << array_2[i] << std::endl;
    }
    return 0;
}