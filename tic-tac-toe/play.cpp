#include <iostream>


int main() {
    std::string test;
    std::cout << "enter a string: ";
    std::cin >> test;
    for (int i=1; i<=10; i++) {
        std::cout << i << "\n";
    }
    std::cout << "Done!, " << test << "\n";
}