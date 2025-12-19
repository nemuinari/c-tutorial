#include <iostream>

int get_counter() {
    static int counter = 0;
    return counter++;    
}

void practice() {
    std::cout << get_counter() << std::endl;
    std::cout << get_counter() << std::endl;
    std::cout << get_counter() << std::endl;
}
