#include <iostream>
#include <string>
#include <vector>

class product {
  int id;
  std::string name;
  int price;

public:
  product(int id, std::string name, int price) : id(id), name(name), price(price) {
  }
  void show() const {
    std::cout << "id: " << id << std::endl;
    std::cout << "name: " << name << std::endl;
    std::cout << "price: " << price << std::endl;
    std::cout << std::endl;
  }
};

void practice() {
  std::vector<product> pro;

  pro.push_back(product{1, "smart phone", 600000});
  pro.push_back(product{2, "tablet", 350000});

  pro[0].show();
  pro[1].show();
}

/*
#include <iostream>

class product {
    int id;
    std::string name;
    int price;

public:
    explicit product(int id, std::string name, int price)
        : id(id), name(name), price(price) {}
    product() : id(0), name("none"), price(0) {}
    void show() const;
};

void product::show() const {
    std::cout << "id: " << id << std::endl;
    std::cout << "name: " << name << std::endl;
    std::cout << "price: " << price << std::endl;
    std::cout << std::endl;
}

void practice() {
    product p[4] = {
        product {1, "smart phone", 600000},
        product {2, "tablet", 350000},
    };

    p[0].show();
    p[1].show();
}
*/
