#include <iostream>

class A {
    int m_v;

public:
    explicit A(int); 
    int v() const {
        return m_v;
    }
};

A::A(int v) : m_v(v) {
}

void practice() {
    A y(42); // OK

    // y.v() == 42; // true
    std::cout << "Result!!: " << y.v() << std::endl;
}
