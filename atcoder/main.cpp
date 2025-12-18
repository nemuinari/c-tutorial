#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    char op;

    std::cin >> A >> op >> B;
    if (op == '+'){
        std::cout << A + B << std::endl;
    } else {
        std::cout << A - B << std::endl;
    }

    return 0;
}
// A - Addition and Subtraction Easy
