#include <iostream>

//reverse()
void reverse(int* array, int size) {
    for(int i = 0; i < size / 2; i++) {
        int t = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = t;
    }
}

void practice() {
    int array[] = {0, 1, 2, 3, 4};

    reverse(array, 5);
    std::cout << array[0] << std::endl;
    std::cout << array[1] << std::endl;
    std::cout << array[2] << std::endl;
    std::cout << array[3] << std::endl;
    std::cout << array[4] << std::endl;

    // ポインターで列挙
    int* ptr = array;
    std::cout << " -- pointer -- " << std::endl;
    std::cout << ptr[0] << std::endl;
    std::cout << ptr[1] << std::endl;
    std::cout << ptr[2] << std::endl;
    std::cout << ptr[3] << std::endl;
    std::cout << ptr[4] << std::endl;
}
