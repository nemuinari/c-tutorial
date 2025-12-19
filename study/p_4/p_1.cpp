#include <iostream>

int sum(int lhs, int rhs);

void practice(){
    int s = sum(10, 5);

    std::cout << s << std::endl;
}

int sum(int lhs, int rhs){
    return lhs + rhs;
}
