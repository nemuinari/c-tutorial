#include <iostream>

// 四則演算クラス
class Calculator
{
    int a;
    int b;

public:
    explicit Calculator(int a, int b)
      : a(a), b(b) {}
    // 加算
    int add() const { return a + b; }
    // 減算
    int subtract() const { return a - b; }
    // 乗算
    int multiply() const { return a * b; }
    // 除算
    int divide() const { return a / b; }
};

void practice()
{
    Calculator calc(10, 5);
    std::cout << "加算: " << calc.add() << std::endl;
    std::cout << "減算: " << calc.subtract() << std::endl;
    std::cout << "乗算: " << calc.multiply() << std::endl;
    std::cout << "除算: " << calc.divide() << std::endl;
}
