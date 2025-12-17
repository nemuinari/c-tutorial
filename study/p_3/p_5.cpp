#include <iostream>

class Base {
public:
    virtual std::string name() const;
    virtual std::string most_name() const;
};

std::string Base::name() const {
    return "Base";
}

std::string Base::most_name() const {
    return "Base(most_name)";
}

class Derived : public Base {
public:
    std::string name() const override;
    std::string most_name() const override;
};

std::string Derived::name() const {
    return "Derived";
}

std::string Derived::most_name() const {
    return "Derived(most_name)";
}

class MoreDerived : public Derived {
public:
    std::string name() const override;
    std::string most_name() const override;
};

std::string MoreDerived::name() const {
    return "MoreDerived";
}

std::string MoreDerived::most_name() const {
    return "MoreDerived(most_name)";
}

void practice() {
    Base base;
    Derived derived;
    MoreDerived more_derived;

    std::cout << base.name() << std::endl;
    std::cout << derived.name() << std::endl;
    std::cout << more_derived.name() << std::endl;

    std::cout << base.most_name() << std::endl;
    std::cout << derived.most_name() << std::endl;
    std::cout << more_derived.most_name() << std::endl;
}

// Derived: 派生