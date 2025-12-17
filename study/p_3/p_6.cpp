#include <iostream>

class Base {
    int a;
    int b;

public:
    void set_numbers(int a, int b);
    int get_total() const;
};

void Base::set_numbers(int a, int b) {
    this->a = a;
    this->b = b;
}

int Base::get_total() const {
    return a + b;
}

void practice() {
    Base base;
    base.set_numbers(3, 7);

    std::cout << "Total: " << base.get_total() << std::endl;
}
