#include <iostream>
#include <map>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> persons = {
        {"Alice", 18},
        {"Bob", 20},
    };
    std::cout << "Alice: " << persons["Alice"] << "\n"
              << "Bob: " << persons["Bob"] << std::endl;

    persons.insert({"Charlie", 22});
    std::cout << "Charlie: " << persons["Charlie"] << "\n" << std::endl;
    return 0;
}