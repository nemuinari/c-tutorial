#include <iostream>

// overload operator
class Float {
    float value;

public:
    Float(float v)
      : value(v) {}

    Float operator+(const Float& other) const;
    Float operator-(const Float& other) const;
    Float operator*(const Float& other) const;
    Float operator/(const Float& other) const;

    void show() const;
};

Float Float::operator+(const Float& other) const {
    return Float(value + other.value);
}

Float Float::operator-(const Float& other) const {
    return Float(value - other.value);
}

Float Float::operator*(const Float& other) const {
    return Float(value * other.value);
}

Float Float::operator/(const Float& other) const {
    return Float(value / other.value);
}

void Float::show() const {
    std::cout << "value: " << value << std::endl;
}

void practice() {
    Float x = 5.0f;
    Float y = 2.0f;
    Float z = 3.0f;

    auto result = (x + y) * z - (x / y);
    result.show();
}
