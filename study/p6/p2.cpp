#include <iostream>

// 算術演算子のオーバーロード
class Integer {
    int value;

public:
    Integer(int value)
      : value(value) {}

    Integer operator+(const Integer& other) const; // 加算演算子のオーバーロード
    Integer operator-(const Integer& other) const; // 減算演算子のオーバーロード

    Integer operator+() const; // 単項プラス演算子のオーバーロード
    Integer operator-() const; // 単項マイナス演算子のオーバーロード

    void show() const;
};

Integer Integer::operator+(const Integer& other) const {
    return Integer{value + other.value}; // 新しいIntegerオブジェクトを返す
}

Integer Integer::operator-(const Integer& other) const {
    return Integer{value - other.value}; // 新しいIntegerオブジェクトを返す
}

Integer Integer::operator+() const {
    return *this; // 単項プラスの効果はそのまま返す
                  // return Integer{value}; としても同じ効果
}

Integer Integer::operator-() const {
    return Integer{-value}; // 単項マイナスの効果を適用
}

void Integer::show() const {
    std::cout << "Integer Value: " << value << std::endl;
}

void practice() {
    Integer x = 10;
    Integer y = 3;
    Integer z = 7;

    auto v = x - -y + +z; // 単項演算子と二項演算子の組み合わせ
    v.show();             // 結果を表示
}
