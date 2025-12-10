#include <iostream>

void show_message(int value);
void switch_example();
void if_example();

void practice() {
    std::cout << "1.4.1 >> " << std::endl;
    show_message(9);
    show_message(15);
    show_message(20);

    std::cout << "1.4.2 >> " << std::endl;
    switch_example();

    std::cout << "1.4.3 >> " << std::endl;
    if_example();
}

void show_message(int value) {
    if (value < 10 || value >= 20) {
        std::cout << "10以上20未満ではありません" << std::endl;
    } else {
        std::cout << "10以上20未満です" << std::endl;
    }
}

void switch_example() {
    int a = 2;
    switch (a + 2) {
        case 1:
            std::cout << "a + 1 is 1" << std::endl;
            break;
        case 2:
            std::cout << "a + 1 is 2" << std::endl;
            break;
        case 3:
            std::cout << "a + 1 is 3" << std::endl;
            break;
    }
}

void if_example() {
    int a = 2;
    if (a + 1 == 1) {
        std::cout << "a + 1 is 1" << std::endl;
    } else if (a + 1 == 2) {
        std::cout << "a + 1 is 2" << std::endl;
    } else if (a + 1 == 3) {
        std::cout << "a + 1 is 3" << std::endl;
    } else {
        std::cout << "a + 1 is not 1, 2, or 3" << std::endl;
    }
}