#include <iostream>

class Integer {
    int value;

public:
    Integer(int v)
      : value{v} {}

    bool operator<(const Integer& other) const {
        return value < other.value;
    }
};

void practice() {
    Integer a = 10;
    Integer b = 20;

    if (a < b) {
        std::cout << "a is less than b" << std::endl;
    } else {
        std::cout << "a is not less than b" << std::endl;
    }
}
