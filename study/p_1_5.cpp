#include <iostream>

void show_value();
void float_example();
void pointer_example();

// execute
void practice() {
    show_value();
    float_example();
    pointer_example();
}

// 1.5.1
void show_value() {
    float f = 42.195f;  // 不動小数点型なのでfloatを使う
    std::cout << f << std::endl;
}

// 1.5.2
void float_example() {
    float f = 100.001f;
    f -= 100;
    std::cout << f << std::endl;
}

// 1.5.3
void pointer_example() {
    int i = 0;

    int* p = &i;  // int型のポインタpにiのアドレスを代入
    *p = 42;      // ポインタpを介してiに42を代入
    std::cout << i << std::endl;
}