#include <iostream>
#include <string>

class example {
    std::string m_name;
    int m_age;

public:
    // コンストラクター
    example();

    // デストラクター
    ~example();

    void set_data(std::string name, int age);
    std::string get_name() const;
    int get_age() const;
};

example::example() : m_name(""), m_age(0) {
    std::cout << "コンストラクターが呼ばれました。" << std::endl;
}

example::~example() {
    std::cout << "デストラクターが呼ばれました。" << std::endl;
}

void example::set_data(std::string name, int age) {
    m_name = name;
    m_age = age;
}

std::string example::get_name() const {
    return m_name;
}

int example::get_age() const {
    return m_age;
}

void practice() {
    example person;
    person.set_data("Alice", 30);

    std::cout << "Name: " << person.get_name() << std::endl;
    std::cout << "Age: " << person.get_age() << std::endl;
}