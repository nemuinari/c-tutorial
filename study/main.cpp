#include <iostream>

struct S {
    int x;
    int y;
};

union U {
    S s;
};

int main() {
    U u = {};
    u.s.x = 10;
    u.s.y = 20;

    std::cout << "u.s.x: " << u.s.x << ", u.s.y: " << u.s.y << std::endl;
    return 0;
}
// p.2.1.1