#include <iostream>

class Object {
    int value;

public:
    Object(int value)
      : value{value} {}

    Object& operator++();   // prefix: ++obj
    Object operator++(int); // postfix: obj++

    Object& operator--();   // prefix: --obj
    Object operator--(int); // postfix: obj--

    void show() const {
        std::cout << "value: " << value << std::endl;
    }
};

Object& Object::operator++() {
    ++value; // prefix increment
    return *this;
}

Object Object::operator++(int) {
    auto temp = *this; // make a copy for postfix
    value++;
    return temp;
}

Object& Object::operator--() {
    --value; // prefix decrement
    return *this;
}

Object Object::operator--(int) {
    auto temp = *this; // make a copy for postfix
    value--;
    return temp;
}

void practice() {
    Object x = 10;

    ++x;
    x.show(); // 11

    x++;
    x.show(); // 12

    --x;
    x.show(); // 11

    x--;
    x.show(); // 10
}

// overload operator
/*
class Float {
    float value;

public:
    Float(float v)
      : value(v) {}

    Float operator+(const Float& other) const;
    Float operator-(const Float& other) const;

    Float operator+() const;
    Float operator-() const;

    void show() const;
};

Float Float::operator+(const Float& other) const {
    return Float(value + other.value);
}

Float Float::operator-(const Float& other) const {
    return Float(value - other.value);
}

Float Float::operator+() const {
    return Float{value};
}

Float Float::operator-() const {
    return Float{-value};
}

void Float::show() const {
    std::cout << "value: " << value << std::endl;
}

void practice() {
    Float x = 5.0f;
    Float y = 2.0f;
    Float z = 3.0f;

    auto result = x - -y + +z;
    result.show();
}
*/
