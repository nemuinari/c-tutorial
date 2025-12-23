#include <iostream>

class Base {
  int i;

public:
  explicit Base(int i) : i(i) {}

  int local() {
    int i = 42;
    return i;
  }

  int* dyn_alloc() {
    int* ptr = new int;
    *ptr = 42;
    return ptr;
  }
};

void practice() {
  Base b(100);
  int* d = b.dyn_alloc();

  std::cout << "value: " << *d << std::endl;
  delete d;
};
