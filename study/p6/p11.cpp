#include <iostream>

class A
{
public:
    void foo() const {}
};

class B
{
    A a;

public:
    operator const A&() { return a; }
};

void practice()
{
    B b;

    static_cast<const A&>(b).foo();
}
