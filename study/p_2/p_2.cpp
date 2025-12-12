#include <iostream>

class product {
    int id;
    int price;
    int stock;

public:
    int get_id();
    int get_price();
    int get_stock();
    void _set(int new_id, int new_price, int new_stock);
};

int product::get_id() { 
    return id; 
}

int product::get_price() { 
    return price; 
}

int product::get_stock() { 
    return stock; 
}

void product::_set(int new_id, int new_price, int new_stock) {
    id = new_id;
    price = new_price;
    stock = new_stock;
}

void practice() {
    product pen;

    pen._set(0, 100, 200);

    product* ptr = &pen;
    std::cout << "ID: " << ptr->get_id() << std::endl;
    std::cout << "Price: " << ptr->get_price() << std::endl;
    std::cout << "Stock: " << ptr->get_stock() << std::endl;
}