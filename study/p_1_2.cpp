#include <iostream>

void hello_world();
int sum(int a, int b, int c);
void show_message();

void practice() {
    hello_world();
    std::cout << "sum(5, 1, -2): " << sum(5, 1, -2) << std::endl;
    show_message();
}

// P_1_2_1
void hello_world() { std::cout << "Hello, World!" << std::endl; }

// P_1_2_2
int sum(int a, int b, int c) {
    int total = a + b + c;
    return total;
}

// p_1_2_3
void show_message() {
    std::cout << "Hello, World!!" << std::endl;
    return;

    std::cout << "Hello, return" << std::endl;
}