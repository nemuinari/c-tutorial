#include <iostream>
#include <memory> // std::unique_ptr

class Base
{
    int value;

public:
    explicit Base(int v)
      : value{v} {}

    void show() const
    {
        std::cout << "Value: " << value << std::endl;
    }
};

void practice()
{
    std::unique_ptr<Base> base = std::make_unique<Base>(42);

    (*base).show(); // 関節参照演算子の使用
    base->show();   // アロー演算子の使用
}
