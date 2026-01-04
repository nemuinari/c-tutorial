#include <iostream>

class Integer
{
    float value;

public:
    explicit Integer(float value)
      : value(value) {}

    Integer& operator+=(const Integer& rhs); // 加算演算子のオーバーロード
    Integer& operator-=(const Integer& rhs); // 減算演算子のオーバーロード

    void show() const;
};

Integer& Integer::operator+=(const Integer& rhs)
{
    value += rhs.value;
    return *this;
}
Integer& Integer::operator-=(const Integer& rhs)
{
    value -= rhs.value;
    return *this;
}

void Integer::show() const
{
    std::cout << "Integer Value: " << value << std::endl;
}

void practice()
{
    Integer x{10.5f};
    Integer y{3.2f};
    Integer z{5.0f};

    x += y; // x = x + y
    x -= z; // x = x - z
    x.show();
}
