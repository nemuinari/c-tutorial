#include <iostream>

struct product {
    int id;
    int price;
    int stock;
};

void show_product(product* ptr) {
    std::cout << "商品ID: " << ptr->id << std::endl;
    std::cout << "価格: " << ptr->price << std::endl;
    std::cout << "在庫数: " << ptr->stock << std::endl;
}

void practice() {
    product pen = {
        0,
        100,
        200,
    };
    product* ptr = &pen;
    show_product(ptr);
}